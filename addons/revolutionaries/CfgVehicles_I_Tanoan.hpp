// Civil Defense
class TACU_Revolutionaries_U_I_Tanoan_Rifleman01: TACU_Main_U_INDEP_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Jack";
    displayName = "Rifleman (FAL)";
    faction = "TACU_Revolutionaries_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
    genericNames = "TanoanMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_C_MAN_casual_1_F";
    backpack = "B_FieldPack_green_F";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_FNFAL", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_20Rnd_762x51_FAL")};
    respawnMagazines[] = {mag_5("tacgt_AI_20Rnd_762x51_FAL")};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Tanoan";
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Rifleman01)
    headgearList[] = {
        "", 1
    };
    CBA_facewearList[] = {
        "", 1
    };
};

class TACU_Revolutionaries_U_I_Tanoan_Rifleman02: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Rifleman (MK14)";
    uniformClass = "U_C_MAN_casual_2_F";
    weapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    respawnWeapons[] = {"srifle_DMR_06_hunter_F", "Throw", "Put"};
    magazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    respawnMagazines[] = {mag_5("10Rnd_Mk14_762x51_Mag")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Rifleman02)
};

class TACU_Revolutionaries_U_I_Tanoan_Rifleman03: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Rifleman (Lee Enfield)";
    uniformClass = "U_C_MAN_casual_6_F";
    weapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_LeeEnfield", "Throw", "Put"};
    magazines[] = {mag_5("CUP_10x_303_M")};
    respawnMagazines[] = {mag_5("CUP_10x_303_M")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Rifleman03)
};

class TACU_Revolutionaries_U_I_Tanoan_Paramedic: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    uniformClass = "U_C_Poloshirt_burgundy";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000")};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000")};
    backpack = "TACU_Revolutionaries_B_Paramedic_Green";
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Paramedic)
};

class TACU_Revolutionaries_U_I_Tanoan_Shotgunner: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Shotgunner";
    uniformClass = "U_C_MAN_casual_3_F";
    weapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_F", "Throw", "Put"};
    magazines[] = {mag_12("tacgt_2Rnd_P_000")};
    respawnMagazines[] = {mag_12("tacgt_2Rnd_P_000")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Shotgunner)
};

class TACU_Revolutionaries_U_I_Tanoan_Marksman: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Marksman";
    role = "Marksman";
    uniformClass = "U_C_MAN_casual_5_F";
    weapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    respawnWeapons[] = {"CUP_srifle_CZ550", "Throw", "Put"};
    magazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    respawnMagazines[] = {mag_4("CUP_5x_22_LR_17_HMR_M")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Marksman)
};

class TACU_Revolutionaries_U_I_Tanoan_Pistoleer01: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Pistoleer (Grach)";
    uniformClass = "U_I_C_Soldier_Bandit_1_F";
    backpack = "";
    weapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Pistoleer01)
};

class TACU_Revolutionaries_U_I_Tanoan_Pistoleer02: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Pistoleer (FNX)";
    uniformClass = "U_I_C_Soldier_Bandit_4_F";
    backpack = "";
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_11Rnd_45ACP_FNX")};
    respawnMagazines[] = {mag_6("tacgt_AI_11Rnd_45ACP_FNX")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Pistoleer02)
};

class TACU_Revolutionaries_U_I_Tanoan_Head: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Head";
    icon = "iconManOfficer";
    uniformClass = "U_C_HunterBody_grn";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Cap_tan"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Cap_tan"};
    backpack = "";
    weapons[] = {"hgun_P07_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_P07_F", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther")};
    respawnMagazines[] = {mag_6("tacgt_AI_17Rnd_9x19_Walther")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Head)
    headgearList[] = {
        "H_Cap_tan", 1
    };
};

class TACU_Revolutionaries_U_I_Tanoan_FigureHeadUA: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Representative (Unarmed)";
    uniformClass = "U_OrestesBody";
    linkedItems[] = {DEFAULT_ITEMS, "H_StrawHat_dark"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "", "H_StrawHat_dark"};
    backpack = "";
    weapons[] = {"Throw", "Put"};
    respawnWeapons[] = {"Throw", "Put"};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_FigureHeadUA)
    headgearList[] = {
        "H_StrawHat_dark", 1
    };
};

class TACU_Revolutionaries_U_I_Tanoan_FigureHead: TACU_Revolutionaries_U_I_Tanoan_FigureHeadUA {
    displayName = "Representative";
    weapons[] = {"hgun_Pistol_heavy_02_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_02_F", "Throw", "Put"};
    magazines[] = {mag_3("6Rnd_45ACP_Cylinder")};
    respawnMagazines[] = {mag_3("6Rnd_45ACP_Cylinder")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_FigureHead)
};

class TACU_Revolutionaries_U_I_Tanoan_Leader: TACU_Revolutionaries_U_I_Tanoan_Rifleman01 {
    displayName = "Leader";
    icon = "iconManLeader";
    uniformClass = "U_BG_Guerilla3_1";
    linkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_khk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS, "V_LegStrapBag_black_F", "H_Booniehat_khk"};
    weapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A1", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_6("CUP_20Rnd_556x45_Stanag")};
    //EDITORPREVIEW(Revolutionaries_U_I_Tanoan_Leader)
    headgearList[] = {
        "H_Booniehat_khk", 1
    };
};
