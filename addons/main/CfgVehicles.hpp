class CfgVehicles {
    // Base Classes
    class SoldierWB;
    class SoldierEB;
    class SoldierGB;
    class Land;

    // Vanilla Units Sensitivity
    class Man: Land {
        MACRO_SENSITIVITY;
    };

    // Base BLUFOR Soldier
    class TACU_Main_U_BLUFOR_Soldier_Base: SoldierWB {
        dlc = QUOTE(PREFIX);
        author = "TAC Units Team";
        displayName = "TACU BLUFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 1;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "NoGlasses"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        /*
        headgearList[] = {
            "", 1
        };
        CBA_facewearList[] = {
            "", 1
        };
        */
    };

    // Base OPFOR Soldier
    class TACU_Main_U_OPFOR_Soldier_Base: SoldierEB {
        dlc = QUOTE(PREFIX);
        author = "TAC Units Team";
        displayName = "TACU OPFOR Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 0;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
        identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
        genericNames = "TakistaniMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        /*
        headgearList[] = {
            "", 1
        };
        CBA_facewearList[] = {
            "", 1
        };
        */
    };

    // Base INDEP Soldier
    class TACU_Main_U_INDEP_Soldier_Base: SoldierGB {
        dlc = QUOTE(PREFIX);
        author = "TAC Units Team";
        displayName = "TACU INDEP Base Soldier";
        faction = "";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        MACRO_SENSITIVITY;
        sensitivityEar = 0.125;
        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        identityTypes[] = {"LanguageGRE_F", "Head_Greek", "NoGlasses"};
        genericNames = "GreekMen";
        icon = "iconMan";
        role = "Rifleman";
        canDeactivateMines = 0;
        engineer = 0;
        attendant = 0;
        uavHacker = 0;
        uniformClass = "";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
        items[] = {};
        respawnItems[] = {};
        weapons[] = {"Throw", "Put"};
        respawnWeapons[] = {"Throw", "Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        /*
        headgearList[] = {
            "", 1
        };
        CBA_facewearList[] = {
            "", 1
        };
        */
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
