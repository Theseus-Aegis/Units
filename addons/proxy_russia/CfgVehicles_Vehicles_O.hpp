// Offroads
class TACU_Proxy_Russia_V_O_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
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
class TACU_Proxy_Russia_V_O_Offroad_CBRN: TACU_Proxy_Russia_V_O_Offroad {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Offroad_Armed: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
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
class TACU_Proxy_Russia_V_O_Offroad_Armed_CBRN: TACU_Proxy_Russia_V_O_Offroad_Armed {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Offroad_AT: TACU_Offroad_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
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
class TACU_Proxy_Russia_V_O_Offroad_AT_CBRN: TACU_Proxy_Russia_V_O_Offroad_AT {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Jeep Wranglers
class TACU_Proxy_Russia_V_O_Jeep: TACU_Jeep_Wrangler_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Olive", 1};
    animationList[] = {
        "hideLeftDoor", 0,
        "hideRightDoor", 0,
        "hideRearDoor", 0,
        "hideBullbar", 0,
        "hideFenders", 0,
        "hideHeadSupportRear", 0,
        "hideHeadSupportFront", 0,
        "hideRollcage", 0,
        "hideSeatsRear", 0,
        "hideSpareWheel", 0
    };
};
class TACU_Proxy_Russia_V_O_Jeep_CBRN: TACU_Proxy_Russia_V_O_Jeep {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Jeep_LMG: TACU_Jeep_Wrangler_LMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Olive", 1};
    animationList[] = {
        "hideLeftDoor", 0,
        "hideRightDoor", 0,
        "hideRearDoor", 0,
        "hideFenders", 0,
        "hideHeadSupportFront", 0,
        "hideSpareWheel", 0
    };
};
class TACU_Proxy_Russia_V_O_Jeep_LMG_CBRN: TACU_Proxy_Russia_V_O_Jeep_LMG {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Jeep_AT: TACU_Jeep_Wrangler_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Olive", 1};
    animationList[] = {
        "hideLeftDoor", 0,
        "hideRightDoor", 0,
        "hideRearDoor", 0,
        "hideFenders", 0,
        "hideHeadSupportFront", 0,
        "hideSpareWheel", 0
    };
};
class TACU_Proxy_Russia_V_O_Jeep_AT_CBRN: TACU_Proxy_Russia_V_O_Jeep_AT {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// M-ATVs
class TACU_Proxy_Russia_V_O_MATV: TACU_MATV_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};
class TACU_Proxy_Russia_V_O_MATV_CBRN: TACU_Proxy_Russia_V_O_MATV {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_MATV_HMG: TACU_MATV_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};
class TACU_Proxy_Russia_V_O_MATV_HMG_CBRN: TACU_Proxy_Russia_V_O_MATV_HMG {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_MATV_GMG: TACU_MATV_GMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};
class TACU_Proxy_Russia_V_O_MATV_GMG_CBRN: TACU_Proxy_Russia_V_O_MATV_GMG {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Truck
class TACU_Proxy_Russia_V_O_Truck: TACU_Truck_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Olive", 1};
};
class TACU_Proxy_Russia_V_O_Truck_CBRN: TACU_Proxy_Russia_V_O_Truck {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Anti-Air
class TACU_Proxy_Russia_V_O_Tigris: TACU_Tigris_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};

// APCs
class TACU_Proxy_Russia_V_O_Iskatel: TACU_BM2T_Iskatel_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};

class TACU_Proxy_Russia_V_O_Stalker: TACU_BM2T_Stalker_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};

class TACU_Proxy_Russia_V_O_Pandur: TACU_Pandur_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
};