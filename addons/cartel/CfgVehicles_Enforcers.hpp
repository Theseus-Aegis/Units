// High end gear.
class TACU_Cartel2_U_O_Enforcer_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Enforcer (G36A)";
    faction = "TACU_Cartel_O";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Enforcers";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_O_R_Gorka_01_black_F";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrier1_blk", "H_PASGT_basic_black_F", "NVGogglesB_blk_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_PlateCarrier1_blk", "H_PASGT_basic_black_F", "NVGogglesB_blk_F"};
    weapons[] = {"TACU_Cartel_W_G36A_RIS", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_G36A_RIS", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
    headgearList[] = {
        "H_PASGT_basic_black_F", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 1
    };
};
class TACU_Cartel2_U_O_Enforcer_Rifleman_02: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36A AG36)";
    weapons[] = {"TACU_Cartel_W_G36A_AG36", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_G36A_AG36", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_6("1Rnd_HE_Grenade_shell"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_03: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36C)";
    weapons[] = {"TACU_Cartel_W_G36C", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_G36C", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_04: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G36K / RPG7)";
    weapons[] = {"TACU_Cartel_W_G36K_KSK", "CUP_launch_RPG7V", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_G36K_KSK", "CUP_launch_RPG7V", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), "CUP_OG7_M", mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_556x45_G36"), "CUP_OG7_M", mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_05: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (G3A3)";
    weapons[] = {"TACU_Cartel_W_G3A3", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_G3A3", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_20Rnd_762x51"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_06: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (MG36)";
    weapons[] = {"TACU_Cartel_W_MG36", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_MG36", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_100Rnd_556x45_BetaC"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_100Rnd_556x45_BetaC"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_07: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (Saiga-12k)";
    weapons[] = {"TACU_Cartel_W_Saiga12k", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Cartel_W_Saiga12k", "TACU_Cartel_W_M9_Laser", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_20Rnd_Saiga_000"), mag_5("tacgt_20Rnd_Saiga_AP20"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_5("tacgt_20Rnd_Saiga_000"), mag_5("tacgt_20Rnd_Saiga_AP20"), mag_2("tacgt_AI_15Rnd_9x19_M9"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};

class TACU_Cartel2_U_O_Enforcer_Rifleman_08: TACU_Cartel2_U_O_Enforcer_Rifleman_01 {
    displayName = "Enforcer (M32 / MP7)";
    weapons[] = {"CUP_glaunch_M32", "TACU_Cartel_W_hgun_MP7", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M32", "TACU_Cartel_W_hgun_MP7", "Throw", "Put"};
    magazines[] = {mag_6("CUP_6Rnd_HE_M203"), mag_4("tacgt_AI_40Rnd_46x30_MP7"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_6("CUP_6Rnd_HE_M203"), mag_4("tacgt_AI_40Rnd_46x30_MP7"), mag_2("HandGrenade")};
    //EDITORPREVIEW();
};
