// Offroad
class TACU_Chernobog_Children_V_I_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    textureList[] = {
        "Guerilla_01", 0.14,
        "Guerilla_04", 0.14,
        "Guerilla_05", 0.14,
        "Guerilla_07", 0.14,
        "Guerilla_08", 0.14,
        "Guerilla_09", 0.14,
        "Guerilla_12", 0.14
    };
    EDITORPREVIEW(TACU_Chernobog_Children_V_I_Offroad);
};

class TACU_Chernobog_Chosen_V_I_Offroad: TACU_Chernobog_Children_V_I_Offroad {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Offroad: TACU_Chernobog_Children_V_I_Offroad {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};

// HMG Offroad
class TACU_Chernobog_Children_V_I_Offroad_HMG: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
    textureList[] = {
        "Guerilla_01", 0.14,
        "Guerilla_04", 0.14,
        "Guerilla_05", 0.14,
        "Guerilla_07", 0.14,
        "Guerilla_08", 0.14,
        "Guerilla_09", 0.14,
        "Guerilla_12", 0.14
    };
    EDITORPREVIEW(TACU_Chernobog_Children_V_I_Offroad_HMG);
};
class TACU_Chernobog_Chosen_V_I_Offroad_HMG: TACU_Chernobog_Children_V_I_Offroad_HMG {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Offroad_HMG: TACU_Chernobog_Children_V_I_Offroad_HMG {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};

// UP Armoured Offroad
class TACU_Chernobog_Chosen_V_I_Offroad_UP: TACU_Offroad_Unarmed_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    side = 2;
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
    textureList[] = {
        "Guerilla_01", 0.14,
        "Guerilla_04", 0.14,
        "Guerilla_05", 0.14,
        "Guerilla_07", 0.14,
        "Guerilla_08", 0.14,
        "Guerilla_09", 0.14,
        "Guerilla_12", 0.14
    };
    EDITORPREVIEW(TACU_Chernobog_Chosen_V_I_Offroad_UP);
};
class TACU_Chernobog_Sons_V_I_Offroad_UP: TACU_Chernobog_Chosen_V_I_Offroad_UP {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};

// UP Armoured Offroad HMG
class TACU_Chernobog_Chosen_V_I_Offroad_HMG_UP: TACU_Offroad_Armed_M2_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    side = 2;
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
    textureList[] = {
        "Guerilla_01", 0.14,
        "Guerilla_04", 0.14,
        "Guerilla_05", 0.14,
        "Guerilla_07", 0.14,
        "Guerilla_08", 0.14,
        "Guerilla_09", 0.14,
        "Guerilla_12", 0.14
    };
    EDITORPREVIEW(TACU_Chernobog_Chosen_V_I_Offroad_HMG_UP);
};

class TACU_Chernobog_Sons_V_I_Offroad_HMG_UP: TACU_Chernobog_Chosen_V_I_Offroad_HMG_UP {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};

// APCs
class TACU_Chernobog_Sons_V_I_Marid_HMG: TACU_Otokar_ARMA_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_APC";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    textureList[] = {"Black", 1};
    EDITORPREVIEW(TACU_Chernobog_Sons_V_I_Marid_HMG);
};
