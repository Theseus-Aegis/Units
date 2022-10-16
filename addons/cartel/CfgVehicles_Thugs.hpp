class TACU_Cartel2_U_O_Thug_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Thug";
    faction = "TACU_Cartel_O";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Thugs";
    //editorPreview = QPATHTOF(ui\TACU_Cartel2_U_O_Thug_Rifleman_01.jpg);
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
    weapons[] = {"", "Throw", "Put"};
    respawnWeapons[] = {"", "Throw", "Put"};
    magazines[] = {mag_7(""), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7(""), mag_2("HandGrenade")};
    headgearList[] = {
        "", 0.33
    };
    CBA_facewearList[] = {
        "", 1
    };
};
