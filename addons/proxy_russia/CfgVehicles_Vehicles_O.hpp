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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Offroad);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Offroad_Armed);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Offroad_AT);
};
class TACU_Proxy_Russia_V_O_Offroad_AT_CBRN: TACU_Proxy_Russia_V_O_Offroad_AT {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Helicopters
class TACU_Proxy_Russia_V_O_Kasatka: TACU_Kasatka_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Pilot";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Pilot"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Kasatka);
};
class TACU_Proxy_Russia_V_O_Kasatka_CBRN: TACU_Proxy_Russia_V_O_Kasatka {
    editorSubcategory = "TACU_Proxy_Russia_Helicopter_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Pilot_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Pilot_CBRN"};
};

class TACU_Proxy_Russia_V_O_Kasatka_Armed: TACU_Kasatka_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Pilot";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Pilot"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Kasatka_Armed);
};
class TACU_Proxy_Russia_V_O_Kasatka_Armed_CBRN: TACU_Proxy_Russia_V_O_Kasatka_Armed {
    editorSubcategory = "TACU_Proxy_Russia_Helicopter_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Pilot_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Pilot_CBRN"};
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Jeep);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Jeep_LMG);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Jeep_AT);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_MATV);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_MATV_HMG);
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_MATV_GMG);
};
class TACU_Proxy_Russia_V_O_MATV_GMG_CBRN: TACU_Proxy_Russia_V_O_MATV_GMG {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Tanks
class TACU_Proxy_Russia_V_O_Wiesel_MK20: TACU_Wiesel_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Wiesel_MK20);
};
class TACU_Proxy_Russia_V_O_Wiesel_MK20_CBRN: TACU_Proxy_Russia_V_O_Wiesel_MK20 {
    editorSubcategory = "TACU_Proxy_Russia_Tank_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Wiesel_AT: TACU_Wiesel_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Wiesel_AT);
};
class TACU_Proxy_Russia_V_O_Wiesel_AT_CBRN: TACU_Proxy_Russia_V_O_Wiesel_AT {
    editorSubcategory = "TACU_Proxy_Russia_Tank_CBRN";
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
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Truck);
};
class TACU_Proxy_Russia_V_O_Truck_CBRN: TACU_Proxy_Russia_V_O_Truck {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

// Typhoon
class TACU_Proxy_Russia_V_O_Typhoon: TACU_Typhoon_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Typhoon);
};
class TACU_Proxy_Russia_V_O_Typhoon_CBRN: TACU_Proxy_Russia_V_O_Typhoon {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Typhoon_Covered: TACU_Typhoon_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Typhoon_Covered);
};
class TACU_Proxy_Russia_V_O_Typhoon_Covered_CBRN: TACU_Proxy_Russia_V_O_Typhoon_Covered {
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
};

class TACU_Proxy_Russia_V_O_Typhoon_Device_CBRN: TACU_Typhoon_Device_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    editorSubcategory = "TACU_Proxy_Russia_Car_CBRN";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver_CBRN";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver_CBRN"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Typhoon_Device_CBRN);
};

// Anti-Air
class TACU_Proxy_Russia_V_O_Tigris: TACU_Tigris_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Tigris);
};

// APCs
class TACU_Proxy_Russia_V_O_Iskatel: TACU_BM2T_Iskatel_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Iskatel);
};

class TACU_Proxy_Russia_V_O_Stalker: TACU_BM2T_Stalker_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Stalker);
};

class TACU_Proxy_Russia_V_O_Pandur: TACU_Pandur_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Eastern_Europe", 1};
    //EDITORPREVIEW(TACU_Proxy_Russia_V_O_Pandur);
};
