class TACU_Territorial_Militia_V_O_Offroad_Unarmed_Arid: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Arid";
    faction = "TACU_Territorial_Militia_O";
    side = 0;
    crew = "TACU_Territorial_Militia_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Arid"};
    textureList[] = {"Guerilla_10", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 1,
        "hidePolice", 1,
        "HideServices", 1,
        "BeaconsStart", 0,
        "BeaconsServicesStart", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Militia_V_O_Offroad_Unarmed);
};

class TACU_Territorial_Militia_V_O_Offroad_M2_Arid: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Arid";
    faction = "TACU_Territorial_Militia_O";
    side = 0;
    crew = "TACU_Territorial_Militia_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Arid"};
    textureList[] = {"Guerilla_10", 1};
    animationList[] = {
        "Hide_Shield", 0,
        "Hide_Rail", 1,
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 1
    };
    //EDITORPREVIEW(TACU_Territorial_Militia_V_O_Offroad_M2);
};

class TACU_Territorial_Militia_V_O_Truck_Arid: TACU_Truck_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Arid";
    faction = "TACU_Territorial_Militia_O";
    side = 0;
    crew = "TACU_Territorial_Militia_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Arid"};
    textureList[] = {"Guerilla_08", 1};
    //EDITORPREVIEW(TACU_Territorial_Militia_V_O_Truck);
};

class TACU_Territorial_Militia_V_O_Kamaz_Transport_Arid: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Arid";
    faction = "TACU_Territorial_Militia_O";
    side = 0;
    crew = "TACU_Territorial_Militia_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Arid"};
    textureList[] = {"Seven_Rings_East", 1};
};

class TACU_Territorial_Militia_V_O_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Arid";
    faction = "TACU_Territorial_Militia_O";
    side = 0;
    crew = "TACU_Territorial_Militia_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Arid"};
    textureList[] = {"Seven_Rings_East", 1};
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

