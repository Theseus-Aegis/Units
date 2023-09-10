class CfgVehicles {
    #include "\x\tacu\addons\assets\script_classes_vehicles_cup.hpp"

    class TACU_African_South_V_B_D30: TACU_Assets_D30_base {
        MACRO_FACTION_VEHICLE_DEFAULTS;
        faction = "TACU_African_South_B";
        side = 1;
        crew = "TACU_African_South_U_B_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_B_Rifleman"};
        EDITORPREVIEW(TACU_African_South_V_B_D30);
    };
    class TACU_African_South_V_I_D30: TACU_African_South_V_B_D30 {
        faction = "TACU_African_South_I";
        side = 2;
        crew = "TACU_African_South_U_I_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_I_Rifleman"};
    };
    class TACU_African_South_V_O_D30: TACU_African_South_V_B_D30 {
        faction = "TACU_African_South_O";
        side = 0;
        crew = "TACU_African_South_U_O_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_O_Rifleman"};
    };

    class TACU_African_South_V_B_FIM92: TACU_Assets_FIM92_base {
        MACRO_FACTION_VEHICLE_DEFAULTS;
        faction = "TACU_African_South_B";
        side = 1;
        crew = "TACU_African_South_U_B_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_B_Rifleman"};
        EDITORPREVIEW(TACU_African_South_V_B_FIM92);
    };
    class TACU_African_South_V_I_FIM92: TACU_African_South_V_B_FIM92 {
        faction = "TACU_African_South_I";
        side = 2;
        crew = "TACU_African_South_U_I_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_I_Rifleman"};
    };
    class TACU_African_South_V_O_FIM92: TACU_African_South_V_B_FIM92 {
        faction = "TACU_African_South_O";
        side = 0;
        crew = "TACU_African_South_U_O_Rifleman";
        typicalCargo[] = {"TACU_African_South_U_O_Rifleman"};
    };
};
