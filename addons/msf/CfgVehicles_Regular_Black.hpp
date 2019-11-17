// Units - Combat
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_MSF_U_I_Regular_Black_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_MSF_I";
    scope = 2;
    scopeCurator = 2;
    sensitivity = 1.75;
    sensitivityEar = 0.125;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
    backpack = "";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_HK416_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_10("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Regular_Black";
};
class TACU_MSF_U_O_Regular_Black_Rifleman_01: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Rifleman_AT: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_launch_RPG7V", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_launch_RPG7V", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Rifleman_AT: TACU_MSF_U_I_Regular_Black_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Autorifleman: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Autorifleman.jpg);
    weapons[] = {"TACU_MSF_W_M27_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M27_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_5("150Rnd_556x45_Drum_Mag_Tracer_F"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_5("150Rnd_556x45_Drum_Mag_Tracer_F"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Autorifleman: TACU_MSF_U_I_Regular_Black_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_TeamLeader: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_TeamLeader.jpg);
    weapons[] = {"TACU_MSF_W_HK416_GL_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_GL_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_2("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), mag_2("UGL_FlareWhite_F"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_2("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), mag_2("UGL_FlareWhite_F"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Regular_Black_TeamLeader: TACU_MSF_U_I_Regular_Black_TeamLeader {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Engineer: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_MSF_B_Engineer_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Engineer: TACU_MSF_U_I_Regular_Black_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_SMG: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "SMG";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_SMG.jpg);
    weapons[] = {"SMG_03C_black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_SMG: TACU_MSF_U_I_Regular_Black_SMG {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Medic: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Medic.jpg);
    weapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Regular_Black_Medic: TACU_MSF_U_I_Regular_Black_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Grenadier: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Grenadier";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_HK416_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_556x45_PMAG_QP"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("CUP_30Rnd_556x45_PMAG_QP"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Grenadier: TACU_MSF_U_I_Regular_Black_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Marksman: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_HK417_DMR_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK417_DMR_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Marksman: TACU_MSF_U_I_Regular_Black_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Sniper: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Sniper";
    role = "Marksman";
    uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Sniper.jpg);
    weapons[] = {"TACU_MSF_W_M200_Intervention", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M200_Intervention", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_5("7Rnd_408_Mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "SmokeShell"};
    respawnMagazines[] = {mag_5("7Rnd_408_Mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Sniper: TACU_MSF_U_I_Regular_Black_Sniper {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_HAT: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "AT Specialist (Javelin)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_HAT_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_HAT.jpg);
    weapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_launch_Javelin", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_HK416_CQC_Black", "CUP_launch_Javelin", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_HAT: TACU_MSF_U_I_Regular_Black_HAT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_MMG: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_MSF_B_MMG_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_MMG.jpg);
    weapons[] = {"MMG_02_black_F", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"MMG_02_black_F", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {"130Rnd_338_Mag", mag_2("CUP_12Rnd_45ACP_mk23")};
    respawnMagazines[] = {"130Rnd_338_Mag", mag_2("CUP_12Rnd_45ACP_mk23")};
};
class TACU_MSF_U_O_Regular_Black_MMG: TACU_MSF_U_I_Regular_Black_MMG {
    side = 0;
    faction = "TACU_MSF_O";
};

// Units - Crewmen
class TACU_MSF_U_I_Regular_Black_Pilot: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Pilot";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Pilot.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Combat_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Combat_Black_Veh"};
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
    headgearList[] = {
        "H_PilotHelmetHeli_B", 1
    };
};
class TACU_MSF_U_O_Regular_Black_Pilot: TACU_MSF_U_I_Regular_Black_Pilot {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Crewman: TACU_MSF_U_I_Regular_Black_Pilot {
    displayName = "Crewman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Regular_Black_Crewman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Combat_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Combat_Black_Veh"};
    headgearList[] = {
        "H_HelmetCrew_B", 1
    };
};
class TACU_MSF_U_O_Regular_Black_Crewman: TACU_MSF_U_I_Regular_Black_Crewman {
    side = 0;
    faction = "TACU_MSF_O";
};
