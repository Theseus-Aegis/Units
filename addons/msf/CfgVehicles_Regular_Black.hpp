// Units - Combat
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_MSF_U_I_Regular_Black_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_MSF_I";
    scope = 2;
    scopeCurator = 2;
    sensitivity = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    backpack = "";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_ACR_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_10("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_10("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "", 0.8,
        "TACU_MSF_Helmet_Scarf_Black", 0.2
    };
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 1
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
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    backpack = "TACU_MSF_B_AT_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_Black", "tacs_MRAWS_Black_Rail_F", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_Black", "tacs_MRAWS_Black_Rail_F", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Rifleman_AT: TACU_MSF_U_I_Regular_Black_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Autorifleman: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Autorifleman (M27)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Autorifleman.jpg);
    weapons[] = {"TACU_MSF_W_M27_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M27_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_5("150Rnd_556x45_Drum_Mag_Tracer_F"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_5("150Rnd_556x45_Drum_Mag_Tracer_F"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Autorifleman: TACU_MSF_U_I_Regular_Black_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Autorifleman_02: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Autorifleman (M249)";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Autorifleman_02.jpg);
    weapons[] = {"TACU_MSF_W_M249_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M249_Grip", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_4("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Autorifleman_02: TACU_MSF_U_I_Regular_Black_Autorifleman_02 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_TeamLeader: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_TeamLeader.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_2("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), mag_2("UGL_FlareWhite_F"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_2("1Rnd_HE_Grenade_shell"), mag_2("1Rnd_Smoke_Grenade_shell"), mag_2("UGL_FlareWhite_F"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    headgearList[] = {
        "TACU_MSF_Helmet_Scarf_Red", 1
    };
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
    canDeactivateMines = 1;
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    backpack = "TACU_MSF_B_Engineer_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Engineer: TACU_MSF_U_I_Regular_Black_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_SMG: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "SMG (P90)";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_SMG.jpg);
    weapons[] = {"TACU_MSF_W_P90", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_P90", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_SMG: TACU_MSF_U_I_Regular_Black_SMG {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_SMG_02: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "SMG (MP7)";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_SMG_02.jpg);
    weapons[] = {"TACU_MSF_W_MP7A1", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_MP7A1", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_7("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_7("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_I_Regular_Black_Medic: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    backpack = "TACU_MSF_B_Medic_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Medic.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Regular_Black_Medic: TACU_MSF_U_I_Regular_Black_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Grenadier: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACR_556_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_556_GL_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Grenadier: TACU_MSF_U_I_Regular_Black_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Marksman: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Marksman";
    sensitivity = 2.25;
    role = "Marksman";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_M110", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M110", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_762x51_B_M110"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_762x51_B_M110"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_Marksman: TACU_MSF_U_I_Regular_Black_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_Sniper: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Sniper";
    sensitivity = 2.5;
    role = "Marksman";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Sniper.jpg);
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
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    backpack = "TACU_MSF_B_HAT_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_HAT.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_launch_Javelin", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_Black", "CUP_launch_Javelin", "CUP_hgun_Mk23", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Regular_Black_HAT: TACU_MSF_U_I_Regular_Black_HAT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Regular_Black_MMG: TACU_MSF_U_I_Regular_Black_Rifleman_01 {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
    backpack = "TACU_MSF_B_MMG_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_MMG.jpg);
    weapons[] = {"TACU_MSF_W_LWMMG_Black", "CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_LWMMG_Black", "CUP_hgun_Mk23", "Throw", "Put"};
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
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Olive";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Pilot.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black", "ACE_NVG_Wide"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black", "ACE_NVG_Wide"};
    weapons[] = {"CUP_hgun_Mk23", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Mk23", "Throw", "Put"};
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
    uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Olive";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_Regular_Black_Crewman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black", "ACE_NVG_Wide"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_ChestRig_Black", "ACE_NVG_Wide"};
    headgearList[] = {
        "H_HelmetCrew_B", 1
    };
};
class TACU_MSF_U_O_Regular_Black_Crewman: TACU_MSF_U_I_Regular_Black_Crewman {
    side = 0;
    faction = "TACU_MSF_O";
};
