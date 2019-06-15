// Backpacks
class TACU_Vietnam_B_US_Medic: CUP_B_AlicePack_OD {
    scope = 1;
    scopeCurator = 1;
    class TransportItems {
        class _xx_ACE_surgicalKit {
            name = "ACE_surgicalKit";
            count = 1;
        };
        class _xx_ACE_fieldDressing {
            name = "ACE_fieldDressing";
            count = 20;
        };
        class _xx_ACE_packingBandage {
            name = "ACE_packingBandage";
            count = 10;
        };
        class _xx_ACE_tourniquet {
            name = "ACE_tourniquet";
            count = 8;
        };
        class _xx_ACE_morphine {
            name = "ACE_morphine";
            count = 6;
        };
        class _xx_ACE_epinephrine {
            name = "ACE_epinephrine";
            count = 4;
        };
        class _xx_ACE_salineIV_500 {
            name = "ACE_salineIV";
            count = 4;
        };
    };
};

class TACU_Vietnam_B_US_MG: CUP_B_AlicePack_OD {
    scope = 1;
    scopeCurator = 1;
    class TransportMagazines {
        class _xx_hlc_200Rnd_762x51_T_M60E4 {
            magazine = "hlc_200Rnd_762x51_T_M60E4";
            count = 2;
        };
    };
};

// Units
class TACU_Vietnam_U_US_Rifleman_M16_Light: TACU_Main_U_BLUFOR_Soldier_Base {
    author = ECSTRING(Vietnam,Author);
    displayName = "Rifleman (M16 Light)";
    faction = "TACU_Vietnam_US";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_B_US_BDU_OD";
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
        "CUP_H_FR_BandanaGreen",0.25,
        "CUP_H_FR_BandanaWdl",0.25,
        "CUP_H_US_patrol_cap_OD",0.25,
        "CUP_H_US_patrol_cap_WDL",0.25,
        "",0.25
    };
};

class TACU_Vietnam_U_US_Rifleman_M14_Light: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (M14 Light)";
    weapons[] = {"CUP_srifle_M14", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_M14", "Throw", "Put"};
    magazines[] = {mag_4("20Rnd_762x51_Mag")};
    respawnMagazines[] = {mag_4("20Rnd_762x51_Mag")};
};

class TACU_Vietnam_U_US_Rifleman_M16: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (M16)";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_Vine",0.30,
        "CUP_H_USArmy_Helmet_M1_Olive",0.30,
        "CUP_H_USArmy_Helmet_M1_m81",0.30
    };
};

class TACU_Vietnam_U_US_Rifleman_M14: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Rifleman (M14)";
    weapons[] = {"CUP_srifle_M14", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_M14", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_4("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {mag_4("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
};

class TACU_Vietnam_U_US_Rifleman_AT: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "CUP_launch_M72A6", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "CUP_launch_M72A6", "Throw", "Put"};
};

class TACU_Vietnam_U_US_Rifleman_Wounded: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Rifleman (Wounded)";
    linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
    Items[] = {"ACE_fieldDressing"};
    respawnItems[] = {"ACE_fieldDressing"};
    weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_2("CUP_20Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_2("CUP_20Rnd_556x45_Stanag")};
    headgearList[] = {
        "H_HeadBandage_clean_F",0.30,
        "H_HeadBandage_stained_F",0.30,
        "H_HeadBandage_bloody_F",0.30
    };
};

class TACU_Vietnam_U_US_Machinegunner: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Machine Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_Vietnam_B_US_MG";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"hlc_lmg_m60", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"hlc_lmg_m60", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {"hlc_200Rnd_762x51_T_M60E4", mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    respawnMagazines[] = {"hlc_200Rnd_762x51_T_M60E4", mag_2("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
    headgearList[] = {
        "CUP_H_USArmy_Helmet_M1_Vine",0.30,
        "CUP_H_USArmy_Helmet_M1_Olive",0.30,
        "CUP_H_USArmy_Helmet_M1_m81",0.30
    };
};

class TACU_Vietnam_U_US_Grenadier_M79: TACU_Vietnam_U_US_Rifleman_M16 {
    displayName = "Grenadier (M79)";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_5("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
    respawnMagazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_5("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
};

class TACU_Vietnam_U_US_Sniper: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Sniper";
    role = "Marksman";
    linkedItems[] = {DEFAULT_ITEMS, "H_Booniehat_oli", "CUP_V_B_PASGT_no_bags_OD"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Booniehat_oli", "CUP_V_B_PASGT_no_bags_OD"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"TACU_Vietnam_W_M40A3", "CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vietnam_W_M40A3", "CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_6("CUP_5Rnd_762x51_M24"), mag_4("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_6("CUP_5Rnd_762x51_M24"), mag_4("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "H_Booniehat_oli",0.30,
        "CUP_H_SLA_Boonie",0.30,
        "H_Booniehat_tna_F",0.30,
        "tacs_Hat_Boonie_Woodland",0.30,
        "tacs_Hat_Boonie_RangerGreen",0.30,
        "CUP_H_USMC_BOONIE_WDL",0.30
    };
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
};

class TACU_Vietnam_U_US_Medic: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
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
        "CUP_H_USArmy_Helmet_M1_Vine",0.30,
        "CUP_H_USArmy_Helmet_M1_Olive",0.30,
        "CUP_H_USArmy_Helmet_M1_m81",0.30
    };
};

class TACU_Vietnam_U_US_TeamLeader: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Team Leader";
    icon = "iconManLeader";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_2("CUP_HandGrenade_M67"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_2("CUP_HandGrenade_M67"), mag_2("SmokeShell")};
    headgearList[] = {
        "CUP_H_CDF_OfficerCap_FST",0.50,
        "CUP_H_CDF_OfficerCap_MNT",0.50
    };
};

class TACU_Vietnam_U_US_Officer: TACU_Vietnam_U_US_TeamLeader {
    displayName = "Officer";
    icon = "iconManLeader";
    linkedItems[] = {DEFAULT_ITEMS, "H_Beret_Colonel", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Beret_Colonel", "CUP_V_B_ALICE"};
    Items[] = {mag_4("ACE_fieldDressing")};
    respawnItems[] = {mag_4("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Binocular", "Throw", "Put"};
    magazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_5("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "H_Beret_Colonel",1
    };
};

class TACU_Vietnam_U_US_Crewman: TACU_Vietnam_U_US_Rifleman_M16_Light {
    displayName = "Crewman";
    icon = "iconManEngineer";
    role = "Sapper";
    uniformClass = "CUP_U_B_US_BDU_roll2_glove";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Crew_Helmet", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Crew_Helmet", "CUP_V_B_ALICE"};
    Items[] = {mag_6("ACE_fieldDressing")};
    respawnItems[] = {mag_6("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
    magazines[] = {mag_4("CUP_7Rnd_45ACP_1911")};
    respawnMagazines[] = {mag_4("CUP_7Rnd_45ACP_1911")};
    headgearList[] = {
        "CUP_H_USMC_Crew_Helmet",1
    };
};

class TACU_Vietnam_U_US_Pilot_Helo: TACU_Vietnam_U_US_Crewman {
    displayName = "Pilot (Helicopter)";
    uniformClass = "CUP_U_B_US_BDU_roll_glove";
    linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Helmet_Pilot", "CUP_V_B_ALICE"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USMC_Helmet_Pilot", "CUP_V_B_ALICE"};
    headgearList[] = {
        "CUP_H_USMC_Helmet_Pilot",1
    };
};

// Vehicles
class TACU_Vietnam_V_US_LandRover: CUP_B_LR_Transport_GB_W {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "Land Rover";
    crew = "TACU_Vietnam_U_US_Rifleman_M16_Light";
};

class TACU_Vietnam_V_US_LandRover_M2: CUP_B_LR_MG_GB_W {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "Land Rover (M2)";
    crew = "TACU_Vietnam_U_US_Rifleman_M16";
};

class TACU_Vietnam_V_US_M113A3: CUP_B_M113_USA {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M113A3";
    crew = "TACU_Vietnam_U_US_Crewman";
};

class TACU_Vietnam_V_US_M113A3_Medic: CUP_B_M113_Med_USA {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M113A3 (Ambulance)";
    crew = "TACU_Vietnam_U_US_Crewman";
};

class TACU_Vietnam_V_US_M163A1VADS: CUP_B_M163_USA {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M163A1 VADS";
    crew = "TACU_Vietnam_U_US_Crewman";
};

class TACU_Vietnam_V_US_M60A3: CUP_B_M60A3_USMC {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "M60A3 Patton";
    crew = "TACU_Vietnam_U_US_Crewman";
};

class TACU_Vietnam_V_US_UH1H: CUP_I_UH1H_slick_TK_GUE {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
};

class TACU_Vietnam_V_US_UH1H_Armed: CUP_I_UH1H_armed_TK_GUE {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey (Armed)";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
};

class TACU_Vietnam_V_US_UH1H_Gunship: CUP_I_UH1H_gunship_TK_GUE {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "UH-1H Huey (Gunship)";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
};

class TACU_Vietnam_V_US_AC47D_Spooky: CUP_B_AC47_Spooky_USA {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "AC-47D Spooky";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
};

class TACU_Vietnam_V_US_C47_Skytrain: CUP_B_C47_USA {
    faction = "TACU_Vietnam_US";
    side = 1;
    displayName = "C-47 Skytrain";
    crew = "TACU_Vietnam_U_US_Pilot_Helo";
};
