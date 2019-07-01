// Units - Basic
class TACU_MSF_U_I_Black_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
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
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Black";
};
class TACU_MSF_U_O_Black_Rifleman_01: TACU_MSF_U_I_Black_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Rifleman_AT: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_Rifleman_AT: TACU_MSF_U_I_Black_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Autorifleman: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Autorifleman.jpg);
    weapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_Autorifleman: TACU_MSF_U_I_Black_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_TeamLeader: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_TeamLeader.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Black_TeamLeader: TACU_MSF_U_I_Black_TeamLeader {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Engineer: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_MSF_B_Engineer_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_Engineer: TACU_MSF_U_I_Black_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_SMG: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "SMG";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_SMG.jpg);
    weapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_SMG: TACU_MSF_U_I_Black_SMG {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Medic: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Medic.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Black_Medic: TACU_MSF_U_I_Black_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Grenadier: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Grenadier";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_Black_Grenadier: TACU_MSF_U_I_Black_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Marksman: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Marksman";
    role = "Marksman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_Marksman: TACU_MSF_U_I_Black_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

// Units - Heavy
class TACU_MSF_U_I_Black_Heavy_Rifleman_01: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Rifleman";
    sensitivity = 2;
    sensitivityEar = 0.15;
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_HeavyPlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_HeavyPlateCarrier_Black"};
    weapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_DarkBlack", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Black_Heavy";
};
class TACU_MSF_U_O_Black_Heavy_Rifleman_01: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Rifleman_AT: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_6("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_6("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_Black_Heavy_Rifleman_AT: TACU_MSF_U_I_Black_Heavy_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Autorifleman: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Autorifleman.jpg);
    weapons[] = {"TACU_MSF_W_MinimiSPW", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_MinimiSPW", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    magazines[] = {mag_4("200Rnd_556x45_Box_F"), mag_2("hlc_12Rnd_40SW_B_P226"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("200Rnd_556x45_Box_F"), mag_2("hlc_12Rnd_40SW_B_P226"), "HandGrenade", "SmokeShell"};
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_DarkBlack", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
};
class TACU_MSF_U_O_Black_Heavy_Autorifleman: TACU_MSF_U_I_Black_Heavy_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Grenadier: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Rifleman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACR68_GL_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR68_GL_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_68x43_FMJ"), mag_5("1Rnd_HE_Grenade_shell"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("hlc_30rnd_68x43_FMJ"), mag_5("1Rnd_HE_Grenade_shell"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_Black_Heavy_Grenadier: TACU_MSF_U_I_Black_Heavy_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Teamleader: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Team Leader";
    sensitivity = 2;
    sensitivityEar = 0.15;
    icon = "iconManLeader";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Teamleader.jpg);
    magazines[] = {mag_8("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Black_Heavy_Teamleader: TACU_MSF_U_I_Black_Heavy_Teamleader {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Marksman: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Marksman";
    sensitivity = 2;
    sensitivityEar = 0.15;
    role = "Marksman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_SIG556_DMR", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_SIG556_DMR", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("hlc_12Rnd_40SW_B_P226"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("hlc_12Rnd_40SW_B_P226"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_Black_Heavy_Marksman: TACU_MSF_U_I_Black_Heavy_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Heavy_Medic: TACU_MSF_U_I_Black_Heavy_Rifleman_01 {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Black";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Heavy_Medic.jpg);
    weapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR68_Carb_Black", "TACU_MSF_W_P226R_40Combat", "Throw", "Put"};
    magazines[] = {mag_6("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("hlc_30rnd_68x43_FMJ"), mag_3("hlc_12Rnd_40SW_B_P226"), "HandGrenade", mag_2("SmokeShell")};
};
class TACU_MSF_U_O_Black_Heavy_Medic: TACU_MSF_U_I_Black_Heavy_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

// Units - Crewmen
class TACU_MSF_U_I_Black_Pilot: TACU_MSF_U_I_Black_Rifleman_01 {
    displayName = "Pilot";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Pilot.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    headgearList[] = {
        "H_PilotHelmetHeli_B", 1
    };
};
class TACU_MSF_U_O_Black_Pilot: TACU_MSF_U_I_Black_Pilot {
    side = 0;
    faction = "TACU_MSF_O";
};
class TACU_MSF_U_I_Black_Crewman: TACU_MSF_U_I_Black_Pilot {
    displayName = "Crewman";
    editorPreview = QPATHTOF(ui\MSF_U_I_Black_Crewman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    headgearList[] = {
        "H_HelmetCrew_B", 1
    };
};
class TACU_MSF_U_O_Black_Crewman: TACU_MSF_U_I_Black_Crewman {
    side = 0;
    faction = "TACU_MSF_O";
};

// Cars
class TACU_MSF_V_I_MTVR_Transport_Black: CUP_B_MTVR_USA {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "MTVR (Transport)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_MTVR_Transport_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_MTVR_Black_Ext01_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Ext02_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Interior_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Tarp_co)
    };
};
class TACU_MSF_V_O_MTVR_Transport_Black: TACU_MSF_V_I_MTVR_Transport_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_I_MTVR_Ammo_Black: CUP_B_MTVR_Ammo_USA {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "MTVR (Ammo)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_MTVR_Ammo_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_MTVR_Black_Ext01_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Ext02_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Interior_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Tarp_co)
    };
};
class TACU_MSF_V_O_MTVR_Ammo_Black: TACU_MSF_V_I_MTVR_Ammo_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_I_MTVR_Refuel_Black: CUP_B_MTVR_Refuel_USA {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "MTVR (Refuel)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_MTVR_Refuel_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_MTVR_Black_Ext01_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Ext02_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Interior_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Fuel_co)
    };
};
class TACU_MSF_V_O_MTVR_Refuel_Black: TACU_MSF_V_I_MTVR_Refuel_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_I_MTVR_Repair_Black: CUP_B_MTVR_Repair_USA {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "MTVR (Repair)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_MTVR_Repair_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_MTVR_Black_Ext01_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Ext02_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Interior_co),
        QPATHTOF(data\MSF_V_MTVR_Black_Repair_co)
    };
};
class TACU_MSF_V_O_MTVR_Repair_Black: TACU_MSF_V_I_MTVR_Repair_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_Prowler_Base: B_LSV_01_unarmed_F {
    scope = 0;
    class EventHandlers;
};
class TACU_MSF_V_I_Prowler_Black: TACU_MSF_V_Prowler_Base {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    scope = 2;
    side = 2;
    displayName = "Prowler";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_Prowler_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Prowler_Black_Ext01_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext02_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext03_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Adds_co.paa)
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};
class TACU_MSF_V_O_Prowler_Black: TACU_MSF_V_I_Prowler_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_Prowler_HMG_Base: B_LSV_01_armed_F {
    scope = 0;
    class EventHandlers;
};
class TACU_MSF_V_I_Prowler_HMG_Black: TACU_MSF_V_Prowler_HMG_Base {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    scope = 2;
    side = 2;
    displayName = "Prowler (HMG)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_Prowler_HMG_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Prowler_Black_Ext01_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext02_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext03_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Adds_co.paa)
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};
class TACU_MSF_V_O_Prowler_HMG_Black: TACU_MSF_V_I_Prowler_HMG_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};
class TACU_MSF_V_Prowler_AT_Base: B_LSV_01_AT_F {
    scope = 0;
    class EventHandlers;
};
class TACU_MSF_V_I_Prowler_AT_Black: TACU_MSF_V_Prowler_AT_Base {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    scope = 2;
    side = 2;
    displayName = "Prowler (AT)";
    crew = "TACU_MSF_U_I_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Rifleman_01"};
    editorPreview = QPATHTOF(ui\MSF_V_I_Prowler_AT_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Prowler_Black_Ext01_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext02_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Ext03_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_Adds_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_ATLauncher_co.paa),
        QPATHTOF(data\MSF_V_Prowler_Black_ATTube_co.paa)
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};
class TACU_MSF_V_O_Prowler_AT_Black: TACU_MSF_V_I_Prowler_AT_Black {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Rifleman_01";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Rifleman_01"};
};

// Helicopters
class TACU_MSF_V_I_Mi24: CUP_I_Mi24_D_Dynamic_ION {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_Mi24.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Mi24_Hind_01_co.paa),
        QPATHTOF(data\MSF_V_Mi24_Hind_02_co.paa)
    };
};
class TACU_MSF_V_O_Mi24: TACU_MSF_V_I_Mi24 {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_UH60: CUP_B_UH60M_US {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "UH-60 Blackhawk";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_UH60.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_UH60_Fuselage_co.paa),
        QPATHTOF(data\MSF_V_UH60_Engine_co.paa),
        QPATHTOF(data\MSF_V_UH60_Default_co.paa)
    };
};
class TACU_MSF_V_O_UH60: TACU_MSF_V_I_UH60 {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_UH60_FFV: CUP_B_UH60M_FFV_US {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "UH-60 Blackhawk (FFV)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_UH60_FFV.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_UH60_Fuselage_co.paa),
        QPATHTOF(data\MSF_V_UH60_Engine_co.paa),
        QPATHTOF(data\MSF_V_UH60_Default_co.paa)
    };
};
class TACU_MSF_V_O_UH60_FFV: TACU_MSF_V_I_UH60_FFV {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_UH60_Unarmed: CUP_B_UH60M_Unarmed_US {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "UH-60 Blackhawk (Unarmed)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_UH60_Unarmed.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_UH60_Fuselage_co.paa),
        QPATHTOF(data\MSF_V_UH60_Engine_co.paa),
        QPATHTOF(data\MSF_V_UH60_Default_co.paa)
    };
};
class TACU_MSF_V_O_UH60_Unarmed: TACU_MSF_V_I_UH60_Unarmed {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_UH60_Unarmed_FFV: CUP_B_UH60M_Unarmed_FFV_US {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "UH-60 Blackhawk (Unarmed/FFV)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_UH60_Unarmed_FFV.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_UH60_Fuselage_co.paa),
        QPATHTOF(data\MSF_V_UH60_Engine_co.paa),
        QPATHTOF(data\MSF_V_UH60_Default_co.paa)
    };
};
class TACU_MSF_V_O_UH60_Unarmed_FFV: TACU_MSF_V_I_UH60_Unarmed_FFV {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_UH60_Gunship: CUP_B_MH60L_DAP_2x_US {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "UH-60 Blackhawk (Gunship)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_UH60_Gunship.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_UH60_Fuselage_co.paa),
        QPATHTOF(data\MSF_V_UH60_Engine_co.paa),
        QPATHTOF(data\MSF_V_UH60_Default_co.paa)
    };
};
class TACU_MSF_V_O_UH60_Gunship: TACU_MSF_V_I_UH60_Gunship {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};

// Planes
class TACU_MSF_V_I_C130_Infantry: CUP_B_C130J_USMC {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "C-130 (Infantry)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_C130_Infantry.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_C130_Body_Black_co.paa),
        QPATHTOF(data\MSF_V_C130_Wings_Black_co.paa)
    };
};
class TACU_MSF_V_O_C130_Infantry: TACU_MSF_V_I_C130_Infantry {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_C130_Vehicle: CUP_B_C130J_Cargo_USMC {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "C-130 (Vehicle)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_C130_Vehicle.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_C130_Body_Black_co.paa),
        QPATHTOF(data\MSF_V_C130_Wings_Black_co.paa)
    };
};
class TACU_MSF_V_O_C130_Vehicle: TACU_MSF_V_I_C130_Vehicle {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_V44_Infantry: B_T_VTOL_01_infantry_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "V-44 Blackfish (Infantry Transport)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_V44_Infantry.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_V44_Ext01_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext02_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext03_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext04_co.paa),
        QPATHTOF(data\MSF_V_V44_Signs_co.paa)
    };
};
class TACU_MSF_V_O_V44_Infantry: TACU_MSF_V_I_V44_Infantry {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
class TACU_MSF_V_I_V44_Vehicle: B_T_VTOL_01_vehicle_F {
    dlc = QUOTE(PREFIX);
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "V-44 Blackfish (Vehicle Transport)";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    editorPreview = QPATHTOF(ui\MSF_V_I_V44_Vehicle.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_V44_Ext01_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext02_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext03_co.paa),
        QPATHTOF(data\MSF_V_V44_Ext04_co.paa),
        QPATHTOF(data\MSF_V_V44_Signs_co.paa)
    };
};
class TACU_MSF_V_O_V44_Vehicle: TACU_MSF_V_I_V44_Vehicle {
    faction = "TACU_MSF_O";
    side = 0;
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
