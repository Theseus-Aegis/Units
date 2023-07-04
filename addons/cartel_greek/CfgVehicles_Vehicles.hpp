// Grunt Vehicles
class TACU_Cartel_Greek_V_O_Grunt_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Cartel_Greek_O";
    side = 0;
    crew = "TACU_Cartel_Greek_U_O_Grunt_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Grunt_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Grunts_Vehicles";
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 1,
        "HideConstruction", 0,
        "hidePolice", 1,
        "HideServices", 1,
        "BeaconsStart", 0,
        "BeaconsServicesStart", 0
    };
    textureList[] = {"Bluecustom", 1};
};

class TACU_Cartel_Greek_V_O_Grunt_Van_Transport: TACU_Transport_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Cartel_Greek_O";
    side = 0;
    crew = "TACU_Cartel_Greek_U_O_Grunt_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Grunt_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Grunts_Vehicles";

    textureList[] = {"Black", 1};
    animationList[] = {
        "Door_1_source", 0,
        "Door_2_source", 0,
        "Door_3_source", 0,
        "Door_4_source", 0,
        "Hide_Door_1_source", 0,
        "Hide_Door_2_source", 0,
        "Hide_Door_3_source", 0,
        "Hide_Door_4_source", 0,
        "lights_em_hide", 0,
        "ladder_hide", 0,
        "spare_tyre_holder_hide", 0,
        "spare_tyre_hide", 0,
        "reflective_tape_hide", 1,
        "roof_rack_hide", 1,
        "LED_lights_hide", 1,
        "sidesteps_hide", 1,
        "rearsteps_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 1,
        "beacon_front_hide", 1,
        "beacon_rear_hide", 1
    };
};

// Thug Vehicles
class TACU_Cartel_Greek_V_O_Thug_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Cartel_Greek_O";
    side = 0;
    crew = "TACU_Cartel_Greek_U_O_Thug_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Thug_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Thugs_Vehicles";
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 1,
        "HideConstruction", 0,
        "hidePolice", 1,
        "HideServices", 1,
        "BeaconsStart", 0,
        "BeaconsServicesStart", 0
    };
    textureList[] = {"Bluecustom", 1};
};

class TACU_Cartel_Greek_V_O_Thug_Offroad_Armed: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Cartel_Greek_O";
    side = 0;
    crew = "TACU_Cartel_Greek_U_O_Thug_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Thug_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Thugs_Vehicles";

    textureList[] = {"Black", 1};
    animationList[] = {
        "Hide_Shield", 0,
        "Hide_Rail", 1,
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0
    };
};

class TACU_Cartel_Greek_V_O_Thug_Van_Transport: TACU_Cartel_Greek_V_O_Grunt_Van_Transport {
    crew = "TACU_Cartel_Greek_U_O_Thug_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Thug_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Thugs_Vehicles";
};

// Enforcer Vehicles
class TACU_Cartel_Greek_V_O_Enforcer_Offroad: TACU_Cartel_Greek_V_O_Grunt_Offroad {
    crew = "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Enforcers_Vehicles";
};

class TACU_Cartel_Greek_V_O_Enforcer_Offroad_Armed: TACU_Cartel_Greek_V_O_Thug_Offroad_Armed {
    crew = "TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01";
    typicalCargo[] = {"TACU_Cartel_Greek_U_O_Enforcer_Rifleman_01"};
    editorSubcategory = "TACU_Cartel_Greek_EdSubCat_O_Enforcers_Vehicles";
};
