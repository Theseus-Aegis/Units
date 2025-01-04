// Veterans Vehicles
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Kamaz_ZU23);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Kamaz_Transport);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Kamaz_Covered_Transport);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Truck);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_Unarmed);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_HMG);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_AT);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_Unarmed_UP);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_HMG_UP);
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
    EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Offroad_AT_UP);
};
class TACU_Taliban_Veterans_V_O_Offroad_AT_UP: TACU_Taliban_Veterans_V_I_Offroad_AT_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// Unarmed RAM 1500
class TACU_Taliban_Veterans_V_I_Pickup_Unarmed: TACU_Ram1500_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {
        "Guerilla_01", 0.2,
        "Guerilla_02", 0.2,
        "Guerilla_03", 0.2,
        "Guerilla_05", 0.2,
        "Guerilla_09", 0.2
    };
    animationList[] = {
        "hide_bullbar", 0,
        "hide_fuel_tank", 1,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_cover", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_I_Pickup_unarmed_UP: TACU_Taliban_Veterans_V_I_Pickup_Unarmed {
    displayName = "RAM 1500 (UP)";
    animationList[] = {
        "hide_bullbar", 0,
        "hide_fuel_tank", 1,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_cover", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 0,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_O_Pickup_Unarmed: TACU_Taliban_Veterans_V_I_Pickup_Unarmed {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
class TACU_Taliban_Veterans_V_O_Pickup_unarmed_UP: TACU_Taliban_Veterans_V_I_Pickup_unarmed_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// HMG RAM 1500
class TACU_Taliban_Veterans_V_I_Pickup_HMG: TACU_Ram1500_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {
        "Guerilla_01", 0.2,
        "Guerilla_02", 0.2,
        "Guerilla_03", 0.2,
        "Guerilla_05", 0.2,
        "Guerilla_09", 0.2
    };
    animationList[] = {
        "Hide_Shield", 0,
        "Hide_Rail", 0,
        "hide_bullbar", 0,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_I_Pickup_HMG_UP: TACU_Taliban_Veterans_V_I_Pickup_HMG {
    displayName = "RAM 1500 (HMG, UP)";
    animationList[] = {
        "Hide_Shield", 0,
        "Hide_Rail", 0,
        "hide_bullbar", 0,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 0,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_O_Pickup_HMG: TACU_Taliban_Veterans_V_I_Pickup_HMG {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
class TACU_Taliban_Veterans_V_O_Pickup_HMG_UP: TACU_Taliban_Veterans_V_I_Pickup_HMG_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// MMG RAM 1500
class TACU_Taliban_Veterans_V_I_Pickup_MMG: TACU_Ram1500_MMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {
        "Guerilla_01", 0.2,
        "Guerilla_02", 0.2,
        "Guerilla_03", 0.2,
        "Guerilla_05", 0.2,
        "Guerilla_09", 0.2
    };
    animationList[] = {
        "hide_trunk_cover", 1,
        "hide_frame_full", 0,
        "hide_bullbar", 0,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_I_Pickup_MMG_UP: TACU_Taliban_Veterans_V_I_Pickup_MMG {
    displayName = "RAM 1500 (MMG, UP)";
    animationList[] = {
        "hide_trunk_cover", 1,
        "hide_frame_full", 0,
        "hide_bullbar", 0,
        "hide_snorkel", 0,
        "hide_antenna", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 0,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
};
class TACU_Taliban_Veterans_V_O_Pickup_MMG: TACU_Taliban_Veterans_V_I_Pickup_MMG {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
class TACU_Taliban_Veterans_V_O_Pickup_MMG_UP: TACU_Taliban_Veterans_V_I_Pickup_MMG_UP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// BRDM-2
class TACU_Taliban_Veterans_V_I_BRDM2: TACU_BRDM2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"RU", 1};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_BRDM2);
};
class TACU_Taliban_Veterans_V_O_BRDM2: TACU_Taliban_Veterans_V_I_BRDM2 {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// Hilux
class TACU_Taliban_Veterans_V_I_Hilux: TACU_Hilux_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Hilux);
};
class TACU_Taliban_Veterans_V_O_Hilux: TACU_Taliban_Veterans_V_I_Hilux {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Hilux_Armored: TACU_Hilux_Armored_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Hilux_Armored);
};
class TACU_Taliban_Veterans_V_O_Hilux_Armored: TACU_Taliban_Veterans_V_I_Hilux_Armored {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Hilux_BMP: TACU_Hilux_BMP1_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Hilux_BMP);
};
class TACU_Taliban_Veterans_V_O_Hilux_BMP: TACU_Taliban_Veterans_V_I_Hilux_BMP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

class TACU_Taliban_Veterans_V_I_Hilux_BMP_Armored: TACU_Hilux_BMP1_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_Hilux_BMP_Armored);
};
class TACU_Taliban_Veterans_V_O_Hilux_BMP_Armored: TACU_Taliban_Veterans_V_I_Hilux_BMP {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};

// T72
class TACU_Taliban_Veterans_V_I_T72: TACU_T72_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Taliban_Veterans_I";
    side = 2;
    crew = "TACU_Taliban_Veterans_U_I_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_I_Driver"};
    textureList[] = {"RU", 1};
    //EDITORPREVIEW(TACU_Taliban_Veterans_V_I_T72);
};
class TACU_Taliban_Veterans_V_O_T72: TACU_Taliban_Veterans_V_I_T72 {
    faction = "TACU_Taliban_Veterans_O";
    side = 0;
    crew = "TACU_Taliban_Veterans_U_O_Driver";
    typicalCargo[] = {"TACU_Taliban_Veterans_U_O_Driver"};
};
