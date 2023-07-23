// Grunts, Lowest tier with no armour and SMGs/Handguns.
class TACU_Cartel_Greek_U_O_Grunt_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Grunt (Uzi)";
    faction = "TACU_Cartel_Greek_O";
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Grunts";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Greek_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk"};
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_32Rnd_UZI"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_32Rnd_UZI"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_01);
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

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_02: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Grunt (TEC-9)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_02";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_32Rnd_TEC9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_32Rnd_TEC9"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_02);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_03: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Grunt (Glock 18)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_03";
    weapons[] = {"CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_17Rnd_Glock"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_03);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_04: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Grunt (Sa. VZ 61)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_04";
    weapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    magazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_04);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_05: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Rifleman (MAC-10)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_05";
    weapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
    magazines[] = {mag_7("TACU_Magazine_30Rnd_MAC10"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("TACU_Magazine_30Rnd_MAC10"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_05);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_06: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Rifleman (CPW)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_06";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_4("TACU_Magazine_30Rnd_SMG"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_06);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_07: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Rifleman (Sawed-Off)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_03";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_9("2Rnd_12Gauge_Pellets"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_9("2Rnd_12Gauge_Pellets"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_07);
};

class TACU_Cartel_Greek_U_O_Grunt_Rifleman_08: TACU_Cartel_Greek_U_O_Grunt_Rifleman_01 {
    displayName = "Rifleman (Micro-UZI)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_06";
    weapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    magazines[] = {mag_5("TACU_Magazine_32Rnd_UZI"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_5("TACU_Magazine_32Rnd_UZI"), mag_2("HandGrenade")};
    EDITORPREVIEW(TACU_Cartel_Greek_U_O_Grunt_Rifleman_08);
};
