class TACU_Cartel_Greek_U_O_Thug_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Thug (P90)";
    faction = "TACU_Cartel_Greek_O";
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Thugs";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Greek_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_01";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_blk",
        "H_Cap_blk"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_TacVest_blk",
        "H_Cap_blk"
    };
    weapons[] = {"SMG_03C_black", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_50Rnd_P90"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_50Rnd_P90"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_01);
    headgearList[] = {
        "H_Cap_blk", 0.33,
        "H_Cap_oli", 0.33,
        "H_ShemagOpen_tan", 0.33,
        "H_Shemag_olive", 0.33,
        "H_Bandanna_gry", 0.33,
        "H_Bandanna_blu", 0.33
    };
    CBA_facewearList[] = {
        "G_Aviator", 1,
        "G_Bandanna_beast", 1,
        "G_Bandanna_blk", 1,
        "G_Bandanna_shades", 1,
        "G_Bandanna_sport", 1,
        "G_Sport_Blackred", 1,
        "G_Balaclava_blk", 1
    };
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_02: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (MP5)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_02";
    weapons[] = {"CUP_smg_MP5A5_Rail_VFG", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5_Rail_VFG", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_MP5"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_MP5"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_02);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_03: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (AKS-74U)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_03";
    weapons[] = {"arifle_AKS_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_545_AK"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_545_AK"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_03);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_04: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (M79/MAC-10)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_04";
    weapons[] = {
        "CUP_glaunch_M79",
        "CUP_hgun_Mac10",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "CUP_glaunch_M79",
        "CUP_hgun_Mac10",
        "Throw", "Put"
    };
    magazines[] = {
        mag_7("1Rnd_HE_Grenade_shell"),
        mag_6("TACU_Magazine_30Rnd_MAC10"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("1Rnd_HE_Grenade_shell"),
        mag_6("TACU_Magazine_30Rnd_MAC10"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_04);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_05: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (M1014)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_05";
    weapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    magazines[] = {mag_7("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_8Rnd_12Gauge_Pellets_No00_Buck"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_05);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_06: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (MP7)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_06";
    weapons[] = {"CUP_smg_MP7", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP7", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_40Rnd_MP7"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_40Rnd_MP7"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_06);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_07: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (Vikhr)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_03";
    weapons[] = {"CUP_arifle_SR3M_Vikhr", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_SR3M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_SR3M"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_07);
};
class TACU_Cartel_Greek_U_O_Thug_Rifleman_08: TACU_Cartel_Greek_U_O_Thug_Rifleman_01 {
    displayName = "Thug (Scorpion Evo)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_01";
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_SMG"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_SMG"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Thug_Rifleman_08);
};

