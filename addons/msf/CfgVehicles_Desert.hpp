// Units
class TACU_MSF_U_I_Desert_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
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
    uniformClass = "TACU_MSF_Uniform_Combat_TigerDesert";
    backpack = "";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Coyote"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_Balaclava_TI_blk_F", "TACU_MSF_Vest_PlateCarrier_Coyote"};
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
    editorSubcategory = "TACU_MSF_EdSubCat_Desert";
};

class TACU_MSF_U_O_Desert_Rifleman: TACU_MSF_U_I_Desert_Rifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Rifleman_AT: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Coyote";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "CUP_launch_RPG7V", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_10("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Desert_Rifleman_AT: TACU_MSF_U_I_Desert_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Autorifleman: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Autorifleman.jpg);
    weapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"LMG_03_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("200Rnd_556x45_Box_Red_F"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Desert_Autorifleman: TACU_MSF_U_I_Desert_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_TeamLeader: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_TeamLeader.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};

class TACU_MSF_U_O_Desert_TeamLeader: TACU_MSF_U_I_Desert_TeamLeader {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Engineer: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = "TACU_MSF_B_Engineer_Coyote";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Desert_Engineer: TACU_MSF_U_I_Desert_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_SMG: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "SMG";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_SMG.jpg);
    weapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Desert_SMG: TACU_MSF_U_I_Desert_SMG {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Medic: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Coyote";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Medic.jpg);
    weapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_3("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
};

class TACU_MSF_U_O_Desert_Medic: TACU_MSF_U_I_Desert_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Grenadier: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Grenadier";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACR_GL_Carb_Black", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("hlc_30rnd_556x45_EPR"), mag_6("1Rnd_HE_Grenade_shell"), mag_3("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
};

class TACU_MSF_U_O_Desert_Grenadier: TACU_MSF_U_I_Desert_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Desert_Marksman: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_SIG556_DMR", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("11Rnd_45ACP_Mag"), "HandGrenade", "SmokeShell"};
};

class TACU_MSF_U_O_Desert_Marksman: TACU_MSF_U_I_Desert_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};
