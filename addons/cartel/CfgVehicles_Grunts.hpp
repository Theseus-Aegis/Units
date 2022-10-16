// Grunts, Lowest tier with no armour and SMGs/Handguns.

class TACU_Cartel2_U_O_Grunt_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Grunt (Uzi)";
    faction = "TACU_Cartel_O";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Grunts";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_01.jpg);
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Uniform_O_W_Cartel_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {mag_7("CUP_32Rnd_9x19_UZI_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_32Rnd_9x19_UZI_M"), mag_2("HandGrenade")};
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

class TACU_Cartel2_U_O_Grunt_Rifleman_02: TACU_Cartel2_U_O_Grunt_Rifleman_01 {
    displayName = "Grunt (TEC-9)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_02.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_02";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_7("CUP_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_03: TACU_Cartel2_U_O_Grunt_Rifleman_02 {
    displayName = "Grunt (Glock 18)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_03.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_03";
    weapons[] = {"tacgt_hgun_Glock18_Black", "Throw", "Put"};
    respawnWeapons[] = {"tacgt_hgun_Glock18_Black", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_17Rnd_9x19_Glock_Ball"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_17Rnd_9x19_Glock_Ball"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_04: TACU_Cartel2_U_O_Grunt_Rifleman_03 {
    displayName = "Grunt (Sa. VZ 61)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_04.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_04";
    weapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    magazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_05: TACU_Cartel2_U_O_Grunt_Rifleman_04 {
    displayName = "Rifleman (MAC-10)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_05.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_05";
    weapons[] = {"CUP_hgun_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_Mac10", "Throw", "Put"};
    magazines[] = {mag_7("CUP_30Rnd_45ACP_MAC10_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7)("CUP_30Rnd_45ACP_MAC10_M"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_06: TACU_Cartel2_U_O_Grunt_Rifleman_05 {
    displayName = "Rifleman (CPW)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_06.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_06";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_30Rnd_9x19_Ball"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_4("tacgt_30Rnd_9x19_Ball"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_07: TACU_Cartel2_U_O_Grunt_Rifleman_06 {
    displayName = "Rifleman (Sawed-Off)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_07.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_03";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_9("tacgt_2Rnd_P_000"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_9("tacgt_2Rnd_P_000"), mag_2("HandGrenade")};
};

class TACU_Cartel2_U_O_Grunt_Rifleman_08: TACU_Cartel2_U_O_Grunt_Rifleman_07 {
    displayName = "Rifleman (Micro-UZI)";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Grunt_Rifleman_08.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_06";
    weapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_9x19_UZI"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_9x19_UZI"), mag_2("HandGrenade")};
};
