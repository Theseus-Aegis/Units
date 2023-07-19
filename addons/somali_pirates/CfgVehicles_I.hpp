class TACU_Somali_Pirates_U_I_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman (AK-15)";
    faction = "TACU_Somali_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_African", "Head_Tanoan"};
    genericNames = "TACU_SomaliNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_I_C_Soldier_Bandit_4_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_khk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_Chestrig_khk"};
    weapons[] = {"arifle_AK12_arid_F","Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_arid_F","Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade")};
    headgearList[] = {};
    CBA_facewearList[] = {
        "G_Bandanna_blk", 0.12,
        "G_Bandanna_khk", 0.12,
        "G_Bandanna_tan", 0.12,
        "G_Shades_Black", 0.12,
        "G_Shades_Blue", 0.12,
        "G_Shades_Green", 0.12,
        "G_Shades_Red", 0.12,
        "G_Sport_Red", 0.12
    };
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_01);
};

class TACU_Somali_Pirates_U_I_Rifleman_02: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rifleman (AK-15K)";
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    weapons[] = {"arifle_AK12U_arid_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_arid_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_02);
};

class TACU_Somali_Pirates_U_I_Rifleman_03: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rifleman (SLR)";
    uniformClass = "U_I_C_Soldier_Bandit_5_F";
    weapons[] = {"arifle_SLR_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SLR_lxWS", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_slr_lxWS"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("20Rnd_762x51_slr_lxWS"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_03);
};

class TACU_Somali_Pirates_U_I_Rifleman_04: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rifleman (TEC9)";
    uniformClass = "U_I_C_Soldier_Bandit_3_F";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_6("CUP_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("CUP_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_04);
};

class TACU_Somali_Pirates_U_I_Rifleman_05: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rifleman (M3A1)";
    weapons[] = {"CUP_smg_M3A1_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_M3A1_blk", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_45ACP_M3A1_BLK_M"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_05);
};

class TACU_Somali_Pirates_U_I_Rifleman_06: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rifleman (R5)";
    weapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
    respawnWeapons[] = {"arifle_VelkoR5_lxWS", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("tacgt_AI_35Rnd_556x45_R4"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Rifleman_06);
};

class TACU_Somali_Pirates_U_I_Autorifleman: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Machinegunner (RPK)";
    uniformClass = "U_I_C_Soldier_Bandit_2_F";
    role = "MachineGunner";
    icon = "iconManMG";
    weapons[] = {"arifle_RPK12_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_RPK12_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_4("tacgt_AI_75Rnd_762x39_Drum"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Autorifleman);
};

class TACU_Somali_Pirates_U_I_AT: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Rocketeer (RPG7)";
    uniformClass = "U_I_C_Soldier_Bandit_3_F";
    backpack = "TACU_Somali_Pirates_B_AT_Assault_RPG";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {
        "CUP_hgun_UZI",
        "launch_RPG7_F",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_hgun_UZI",
        "launch_RPG7_F",
        "Throw", "Put"
    };
    magazines[] = {
        mag_6("CUP_32Rnd_9x19_UZI_M"),
        mag_2("HandGrenade"),
        "RPG7_F"
    };
    respawnMagazines[] = {
        mag_6("CUP_32Rnd_9x19_UZI_M"),
        mag_2("HandGrenade"),
        "RPG7_F"
    };
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_AT);
};

class TACU_Somali_Pirates_U_I_Driver: TACU_Somali_Pirates_U_I_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    role = "Crewman";
    weapons[] = {"arifle_AK12U_arid_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12U_arid_F", "Throw", "Put"};
    magazines[] = {
        mag_6("tacgt_AI_30Rnd_762x39_AK"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {mag_6("tacgt_AI_30Rnd_762x39_AK"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Somali_Pirates_U_I_Driver);
};
