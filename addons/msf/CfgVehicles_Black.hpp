// Units - Infantry
class TACU_MSF_U_I_Black_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
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
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "", 1
    };
    TACU_allowedFacewear[] = {
        "G_Balaclava_TI_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Black";
};

class TACU_MSF_U_O_Black_Rifleman: TACU_MSF_U_I_Black_Rifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Rifleman_AT: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Black";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Black_Rifleman_AT: TACU_MSF_U_I_Black_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Autorifleman: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Autorifleman.jpg);
    weapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Black_Autorifleman: TACU_MSF_U_I_Black_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_TeamLeader: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_TeamLeader.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class TACU_MSF_U_O_Black_TeamLeader: TACU_MSF_U_I_Black_TeamLeader {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Engineer: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_MSF_B_Engineer_Black";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Black_Engineer: TACU_MSF_U_I_Black_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_SMG: TACU_MSF_U_I_Black_Rifleman {
    displayName = "SMG";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_SMG.jpg);
    weapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Black_SMG: TACU_MSF_U_I_Black_SMG {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Medic: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Black";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Medic.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
};

class TACU_MSF_U_O_Black_Medic: TACU_MSF_U_I_Black_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Grenadier: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Grenadier";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_MSF_U_O_Black_Grenadier: TACU_MSF_U_I_Black_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Marksman: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Black_Marksman: TACU_MSF_U_I_Black_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

// Units - Crewmen
class TACU_MSF_U_I_Black_Pilot: TACU_MSF_U_I_Black_Rifleman {
    displayName = "Pilot";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Pilot.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    headgearList[] = {
        "H_PilotHelmetHeli_B", 1
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Black";
};

class TACU_MSF_U_O_Black_Pilot: TACU_MSF_U_I_Black_Pilot {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Crewman: TACU_MSF_U_I_Black_Pilot {
    displayName = "Crewman";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Crewman.jpg);
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

// Vehicles
class TACU_MSF_V_I_Mi24: CUP_I_Mi24_D_Dynamic_ION {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    //editorPreview = QPATHTOF(ui\MSF_V_I_Mi24.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Mi24_Hind_01_co.paa),
        QPATHTOF(data\MSF_V_Mi24_Hind_02_co.paa)
    };
};

class TACU_MSF_V_O_Mi24: TACU_MSF_V_I_Mi24 {
    faction = "TACU_MSF_O";
    side = 0;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
