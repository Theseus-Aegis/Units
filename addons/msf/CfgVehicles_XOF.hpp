// Units - XOF
class TACU_Main_U_INDEP_Soldier_Base;
class TACU_MSF_U_I_XOF_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
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
    uniformClass = "TACU_MSF_Uniform_CBRN_Black";
    backpack = "B_SCBA_01_F";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_RegulatorMask_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_RegulatorMask_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_ACRC_556_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_8("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "G_RegulatorMask_F", 1,
    };
    editorSubcategory = "TACU_MSF_EdSubCat_XOF";
};
class TACU_MSF_U_O_XOF_Rifleman_01: TACU_MSF_U_I_XOF_Rifleman_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_XOF_Grenadier: TACU_MSF_U_I_XOF_Rifleman_01 {
    displayName = "Grenadier";
    role = "Grenadier";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_Grenadier.jpg);
    weapons[] = {"TACU_MSF_W_ACRC_556_GL_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_ACRC_556_GL_Black", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_4("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), "HandGrenade", mag_4("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_556x45_M995_PMAG"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_4("1Rnd_HE_Grenade_shell"), mag_4("1Rnd_Smoke_Grenade_shell"), "HandGrenade", mag_4("SmokeShell"), mag_2("ACE_M84")};
};
class TACU_MSF_U_O_XOF_Grenadier: TACU_MSF_U_I_XOF_Grenadier {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_XOF_SMG_01: TACU_MSF_U_I_XOF_Rifleman_01 {
    displayName = "Sub Machine-Gunner (MP5)";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_SMG_01.jpg);
    weapons[] = {"CUP_smg_MP5A5_flashlight", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5_flashlight", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_10("CUP_30Rnd_9x19_MP5"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_10("CUP_30Rnd_9x19_MP5"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
};
class TACU_MSF_U_O_XOF_SMG_01: TACU_MSF_U_I_XOF_SMG_01 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_XOF_SMG_02: TACU_MSF_U_I_XOF_Rifleman_01 {
    displayName = "Sub Machine-Gunner (MP7)";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_SMG_02.jpg);
    weapons[] = {"TACU_MSF_W_MP7A1", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_MP7A1", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_8("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_8("CUP_40Rnd_46x30_MP7"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
};
class TACU_MSF_U_O_XOF_SMG_02: TACU_MSF_U_I_XOF_SMG_02 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_XOF_SMG_03: TACU_MSF_U_I_XOF_Rifleman_01 {
    displayName = "Sub Machine-Gunner (P90)";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_SMG_03.jpg);
    weapons[] = {"TACU_MSF_W_P90", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_P90", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_6("50Rnd_570x28_SMG_03"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
};
class TACU_MSF_U_O_XOF_SMG_03: TACU_MSF_U_I_XOF_SMG_03 {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_XOF_Breacher: TACU_MSF_U_I_XOF_Rifleman_01 {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\eden\MSF_U_I_XOF_Breacher.jpg);
    Items[] = {mag_8("ACE_fieldDressing"), "ACE_DefusalKit", "ACE_M26_Clacker"};
    respawnItems[] = {mag_8("ACE_fieldDressing"), "ACE_DefusalKit", "ACE_M26_Clacker"};
    weapons[] = {"TACU_MSF_W_M1014_Entry", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_M1014_Entry", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_10("CUP_6Rnd_B_Beneli_74Pellets"), mag_6("CUP_6Rnd_B_Benelli_74Slug"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84"), mag_2("DemoCharge_Remote_Mag")};
    respawnMagazines[] = {mag_10("CUP_6Rnd_B_Beneli_74Pellets"), mag_6("CUP_6Rnd_B_Benelli_74Slug"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84"), mag_2("DemoCharge_Remote_Mag")};
};
class TACU_MSF_U_O_XOF_Breacher: TACU_MSF_U_I_XOF_Breacher {
    side = 0;
    faction = "TACU_MSF_O";
};
