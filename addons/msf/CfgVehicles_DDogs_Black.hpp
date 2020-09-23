// Units - Diamond Dogs (Black)
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_MSF_U_I_DDogs_Black_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
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
    uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
    backpack = "";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "G_Balaclava_TI_G_blk_F", "TACU_MSF_Vest_HeavyPlateCarrier_Black", "NVGoggles_OPFOR"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "G_Balaclava_TI_G_blk_F", "TACU_MSF_Vest_HeavyPlateCarrier_Black", "NVGoggles_OPFOR"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_8("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_8("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_DarkBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_TI_G_blk_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_DDogs_Black";
};
class TACU_MSF_U_O_DDogs_Black_Rifleman_01: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Rifleman_AT: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_MSF_B_AT_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Rifleman_AT.jpg);
    weapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "tacs_MRAWS_Black_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "tacs_MRAWS_Black_F", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_DDogs_Black_Rifleman_AT: TACU_MSF_U_I_DDogs_Black_Rifleman_AT {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Autorifleman: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Autorifleman.jpg);
    weapons[] = {"TACU_MSF_W_Stoner99LMG", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Stoner99LMG", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_4("200Rnd_65x39_cased_Box_Tracer"), mag_2("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_4("200Rnd_65x39_cased_Box_Tracer"), mag_2("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_DDogs_Black_Autorifleman: TACU_MSF_U_I_DDogs_Black_Autorifleman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Grenadier: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_Promet_GL_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_GL_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_msbs_mag"), mag_5("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_msbs_mag"), mag_5("1Rnd_HE_Grenade_shell"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), "SmokeShell"};
};
class TACU_MSF_U_O_DDogs_Black_Grenadier: TACU_MSF_U_I_DDogs_Black_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Teamleader: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Teamleader.jpg);
    magazines[] = {mag_8("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_2("SmokeShell")};
};
class TACU_MSF_U_O_DDogs_Black_Teamleader: TACU_MSF_U_I_DDogs_Black_Teamleader {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Marksman: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Marksman";
    sensitivity = 2.25;
    role = "Marksman";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Marksman.jpg);
    weapons[] = {"TACU_MSF_W_Promet_DMR_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_DMR_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_DDogs_Black_Marksman: TACU_MSF_U_I_DDogs_Black_Marksman {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Medic: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Medic";
    attendant = 1;
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    backpack = "TACU_MSF_B_Medic_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Medic.jpg);
    weapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", mag_2("SmokeShell")};
};
class TACU_MSF_U_O_DDogs_Black_Medic: TACU_MSF_U_I_DDogs_Black_Medic {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_DDogs_Black_Engineer: TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_MSF_B_Engineer_Black";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_DDogs_Black_Engineer.jpg);
    weapons[] = {"TACU_MSF_W_Promet_SG_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_Promet_SG_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_4("6Rnd_12Gauge_Slug"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("30Rnd_65x39_caseless_msbs_mag"), mag_4("6Rnd_12Gauge_Slug"), mag_3("CUP_12Rnd_45ACP_mk23"), "HandGrenade", "SmokeShell"};
};
class TACU_MSF_U_O_DDogs_Black_Engineer: TACU_MSF_U_I_DDogs_Black_Engineer {
    side = 0;
    faction = "TACU_MSF_O";
};
