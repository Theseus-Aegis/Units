class TACU_Taliban_Militia_V_I_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Brown", 1};
    animationList[] = {
        "shield_hide", 0,
        "hideCrates", 0,
        "hideSpareWheel", 0,
        "hideRoofRack", 1,
        "hideBeacon_1", 0,
        "hideBumper", 0,
        "hideWindowProtector", 0
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Kamaz_ZU23);
};
class TACU_Taliban_Militia_V_I_Kamaz_Transport: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Brown", 1};
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Kamaz_Transport);
};
class TACU_Taliban_Militia_V_I_Kamaz_Covered_Transport: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Brown", 1};
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Kamaz_Covered_Transport);
};
class TACU_Taliban_Militia_V_I_Truck: TACU_Truck_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Truck);
};
class TACU_Taliban_Militia_V_I_Offroad_Unarmed: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0,
        "hidePolice", 1,
        "HideServices", 1,
        "BeaconsStart", 0,
        "BeaconsServicesStart", 0
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Offroad_Unarmed);
};
class TACU_Taliban_Militia_V_I_Offroad_HMG: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "Hide_Shield", 0,
        "Hide_Rail", 0,
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Offroad_HMG);
};
class TACU_Taliban_Militia_V_I_Offroad_AT: TACU_Offroad_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Militia_I";
    side = 2;
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0
    };
    //EDITORPREVIEW(TACU_Taliban_Militia_V_I_Offroad_AT);
};
class TACU_Taliban_Militia_V_I_Pickup_Unarmed: TACU_Taliban_Veterans_V_I_Pickup_Unarmed {
    faction = "TACU_Taliban_Militia_I";
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
};
class TACU_Taliban_Militia_V_I_Pickup_HMG: TACU_Taliban_Veterans_V_I_Pickup_HMG {
    faction = "TACU_Taliban_Militia_I";
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
};
class TACU_Taliban_Militia_V_I_Pickup_MMG: TACU_Taliban_Veterans_V_I_Pickup_MMG {
    faction = "TACU_Taliban_Militia_I";
    crew = "TACU_Taliban_Militia_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Militia_U_I_Driver"};
};
