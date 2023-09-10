// Vehicles - Blufor
class TACU_Police_V_B_Offroad_Blue: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_B";
    side = 1;
    displayName = "Offroad Police (Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_2"};
    transportMaxBackpacks = 6;
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0.2,
        "HideBackpacks", 1,
        "HidePolice", 0
    };
    textureList[] = {"Police_Blue", 1};
    EDITORPREVIEW(TACU_Police_V_B_Offroad_Blue);
};

class TACU_Police_V_B_Van_Cargo_Blue: TACU_Cargo_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_B";
    side = 1;
    displayName = "Van Cargo Police (Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_1"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Blue", 1};
    EDITORPREVIEW(TACU_Police_V_B_Van_Cargo_Blue);
};

class TACU_Police_V_B_Van_Transport_Blue: TACU_Transport_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_B";
    side = 1;
    displayName = "Van Transport Police (Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_2"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Blue", 1};
    EDITORPREVIEW(TACU_Police_V_B_Van_Transport_Blue);
};

// Vehicles - Opfor
class TACU_Police_V_O_Offroad_Black: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_O";
    side = 0;
    displayName = "Offroad Police (Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_2"};
    transportMaxBackpacks = 6;
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0.2,
        "HideBackpacks", 1,
        "HidePolice", 0
    };
    textureList[] = {"Police_Russian", 1};
    EDITORPREVIEW(TACU_Police_V_O_Offroad_Black);
};

class TACU_Police_V_O_Van_Cargo_Black: TACU_Cargo_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_O";
    side = 0;
    displayName = "Van Cargo Police (Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_3"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Russian", 1};
    EDITORPREVIEW(TACU_Police_V_O_Van_Cargo_Black);
};

class TACU_Police_V_O_Van_Transport_Black: TACU_Transport_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_O";
    side = 0;
    displayName = "Van Transport Police (Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_3";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_1"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Russian", 1};
    EDITORPREVIEW(TACU_Police_V_O_Van_Transport_Black);
};

// Vehicles - Independent
class TACU_Police_V_I_Offroad_Black: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_I";
    side = 2;
    displayName = "Offroad Police (Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_2"};
    transportMaxBackpacks = 6;
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0.2,
        "HideBackpacks", 1,
        "HidePolice", 0
    };
    textureList[] = {"Police_Black", 1};
    EDITORPREVIEW(TACU_Police_V_I_Offroad_Black);
};

class TACU_Police_V_I_Van_Cargo_Black: TACU_Cargo_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_I";
    side = 2;
    displayName = "Van Cargo Police (Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_1"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Black", 1};
    EDITORPREVIEW(TACU_Police_V_I_Van_Cargo_Black);
};

class TACU_Police_V_I_Van_Transport_Black: TACU_Transport_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    author = "Kresky";
    faction = "TACU_Police_I";
    side = 2;
    displayName = "Van Transport Police (Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_2"};
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    textureList[] = {"Police_Black", 1};
    EDITORPREVIEW(TACU_Police_V_I_Van_Transport_Black);
};
