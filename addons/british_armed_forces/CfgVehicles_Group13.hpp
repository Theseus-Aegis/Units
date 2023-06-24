// Group 13 (Arid)
class TACU_BAF_U_B_Arid_Scout: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Scout";
    faction = "TACU_BAF_B";
    editorSubcategory = "TACU_BAF_EdSubCat_B_Group_13";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
    genericNames = "";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_B_CTRG_Soldier_Arid_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F",
        "NVGogglesB_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F",
        "NVGogglesB_blk_F"
    };
    weapons[] = {"TACU_BAF_W_Arid_HK416", "TACU_BAF_W_Sand_FNX45"};
    respawnWeapons[] = {"TACU_BAF_W_Arid_HK416", "TACU_BAF_W_Sand_FNX45"};
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_11Rnd_45ACP_FNX"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"TACU_BAF_Helmet_EnhancedCombatHelmet_Arid", 1};
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 0.5,
        "G_Balaclava_TI_G_blk_F", 0.5
    };
    //EDITORPREVIEW();
};

class TACU_BAF_U_B_Arid_Demolitions: TACU_BAF_U_B_Arid_Scout {
    displayName = "Demo Specialist";
    backpack = "";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};

class TACU_BAF_U_B_Arid_HeavyGunner: TACU_BAF_U_B_Arid_Scout {
    displayName = "Heavy Gunner";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_JTAC: TACU_BAF_U_B_Arid_Scout {
    displayName = "JTAC";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_Marksman: TACU_BAF_U_B_Arid_Scout {
    displayName = "Marksman";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_Medic: TACU_BAF_U_B_Arid_Scout {
    displayName = "Paramedic";
    backpack = "";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_LAT: TACU_BAF_U_B_Arid_Scout {
    displayName = "Rifleman (Light AT)";
    backpack = "";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_Shotgun: TACU_BAF_U_B_Arid_Scout {
    displayName = "Rifleman (Shotgun)";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
class TACU_BAF_U_B_Arid_TL: TACU_BAF_U_B_Arid_Scout {
    displayName = "Team Leader";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW();
};
