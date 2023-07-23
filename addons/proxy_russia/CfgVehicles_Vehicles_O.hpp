// Offroads
class TACU_Proxy_Russia_V_O_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Proxy_Russia_O";
    side = 0;
    crew = "TACU_Proxy_Russia_U_O_Driver";
    typicalCargo[] = {"TACU_Proxy_Russia_U_O_Driver"};
    textureList[] = {"Green", 1};
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
    textureList[] = {"Green", 1};
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
    textureList[] = {"Green", 1};
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
