// Western Units. (Independent)
class TACU_Seven_Rings_Western_U_I_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Seven_Rings_Western";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Enoch"};
    genericNames = "TACU_PolishNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_O_R_Gorka_01_F";
    items[] = {"ACE_NVG_Gen4_Green"};
    respawnItems[] = {"ACE_NVG_Gen4_Green"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_Olive_F",
        "H_HelmetHBK_F",
        "G_Balaclava_oli"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_CarrierRigKBT_01_light_Olive_F",
        "H_HelmetHBK_F",
        "G_Balaclava_oli"
    };
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    headgearList[] = {"H_HelmetHBK_F", 1};
    CBA_facewearList[] = {"G_Balaclava_oli", 1};
    //EDITORPREVIEW(TACU_Seven_Rings_Western_U_I_Rifleman_01);
};
