class TACU_Taliban_Veterans_V_I_ZU23: TACU_Assets_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Sand", 1};
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_ZU23);
};
class TACU_Taliban_Veterans_V_O_ZU23: TACU_Taliban_Veterans_V_I_ZU23 {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
