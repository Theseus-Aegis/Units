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
    sensitivityEar = 0.15;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_MSF_Uniform_CBRN_Black";
    backpack = "";
    //editorPreview = QPATHTOF(ui\MSF_U_I_XOF_Rifleman_01.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "G_RegulatorMask_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "G_RegulatorMask_F", "TACU_MSF_Vest_PlateCarrier_Black"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_MSF_W_CZ_BREN2_11in", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    respawnWeapons[] = {"TACU_MSF_W_CZ_BREN2_11in", "TACU_MSF_W_Mk23_SOCOM", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_12Rnd_45ACP_mk23"), mag_2("HandGrenade"), mag_6("SmokeShell"), mag_2("ACE_M84")};
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
