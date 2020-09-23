// Backpacks
class TACU_Vietnam_B_US_Medic: CUP_B_AlicePack_OD {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        MACRO_ADDITEM(ACE_surgicalKit,1);
        MACRO_ADDITEM(ACE_fieldDressing,20);
        MACRO_ADDITEM(ACE_packingBandage,10);
        MACRO_ADDITEM(ACE_tourniquet,8);
        MACRO_ADDITEM(ACE_morphine,6);
        MACRO_ADDITEM(ACE_epinephrine,4);
        MACRO_ADDITEM(ACE_salineIV,4);
    };
};

class TACU_Vietnam_B_US_MG: CUP_B_AlicePack_OD {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(CUP_100rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,4);
    };
};

class TACU_Vietnam_B_US_Sapper: CUP_B_AlicePack_OD {
    dlc = QUOTE(PREFIX);
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,2);
    };
    class TransportItems {
        MACRO_ADDITEM(ACE_DefusalKit,1);
        MACRO_ADDITEM(ACE_M26_Clacker,1);
        MACRO_ADDITEM(ACE_wirecutter,1);
        MACRO_ADDITEM(ToolKit,1);
    };
};

// Units
class TACU_Vietnam_U_US_Rifleman_M16_Light: TACU_Main_U_BLUFOR_Soldier_Base {
    DLC = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman (M16 Light)";
    faction = "TACU_Vietnam_US";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_B_BDUv2_dirty_OD";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_ALICE"};
    Items[] = {mag_3("ACE_fieldDressing")};
    respawnItems[] = {mag_3("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
    magazines[] = {mag_4("CUP_20Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_4("CUP_20Rnd_556x45_Stanag")};
    headgearList[] = {
        "CUP_H_FR_BandanaGreen", 0.75,
        "CUP_H_FR_BandanaWdl", 0.75,
        "CUP_H_US_patrol_cap_OD", 0.75,
        "CUP_H_US_patrol_cap_WDL", 0.75,
        "CUP_H_USArmy_Helmet_M1_plain_Olive", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_Vine", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_M81", 0.50,
        "CUP_H_USArmy_Helmet_M1_Vine", 0.10,
        "CUP_H_USArmy_Helmet_M1_Olive", 0.10,
        "CUP_H_USArmy_Helmet_M1_m81", 0.10,
        "", 0.30
    };
    CBA_facewearList[] = {
        "", 0.88,
        "G_Spectacles", 0.05,
        "G_Squares", 0.05,
        "G_Spectacles_Tinted", 0.02
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_M16_Light.jpg);
};

class TACU_Vietnam_U_US_Rifleman_M14_Light: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (M14 Light)";
    uniformClass = "CUP_U_B_BDUv2_roll2_dirty_OD";
    weapons[] = {"CUP_srifle_M14", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_M14", "Throw", "Put"};
    magazines[] = {mag_4("20Rnd_762x51_Mag")};
    respawnMagazines[] = {mag_4("20Rnd_762x51_Mag")};
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_M14_Light.jpg);
};

class TACU_Vietnam_U_US_Rifleman_M16: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (M16)";
    uniformClass = "CUP_U_B_BDUv2_roll_dirty_OD";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_no_bags_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_no_bags_OD"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_plain_Olive", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_Vine", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_M81", 0.50,
        "CUP_H_USArmy_Helmet_M1_Vine", 0.10,
        "CUP_H_USArmy_Helmet_M1_Olive", 0.10,
        "CUP_H_USArmy_Helmet_M1_m81", 0.10
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_M16.jpg);
};

class TACU_Vietnam_U_US_Rifleman_M14: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Rifleman (M14)";
    uniformClass = "CUP_U_B_BDUv2_roll_dirty_OD";
    weapons[] = {"CUP_srifle_M14", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_M14", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_M14.jpg);
};

class TACU_Vietnam_U_US_Rifleman_AT: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    uniformClass = "CUP_U_B_BDUv2_roll_dirty_OD";
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "CUP_launch_M72A6", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "CUP_launch_M72A6", "Throw", "Put"};
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_AT.jpg);
};

class TACU_Vietnam_U_US_Rifleman_Wounded: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (Wounded)";
    uniformClass = "CUP_U_B_BDUv2_roll2_dirty_OD";
    linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    Items[] = {"ACE_fieldDressing"};
    respawnItems[] = {"ACE_fieldDressing"};
    weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_2("CUP_20Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_2("CUP_20Rnd_556x45_Stanag")};
    headgearList[] = {
        "H_HeadBandage_clean_F", 0.30,
        "H_HeadBandage_stained_F", 0.30,
        "H_HeadBandage_bloody_F", 0.30
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Rifleman_Wounded.jpg);
};

class TACU_Vietnam_U_US_Machinegunner: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "CUP_U_B_BDUv2_roll_dirty_OD";
    backpack = "TACU_Vietnam_B_US_MG";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_lmg_M60", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_M60", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {"CUP_100rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {"CUP_100rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_plain_Olive", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_Vine", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_M81", 0.50,
        "CUP_H_USArmy_Helmet_M1_Vine", 0.10,
        "CUP_H_USArmy_Helmet_M1_Olive", 0.10,
        "CUP_H_USArmy_Helmet_M1_m81", 0.10
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Machinegunner.jpg);
};

class TACU_Vietnam_U_US_Grenadier_M79: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Grenadier (M79)";
    uniformClass = "CUP_U_B_BDUv2_roll2_dirty_OD";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_5("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_5("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Grenadier_M79.jpg);
};

class TACU_Vietnam_U_US_Sapper: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Sapper";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    engineer = 1;
    uniformClass = "CUP_U_B_BDUv2_roll2_gloves_dirty_OD";
    backpack = "TACU_Vietnam_B_US_Sapper";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_smg_M3A1_blk", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_M3A1_blk", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67", "SmokeShell"};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_plain_Olive", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_Vine", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_M81", 0.50,
        "CUP_H_USArmy_Helmet_M1_Vine", 0.10,
        "CUP_H_USArmy_Helmet_M1_Olive", 0.10,
        "CUP_H_USArmy_Helmet_M1_m81", 0.10
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Sapper.jpg);
};

class TACU_Vietnam_U_US_Sniper: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Sniper";
    role = "Marksman";
    uniformClass = "CUP_U_B_BDUv2_OD";
    linkedItems[] = {DEFAULT_ITEMS, "H_Booniehat_oli", "CUP_V_B_PASGT_no_bags_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Booniehat_oli", "CUP_V_B_PASGT_no_bags_OD"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"TACU_Vietnam_W_M40A3", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_M40A3", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_6("CUP_5Rnd_762x51_M24"), mag_4("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_6("CUP_5Rnd_762x51_M24"), mag_4("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "H_Booniehat_oli", 0.30,
        "CUP_H_SLA_Boonie", 0.30,
        "H_Booniehat_tna_F", 0.30,
        "tacs_Hat_Boonie_Woodland", 0.30,
        "tacs_Hat_Boonie_RangerGreen", 0.30,
        "CUP_H_USMC_BOONIE_WDL", 0.30
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Sniper.jpg);
};

class TACU_Vietnam_U_US_Sniper_Ghillie: TACU_Vietnam_U_US_Sniper {
    displayName = "Sniper (Ghillie)";
    role = "Marksman";
    uniformClass = "CUP_U_B_BAF_MTP_GHILLIE";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_V_CDF_CrewBelt"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_CDF_CrewBelt"};
    weapons[] = {"TACU_Vietnam_W_M40A3_Ghillie", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_M40A3_Ghillie", "CUP_hgun_Colt1911", "Throw", "Put"};
    headgearList[] = {
        "",1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Sniper_Ghillie.jpg);
};

class TACU_Vietnam_U_US_Medic: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "CUP_U_B_BDUv2_gloves_dirty_OD";
    backpack = "TACU_Vietnam_B_US_Medic";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
    Items[] = {mag_10("ACE_fieldDressing")};
    respawnItems[] = {mag_10("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_plain_Olive", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_Vine", 0.50,
        "CUP_H_USArmy_Helmet_M1_plain_M81", 0.50
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Medic.jpg);
};

class TACU_Vietnam_U_US_TeamLeader: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "CUP_U_B_BDUv2_roll2_dirty_OD";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_2("CUP_HandGrenade_M67"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_2("CUP_HandGrenade_M67"), mag_2("SmokeShell")};
    headgearList[] = {
        "CUP_H_CDF_OfficerCap_FST", 0.50,
        "CUP_H_CDF_OfficerCap_MNT", 0.50
    };
    CBA_facewearList[] = {
        "", 0.50,
        "G_Aviator", 0.50
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_TeamLeader.jpg);
};

class TACU_Vietnam_U_US_Officer: TACU_Vietnam_U_US_TeamLeader {
    displayName = "Officer";
    icon = "iconManLeader";
    uniformClass = "CUP_U_B_BDUv2_OD";
    linkedItems[] = {DEFAULT_ITEMS, "H_Beret_Colonel", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Beret_Colonel", "CUP_V_B_ALICE"};
    Items[] = {mag_4("ACE_fieldDressing")};
    respawnItems[] = {mag_4("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "H_Beret_Colonel", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Officer.jpg);
};

class TACU_Vietnam_U_US_Crewman: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Crewman";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "CUP_U_B_BDUv2_gloves_dirty_M81";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Crew_Helmet", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Crew_Helmet", "CUP_V_B_ALICE"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_smg_M3A1_blk", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_M3A1_blk", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_3("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_3("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "CUP_H_USMC_Crew_Helmet", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Crewman.jpg);
};

class TACU_Vietnam_U_US_Pilot_Helo: TACU_Vietnam_U_US_Crewman {
    displayName = "Pilot (Helicopter)";
    uniformClass = "CUP_U_B_BDUv2_roll_gloves_OD";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Helmet_Pilot", "Aircrew_vest_2_NH"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Helmet_Pilot", "Aircrew_vest_2_NH"};
    weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_4("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_4("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "CUP_H_USMC_Helmet_Pilot", 1
    };
    editorPreview = QPATHTOF(ui\Vietnam_U_US_Pilot_Helo.jpg);
};

// Vehicles
class TACU_Vietnam_V_US_LandRover: CUP_B_LR_Transport_GB_W {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "Land Rover";
    crew = "TACU_Vietnam_U_US_Rifleman_M16_Light";
    typicalCargo[] = {"TACU_Vietnam_U_US_Rifleman_M14_Light"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_LandRover.jpg);
};

class TACU_Vietnam_V_US_LandRover_M2: CUP_B_LR_MG_GB_W {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "Land Rover (M2)";
    crew = "TACU_Vietnam_U_US_Rifleman_M16";
    typicalCargo[] = {"TACU_Vietnam_U_US_Rifleman_M14_Light"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_LandRover_M2.jpg);
};

class TACU_Vietnam_V_US_M113A3: CUP_B_M113_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M113A3";
    crew = "TACU_Vietnam_U_US_Crewman";
    typicalCargo[] = {"TACU_Vietnam_U_US_Crewman"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_M113A3.jpg);
};

class TACU_Vietnam_V_US_M113A3_Medic: CUP_B_M113_Med_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M113A3 (Ambulance)";
    crew = "TACU_Vietnam_U_US_Crewman";
    typicalCargo[] = {"TACU_Vietnam_U_US_Medic"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_M113A3_Medic.jpg);
};

class TACU_Vietnam_V_US_M163A1VADS: CUP_B_M163_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M163A1 VADS";
    crew = "TACU_Vietnam_U_US_Crewman";
    typicalCargo[] = {"TACU_Vietnam_U_US_Crewman"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_M163A1VADS.jpg);
};

class TACU_Vietnam_V_US_M60A3: CUP_B_M60A3_USMC {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M60A3 Patton";
    crew = "TACU_Vietnam_U_US_Crewman";
    typicalCargo[] = {"TACU_Vietnam_U_US_Crewman"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_M60A3.jpg);
};

class TACU_Vietnam_V_US_UH1H: CUP_I_UH1H_slick_TK_GUE {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
    typicalCargo[] = {"TACU_Vietnam_U_US_Pilot_Helo"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_UH1H.jpg);
};

class TACU_Vietnam_V_US_UH1H_Armed: CUP_I_UH1H_armed_TK_GUE {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey (Armed)";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
    typicalCargo[] = {"TACU_Vietnam_U_US_Pilot_Helo"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_UH1H_Armed.jpg);
};

class TACU_Vietnam_V_US_UH1H_Gunship: CUP_I_UH1H_gunship_TK_GUE {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey (Gunship)";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
    typicalCargo[] = {"TACU_Vietnam_U_US_Pilot_Helo"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_UH1H_Gunship.jpg);
};

class TACU_Vietnam_V_US_AC47D_Spooky: CUP_B_AC47_Spooky_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "AC-47D Spooky";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
    typicalCargo[] = {"TACU_Vietnam_U_US_Pilot_Helo"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_AC47D_Spooky.jpg);
};

class TACU_Vietnam_V_US_C47_Skytrain: CUP_B_C47_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "C-47 Skytrain";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
    typicalCargo[] = {"TACU_Vietnam_U_US_Pilot_Helo"};
    editorPreview = QPATHTOF(ui\Vietnam_V_US_C47_Skytrain.jpg);
};
