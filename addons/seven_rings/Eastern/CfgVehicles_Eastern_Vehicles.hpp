#define MACRO_SEVEN_RINGS_EASTERN_VEHICLE \
    faction = "TACU_Seven_Rings_Eastern"; \
    side = 0; \
    crew = "TACU_Seven_Rings_Eastern_U_O_Driver"; \
    typicalCargo[] = {"TACU_Seven_Rings_Eastern_U_O_Driver"}

class TACU_Seven_Rings_Eastern_V_O_LSVMKII: TACU_LSV_MKII_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_LSVMKII);
};
class TACU_Seven_Rings_Eastern_V_O_LSVMKII_Armed: TACU_LSV_MKII_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_LSVMKII_Armed);
};
class TACU_Seven_Rings_Eastern_V_O_LSVMKII_AT: TACU_LSV_MKII_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_LSVMKII_AT);
};

class TACU_Seven_Rings_Eastern_V_O_Karatel: TACU_Karatel_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Karatel);
};
class TACU_Seven_Rings_Eastern_V_O_Karatel_HMG: TACU_Karatel_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Karatel_HMG);
};
class TACU_Seven_Rings_Eastern_V_O_Karatel_GMG: TACU_Karatel_GMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Karatel_GMG);
};

class TACU_Seven_Rings_Eastern_V_O_Kamaz: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Kamaz);
};
class TACU_Seven_Rings_Eastern_V_O_Kamaz_Covered: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Kamaz_Covered);
};
class TACU_Seven_Rings_Eastern_V_O_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Kamaz_ZU23);
};

// Offroads
class TACU_Seven_Rings_Eastern_V_O_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad);
};
class TACU_Seven_Rings_Eastern_V_O_Offroad_Armed: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad_Armed);
};
class TACU_Seven_Rings_Eastern_V_O_Offroad_AT: TACU_Offroad_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBackpacks", 1,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0
    };
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad_AT);
};
class TACU_Seven_Rings_Eastern_V_O_Offroad_UP: TACU_Offroad_Unarmed_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad_UP);
};
class TACU_Seven_Rings_Eastern_V_O_Offroad_UP_Armed: TACU_Offroad_Armed_M2_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad_UP_Armed);
};
class TACU_Seven_Rings_Eastern_V_O_Offroad_UP_AT: TACU_Offroad_Armed_AT_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Guerilla_12", 1};
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
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Offroad_UP_AT);
};

// APCs
class TACU_Seven_Rings_Eastern_V_O_Otokar: TACU_Otokar_ARMA_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Otokar);
};
class TACU_Seven_Rings_Eastern_V_O_Otokar_HMG: TACU_Otokar_ARMA_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Otokar_HMG);
};
class TACU_Seven_Rings_Eastern_V_O_Otokar_M2: TACU_Otokar_ARMA_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_SEVEN_RINGS_EASTERN_VEHICLE;
    textureList[] = {"Seven_Rings_East", 1};
    EDITORPREVIEW(TACU_Seven_Rings_Eastern_V_O_Otokar_M2);
};
