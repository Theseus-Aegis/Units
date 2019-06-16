class CfgVehicles {
    // Base Classes
    class SoldierWB;
    class SoldierEB;
    class SoldierGB;

    // Base BLUFOR Soldier
    class TACU_Main_U_BLUFOR_Soldier_Base: SoldierWB {
        author = "TAC Units Team";
        displayName = "TACU BLUFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 1;
        sensitivity = 1.75;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        headgearList[] = {
            "", 1
        };
    };

    // Base OPFOR Soldier
    class TACU_Main_U_OPFOR_Soldier_Base: SoldierEB {
        author = "TAC Units Team";
        displayName = "TACU OPFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 0;
        sensitivity = 1.75;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
        identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
        genericNames = "TakistaniMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        headgearList[] = {
            "", 1
        };
    };

    // Base INDEP Soldier
    class TACU_Main_U_INDEP_Soldier_Base: SoldierGB {
        author = "TAC Units Team";
        displayName = "TACU INDEP Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        sensitivity = 1.75;
        sensitivityEar = 0.125;
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
        genericNames = "GreekMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        Items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        headgearList[] = {
            "", 1
        };
    };
};

class Extended_Init_Eventhandlers {
    class TACU_Main_U_BLUFOR_Soldier_Base {
        class TACU_Main_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
    class TACU_Main_U_OPFOR_Soldier_Base {
        class TACU_Main_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
    class TACU_Main_U_INDEP_Soldier_Base {
        class TACU_Main_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
};
