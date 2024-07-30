class TACU_Mercenaries_U_I_Medium_Rifleman: TACU_Mercenaries_U_I_Low_Rifleman {
    editorSubcategory = "TACU_Mercenaries_EdSubCat_Medium";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_oli",
        "H_Bandanna_khk_hs"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_oli",
        "H_Bandanna_khk_hs"
    };
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Rifleman);
};
class TACU_Mercenaries_U_I_Medium_AT: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Rifleman (AT)";
    role = "MissileSpecialist";
    icon = "iconManAT";
    backpack = "TACU_Mercenaries_B_AT_FieldPack_Green";
    weapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "launch_MRAWS_green_rail_F",
        "TACU_Mercenaries_W_Tar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_AT);
};
class TACU_Mercenaries_U_I_Medium_AP: TACU_Mercenaries_U_I_Medium_AT {
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_AP);
};
class TACU_Mercenaries_U_I_Medium_MG: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Machine Gunner";
    backpack = "TACU_Mercenaries_B_MG_FieldPack_Green";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {
        "TACU_Mercenaries_W_Stoner_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Stoner_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_MG);
};
class TACU_Mercenaries_U_I_Medium_Medic: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Medic";
    backpack = "TACU_Mercenaries_B_Medic_FieldPack_Green";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Medic);
};
class TACU_Mercenaries_U_I_Medium_Engineer: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Engineer";
    backpack = "TACU_Mercenaries_B_Engineer_FieldPack_Green";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Engineer);
};
class TACU_Mercenaries_U_I_Medium_Demolitions: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Demolitions";
    backpack = "TACU_Mercenaries_B_Demolitions_FieldPack_Green";
    icon = "iconManExplosive";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Demolitions);
};
class TACU_Mercenaries_U_I_Medium_Grenadier: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "TACU_Mercenaries_W_Gtar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Gtar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Grenadier);
};
class TACU_Mercenaries_U_I_Medium_Marksman: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Marksman";
    icon = "iconManRecon";
    role = "Marksman";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_M14_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Marksman);
};
class TACU_Mercenaries_U_I_Medium_TeamLeader: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {
        "TACU_Mercenaries_W_Tar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Tar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_TeamLeader);
};
class TACU_Mercenaries_U_I_Medium_SquadLeader: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "Binocular",
        "TACU_Mercenaries_W_Gtar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_SquadLeader);
};
class TACU_Mercenaries_U_I_Medium_Crewman: TACU_Mercenaries_U_I_Medium_Rifleman {
    displayName = "Crewman";
    role = "Crewman";
    icon = "iconManEngineer";
    engineer = 1;
    weapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
        "hgun_Pistol_heavy_01_green_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "TACU_Mercenaries_W_Ctar21_Medium",
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
    //EDITORPREVIEW(TACU_Mercenaries_U_I_Medium_Crewman);
};
