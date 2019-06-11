class CfgVehicles {

    // Base Classes
    class SoldierGB;
    class CUP_B_AlicePack_OD;
    class CUP_B_LR_Transport_GB_W;
    class CUP_B_LR_MG_GB_W;
    class CUP_B_M113_USA;
    class CUP_B_M113_Med_USA;
    class CUP_B_M163_USA;
    class CUP_B_M60A3_USMC;
    class CUP_I_UH1H_slick_TK_GUE;
    class CUP_I_UH1H_armed_TK_GUE;
    class CUP_I_UH1H_gunship_TK_GUE;
    class CUP_B_AC47_Spooky_USA;
    class CUP_B_C47_USA;
    class CUP_O_UAZ_Unarmed_SLA;
    class CUP_O_UAZ_MG_SLA;
    class CUP_O_UAZ_Open_SLA;
    class CUP_O_Ural_SLA;
    class CUP_O_Ural_Open_SLA;

    // Backpacks - US Forces

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

    // Units - US Forces

    class TACU_Vietnam_U_US_Soldier_Base: SoldierGB {
        author = ECSTRING(Vietnam,Author);
        displayName = "US Base Soldier";
        faction = "TACU_Vietnam_US";
        scope = 1;
        scopeCurator = 1;
        side = 1;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "CUP_U_B_US_BDU_OD";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags_OD"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_US_patrol_cap_OD", "CUP_V_B_PASGT_no_bags_OD"};
        Items[] = {mag_3("ACE_fieldDressing")};
        respawnItems[] = {mag_3("ACE_fieldDressing")};
        weapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
        magazines[] = {mag_4("CUP_20Rnd_556x45_Stanag")};
        respawnMagazines[] = {mag_4("CUP_20Rnd_556x45_Stanag")};
    };

    class TACU_Vietnam_U_US_Rifleman_M16_Light: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Rifleman (M16 Light)";
        scope = 2;
        scopeCurator = 2;
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

    class TACU_Vietnam_U_US_Rifleman_M16: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Rifleman (M16)";
        scope = 2;
        scopeCurator = 2;
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT_OD"};
        Items[] = {mag_6("ACE_fieldDressing")};
        respawnItems[] = {mag_6("ACE_fieldDressing")};
        weapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A1", "CUP_hgun_Colt1911", "Throw", "Put"};
        magazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_3("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
        respawnMagazines[] = {mag_8("CUP_20Rnd_556x45_Stanag"), mag_3("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
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
        magazines[] = {mag_4("CUP_20Rnd_556x45_Stanag"), mag_3("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
        respawnMagazines[] = {mag_4("CUP_20Rnd_556x45_Stanag"), mag_3("CUP_7Rnd_45ACP_1911"), "CUP_HandGrenade_M67"};
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

    class TACU_Vietnam_U_US_Machinegunner: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Machine Gunner";
        scope = 2;
        scopeCurator = 2;
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

    class TACU_Vietnam_U_US_Grenadier: TACU_Vietnam_U_US_Rifleman_M16 {
        displayName = "Grenadier";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
        weapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Throw", "Put"};
        magazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_4("CUP_1Rnd_HE_M203"), "1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {mag_5("CUP_20Rnd_556x45_Stanag"), mag_2("CUP_7Rnd_45ACP_1911"), mag_4("CUP_1Rnd_HE_M203"), "1Rnd_Smoke_Grenade_shell"};
    };

    class TACU_Vietnam_U_US_Grenadier_M79: TACU_Vietnam_U_US_Grenadier {
        displayName = "Grenadier (M79)";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_USArmy_Helmet_M1_Olive", "CUP_V_B_PASGT"};
        weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Colt1911", "Throw", "Put"};
        magazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_4("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
        respawnMagazines[] = {mag_12("CUP_1Rnd_HE_M203"), mag_4("CUP_7Rnd_45ACP_1911"), mag_2("1Rnd_Smoke_Grenade_shell")};
    };

    class TACU_Vietnam_U_US_Sniper: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Sniper";
        scope = 2;
        scopeCurator = 2;
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
        scope = 2;
        scopeCurator = 2;
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

    class TACU_Vietnam_U_US_Medic: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Medic";
        scope = 2;
        scopeCurator = 2;
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

    class TACU_Vietnam_U_US_TeamLeader: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Team Leader";
        scope = 2;
        scopeCurator = 2;
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

    class TACU_Vietnam_U_US_Crewman: TACU_Vietnam_U_US_Soldier_Base {
        displayName = "Crewman";
        scope = 2;
        scopeCurator = 2;
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

    // Vehicles - US Forces

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


    // Backpacks - PAVN Forces

    class CUP_B_RPGPack_Khaki;
    class TACU_Vietnam_B_PAVN_AT: CUP_B_RPGPack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            class _xx_CUP_PG7V_M {
				magazine = "CUP_PG7V_M";
				count = 2;
            };
        };
    };

    class CUP_B_AlicePack_Khaki;
    class TACU_Vietnam_B_PAVN_LMG: CUP_B_AlicePack_Khaki {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            class _xx_CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M {
				magazine = "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M";
				count = 4;
            };
        };
    };

    class CUP_B_AlicePack_OD;
    class TACU_Vietnam_B_PAVN_MMG: CUP_B_AlicePack_OD {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M {
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 3;
            };
        };
    };

    class CUP_B_AlicePack_Bedroll;
    class TACU_Vietnam_B_PAVN_Medic: CUP_B_AlicePack_Bedroll {
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

    class B_FieldPack_khk;
    class TACU_Vietnam_B_PAVN_Sapper: B_FieldPack_khk {
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
				magazine = "APERSBoundingMine_Range_Mag";
				count = 2;
            };
            class _xx_APERSMine_Range_Mag {
				magazine = "APERSMine_Range_Mag";
				count = 2;
            };
        };
    };

    // Units - PAVN Forces

    class TACU_Vietnam_U_PAVN_Soldier_Base: SoldierGB {
        author = ECSTRING(Vietnam,Author);
        displayName = "PAVN Base Soldier";
        faction = "TACU_Vietnam_PAVN";
        scope = 1;
        scopeCurator = 1;
        side = 0;
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
        identityTypes[] = {"LanguageCHI_F", "Head_Asian", "NoGlasses"};
        genericNames = "ChineseMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "CUP_U_O_RUS_M88_MSV";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "V_TacChestrig_grn_F"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "V_TacChestrig_grn_F"};
        Items[] = {mag_3("ACE_fieldDressing")};
        respawnItems[] = {mag_3("ACE_fieldDressing")};
        weapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        magazines[] = {mag_3("CUP_30Rnd_762x39_AK47_M")};
        respawnMagazines[] = {mag_3("CUP_30Rnd_762x39_AK47_M")};
    };

    class TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56: TACU_Vietnam_U_PAVN_Soldier_Base {
        displayName = "Rifleman (Type 56-2)";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "CUP_U_O_RUS_M88_MSV";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_OD"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_OD"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        magazines[] = {mag_7("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_7("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
        headgearList[] = {
            "CUP_H_SLA_Helmet",0.25,
            "CUP_H_SLA_Helmet_DES",0.50,
            "CUP_H_SLA_Helmet_BLK",0.25,
            "CUP_H_SLA_Helmet_URB",0.25,
            "CUP_H_FR_BandanaGreen",0.25,
            "CUP_H_ChDKZ_Cap",0.25,
            "",0.20
        };
        editorSubcategory = "TACU_Vietnam_EdSubCat_PAVN_NVA";
    };

    class TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Rifleman (AKS-74U)";
        uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2"};
        weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
        magazines[] = {mag_7("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_7("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NVA_Rifleman_AT: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        backpack = "TACU_Vietnam_B_PAVN_AT";
        weapons[] = {"CUP_arifle_AK47_Early", "CUP_launch_RPG7V", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early", "CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
        respawnWagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    };

    class TACU_Vietnam_U_PAVN_NVA_Autorifleman: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Autorifleman";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "TACU_Vietnam_B_PAVN_LMG";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "CUP_FR_NeckScarf2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG", "CUP_FR_NeckScarf2"};
        weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        magazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NVA_Machinegunner: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Machinegunner";
        icon = "iconManMG";
        role = "MachineGunner";
        uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
        backpack = "TACU_Vietnam_B_PAVN_MMG";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_Helmet", "CUP_V_O_Ins_Carrier_Rig_MG"};
        weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NVA_TeamLeader: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Team Leader";
        icon = "iconManLeader";
        uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_SLCap", "CUP_V_O_SLA_M23_1_OD"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_SLA_SLCap", "CUP_V_O_SLA_M23_1_OD"};
        weapons[] = {"CUP_arifle_AKS", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS", "Binocular", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
        respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5", "SmokeShell"};
        headgearList[] = {
            "CUP_H_SLA_SLCap",1
        };
    };

    class TACU_Vietnam_U_PAVN_NVA_Medic: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Medic";
        icon = "iconManMedic";
        role = "CombatLifeSaver";
        backpack = "TACU_Vietnam_B_PAVN_Medic";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_H_ChDKZ_Cap", "CUP_V_O_TK_Vest_2", "CUP_FR_NeckScarf2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_H_ChDKZ_Cap", "CUP_V_O_TK_Vest_2", "CUP_FR_NeckScarf2"};
        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_4("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
        respawnMagazines[] = {mag_4("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
        headgearList[] = {
            "CUP_H_ChDKZ_Cap",1
        };
    };

    class TACU_Vietnam_U_PAVN_NVA_Sniper: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Sniper";
        weapons[] = {"TACU_Vietnam_W_Dragunov", "CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vietnam_W_Dragunov", "CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
        respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
    };

    class TACU_Vietnam_U_PAVN_NVA_Sniper_Ghillie: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Sniper (Ghillie)";
        uniformClass = "U_B_T_FullGhillie_tna_F";
        linkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_Ins_Carrier_Rig"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "CUP_V_O_Ins_Carrier_Rig"};
        weapons[] = {"TACU_Vietnam_W_Dragunov_Ghillie", "CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vietnam_W_Dragunov_Ghillie", "CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
        respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M"), mag_2("CUP_8Rnd_9x18_Makarov_M")};
        headgearList[] = {
            "",1
        };
    };

    class TACU_Vietnam_U_PAVN_NVA_Sapper: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Sapper";
        icon = "iconManEngineer";
        role = "Sapper";
        uniformClass = "CUP_U_O_RUS_M88_MSV_rolled_up";
        backpack = "TACU_Vietnam_B_PAVN_Sapper";
        linkedItems[] = {DEFAULT_ITEMS,"CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS,"CUP_H_SLA_Helmet", "CUP_V_O_SLA_M23_1_BRN", "CUP_FR_NeckScarf2"};
        Items[] = {mag_5("ACE_fieldDressing"), "ACE_DefusalKit"};
        respawnItems[] = {mag_5("ACE_fieldDressing"), "ACE_DefusalKit"};
        weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        magazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NVA_Rifleman_Wounded: TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56 {
        displayName = "Rifleman (Wounded)";
        uniformClass = "CUP_U_O_RUS_M88_MSV";
        linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
        respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
        Items[] = {"ACE_fieldDressing"};
        respawnItems[] = {"ACE_fieldDressing"};
        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
        respawnMagazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
        headgearList[] = {
            "H_HeadBandage_clean_F",0.30,
            "H_HeadBandage_stained_F",0.30,
            "H_HeadBandage_bloody_F",0.30,
        };
    };

    class TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56: TACU_Vietnam_U_PAVN_Soldier_Base {
        displayName = "Rifleman (Type 56-2)";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_I_C_Soldier_Para_5_F";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_TYPE_56_2_Early", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
        headgearList[] = {
            "H_Hat_Safari_sand_F",0.25,
            "CUP_H_FR_BandanaGreen",0.25,
            "CUP_H_NAPA_Fedora",0.25,
            "CUP_H_ChDKZ_Cap",0.25,
            "H_HeadBandage_clean_F",0.25,
            "",0.25
        };
        editorSubcategory = "TACU_Vietnam_EdSubCat_PAVN_NLF";
    };

    class TACU_Vietnam_U_PAVN_NLF_Rifleman_AKS74U: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Rifleman (AKS-74U)";
        uniformClass = "U_I_C_Soldier_Para_3_F";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_RUS_Smersh_1"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_RUS_Smersh_1"};
        weapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NLF_Rifleman_AT: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Rifleman (AT)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        uniformClass = "CUP_U_O_TK_Green";
        backpack = "TACU_Vietnam_B_PAVN_AT";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
        weapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS", "CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
        respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M")};
    };

    class TACU_Vietnam_U_PAVN_NLF_TeamLeader: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Team Leader";
        icon = "iconManLeader";
        uniformClass = "U_I_C_Soldier_Para_2_F";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Com"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Com"};
        weapons[] = {"CUP_arifle_AK47_Early", "Binocular", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early", "Binocular", "Throw", "Put"};
        magazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_5("CUP_30Rnd_762x39_AK47_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NLF_Autorifleman: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Autorifleman";
        icon = "iconManMG";
        role = "MachineGunner";
        uniformClass = "U_I_C_Soldier_Para_4_F";
        backpack = "TACU_Vietnam_B_PAVN_LMG";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_MG"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_MG"};
        weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        magazines[] = {mag_2("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_2("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NLF_Sapper: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Sapper";
        icon = "iconManEngineer";
        role = "Sapper";
        uniformClass = "CUP_U_O_TK_MixedCamo";
        backpack = "TACU_Vietnam_B_PAVN_Sapper";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_I_RACS_Carrier_Rig_2"};
        weapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_SA61", "Throw", "Put"};
        magazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
        respawnMagazines[] = {mag_3("CUP_20Rnd_B_765x17_Ball_M"), mag_2("CUP_50Rnd_B_765x17_Ball_M"), "CUP_HandGrenade_RGD5"};
    };

    class TACU_Vietnam_U_PAVN_NLF_Sniper: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Sniper";
        uniformClass = "CUP_U_O_SLA_Green";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "V_BandollierB_rgr"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "V_BandollierB_rgr"};
        weapons[] = {"TACU_Vietnam_W_Dragunov", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vietnam_W_Dragunov", "Throw", "Put"};
        magazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
        respawnMagazines[] = {mag_5("CUP_10Rnd_762x54_SVD_M")};
    };

    class TACU_Vietnam_U_PAVN_NLF_Rifleman_Wounded: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Rifleman (Wounded)";
        uniformClass = "U_I_C_Soldier_Para_5_F";
        linkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
        respawnLinkedItems[] = {"H_HeadBandage_clean_F", "ItemWatch"};
        Items[] = {"ACE_fieldDressing"};
        respawnItems[] = {"ACE_fieldDressing"};
        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
        respawnMagazines[] = {mag_2("CUP_8Rnd_9x18_Makarov_M")};
        headgearList[] = {
            "H_HeadBandage_clean_F",0.25,
            "H_HeadBandage_stained_F",0.25,
            "H_HeadBandage_bloody_F",0.25
        };
    };

    class TACU_Vietnam_U_PAVN_NLF_Medic: TACU_Vietnam_U_PAVN_NLF_Rifleman_Type56 {
        displayName = "Medic";
        icon = "iconManMedic";
        role = "CombatLifeSaver";
        uniformClass = "U_I_C_Soldier_Para_3_F";
        backpack = "TACU_Vietnam_B_PAVN_Medic";
        linkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
        respawnLinkedItems[] = {DEFAULT_ITEMS, "H_Hat_Safari_sand_F", "CUP_V_O_Ins_Carrier_Rig_Light"};
        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {mag_5("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
        respawnMagazines[] = {mag_5("CUP_8Rnd_9x18_Makarov_M"), "SmokeShell"};
    };

    // Vehicles - PAVN Forces
    class TACU_Vietnam_V_PAVN_UAZ: CUP_O_UAZ_Unarmed_SLA {
        faction = "TACU_Vietnam_PAVN";
        side = 0;
        displayName = "UAZ";
        crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    };

    class TACU_Vietnam_V_PAVN_UAZ_Open: CUP_O_UAZ_Open_SLA {
        faction = "TACU_Vietnam_PAVN";
        side = 0;
        displayName = "UAZ (Open)";
        crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
    };

    class TACU_Vietnam_V_PAVN_UAZ_MG: CUP_O_UAZ_MG_SLA {
        faction = "TACU_Vietnam_PAVN";
        side = 0;
        displayName = "UAZ (MG)";
        crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    };

    class TACU_Vietnam_V_PAVN_Ural: CUP_O_Ural_SLA {
        faction = "TACU_Vietnam_PAVN";
        side = 0;
        displayName = "Ural";
        crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_Type56";
    };

    class TACU_Vietnam_V_PAVN_Ural_Open: CUP_O_Ural_Open_SLA {
        faction = "TACU_Vietnam_PAVN";
        side = 0;
        displayName = "Ural (Open)";
        crew = "TACU_Vietnam_U_PAVN_NVA_Rifleman_AKS74U";
    };
};

class Extended_Init_Eventhandlers {
    class TACU_Vietnam_U_US_Soldier_Base {
        class TACU_Vietnam_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
    class TACU_Vietnam_U_PAVN_Soldier_Base {
        class TACU_Vietnam_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
};
