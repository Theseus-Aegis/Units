#define MACRO_SEVEN_RINGS_WESTERN_VEHICLE \
    faction = "TACU_Seven_Rings_Western"; \
    side = 2; \
    crew = "TACU_Seven_Rings_Western_U_I_Driver"; \
    typicalCargo[] = {"TACU_Seven_Rings_Western_U_I_Driver"}

#define MACRO_SEVEN_RINGS_WESTERN_AIRVEHICLE \
    faction = "TACU_Seven_Rings_Western"; \
    side = 2; \
    crew = "TACU_Seven_Rings_Western_U_I_Pilot"; \
    typicalCargo[] = {"TACU_Seven_Rings_Western_U_I_Pilot"}

class TACU_Seven_Rings_Western_V_I_Fennek: TACU_Fennek_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Fennek);
};
class TACU_Seven_Rings_Western_V_I_Fennek_HMG: TACU_Fennek_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Fennek_HMG);
};
class TACU_Seven_Rings_Western_V_I_Fennek_GMG: TACU_Fennek_GMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Fennek_GMG);
};

class TACU_Seven_Rings_Western_V_I_Pandur: TACU_Pandur_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Guerilla_03", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Pandur);
};

class TACU_Seven_Rings_Western_V_I_Kamaz: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Kamaz);
};
class TACU_Seven_Rings_Western_V_I_Kamaz_Covered: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Kamaz_Covered);
};
class TACU_Seven_Rings_Western_V_I_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    animationList[] = {
        "shield_hide", 0,
        "hideCrates", 0,
        "hideSpareWheel", 0,
        "hideRoofRack", 1,
        "hideBeacon_1", 0,
        "hideBumper", 0,
        "hideWindowProtector", 0
    };
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Kamaz_ZU23);
};

class TACU_Seven_Rings_Western_V_I_Truck: TACU_Truck_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
    textureList[] = {"Olive", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Truck);
};

class TACU_Seven_Rings_Western_V_I_Jeep: TACU_Jeep_Wrangler_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
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
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Jeep);
};
class TACU_Seven_Rings_Western_V_I_Jeep_Armed: TACU_Jeep_Wrangler_LMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
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
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Jeep_Armed);
};
class TACU_Seven_Rings_Western_V_I_Jeep_AT: TACU_Jeep_Wrangler_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_VEHICLE;
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
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Jeep_AT);
};

// Helicopters
class TACU_Seven_Rings_Western_V_I_Little_Bird: TACU_AH6_LittleBird_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_AIRVEHICLE;
    textureList[] = {"Blufor", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Little_Bird);
};

class TACU_Seven_Rings_Western_V_I_Wildcat: TACU_Wildcat_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_AIRVEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Wildcat);
};
class TACU_Seven_Rings_Western_V_I_Wildcat_Unarmed: TACU_Wildcat_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_WESTERN_AIRVEHICLE;
    textureList[] = {"Seven_Rings_West", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Western_V_I_Wildcat_Unarmed);
};
