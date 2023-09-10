class TACU_African_Militia_V_O_DSHKM: TACU_Assets_DSHKM_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_African_Militia_O";
    side = 0;
    crew = "TACU_African_Militia_U_O_Rifleman";
    typicalCargo[] = {"TACU_African_Militia_U_O_Rifleman"};
    EDITORPREVIEW(TACU_African_Militia_V_O_DSHKM);
};
class TACU_African_Militia_V_I_DSHKM: TACU_African_Militia_V_O_DSHKM {
    faction = "TACU_African_Militia_I";
    side = 2;
    crew = "TACU_African_Militia_U_I_Rifleman";
    typicalCargo[] = {"TACU_African_Militia_U_I_Rifleman"};
};
