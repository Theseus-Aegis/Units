// Militia Vehicles
class TACU_Taliban_Veterans_V_I_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
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
};
class TACU_Taliban_Veterans_V_O_Kamaz_ZU23: TACU_Taliban_Veterans_V_I_Kamaz_ZU23 {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Kamaz_Transport: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Brown", 1};
};
class TACU_Taliban_Veterans_V_O_Kamaz_Transport: TACU_Taliban_Veterans_V_I_Kamaz_Transport {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Kamaz_Covered_Transport: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Brown", 1};
};
class TACU_Taliban_Veterans_V_O_Kamaz_Covered_Transport: TACU_Taliban_Veterans_V_I_Kamaz_Covered_Transport {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Truck: TACU_Truck_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
};
class TACU_Taliban_Veterans_V_O_Truck: TACU_Taliban_Veterans_V_I_Truck {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};


// Offroads
class TACU_Taliban_Veterans_V_I_Offroad_Unarmed: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
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
};
class TACU_Taliban_Veterans_V_O_Offroad_Unarmed: TACU_Taliban_Veterans_V_I_Offroad_Unarmed {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Offroad_HMG: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
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
};
class TACU_Taliban_Veterans_V_O_Offroad_HMG: TACU_Taliban_Veterans_V_I_Offroad_HMG {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Offroad_AT: TACU_Offroad_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
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
};
class TACU_Taliban_Veterans_V_O_Offroad_AT: TACU_Taliban_Veterans_V_I_Offroad_AT {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// UP-Armoured Offroads
class TACU_Taliban_Veterans_V_I_Offroad_Unarmed_UP: TACU_Offroad_Unarmed_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "hideRoofLights", 0,
        "HideBumper1", 1,
        "HideBumper2", 1,
        "HideBumper3", 0,
        "HatchL_rot", 1,
        "HatchR_rot", 1,
        "HideSnorkel", 0,
        "HideDoor3", 0,
        "HideConstruction", 0,
        "HideBackpacks", 1
    };
};
class TACU_Taliban_Veterans_V_O_Offroad_Unarmed_UP: TACU_Taliban_Veterans_V_I_Offroad_Unarmed_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Offroad_HMG_UP: TACU_Offroad_Armed_M2_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "hideRoofLights", 0,
        "HideBumper1", 1,
        "HideBumper2", 1,
        "HideBumper3", 0,
        "HatchL_rot", 1,
        "HatchR_rot", 1,
        "HideSnorkel", 0,
        "Hide_Shield", 0,
        "Hide_Rail", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideConstruction", 0
    };
};
class TACU_Taliban_Veterans_V_O_Offroad_HMG_UP: TACU_Taliban_Veterans_V_I_Offroad_HMG_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Offroad_AT_UP: TACU_Offroad_Armed_AT_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"Guerilla_03", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "hideRoofLights", 0,
        "HideBumper1", 1,
        "HideBumper2", 1,
        "HideBumper3", 0,
        "HatchL_rot", 1,
        "HatchR_rot", 1,
        "HideSnorkel", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideConstruction", 0
    };
};
class TACU_Taliban_Veterans_V_O_Offroad_AT_UP: TACU_Taliban_Veterans_V_I_Offroad_AT_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
