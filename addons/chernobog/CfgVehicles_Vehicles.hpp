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
class TACU_Chernobog_Sons_M113A1: TACU_M113A1_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_APC";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_M113A1);
};
class TACU_Chernobog_Sons_V_I_BRDM2: TACU_BRDM2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_APC";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_BRDM2);
};
class TACU_Chernobog_Sons_V_I_BTR60: TACU_BTR60_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_APC";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_BTR60);
};
class TACU_Chernobog_Sons_V_I_MTLB: TACU_MTLB_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_APC";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_MTLB);
};

// Tanks
class TACU_Chernobog_Sons_V_I_T55: TACU_T55_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_Tanks";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_T55);
};
class TACU_Chernobog_Sons_V_I_Leopard1: TACU_Leopard_1_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Sons_Tanks";
    side = 2;
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_Leopard1);
};

class TACU_Chernobog_Children_V_I_UAZ: TACU_UAZ_Open_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_UAZ);
};
class TACU_Chernobog_Children_V_I_UAZ_DSHKM: TACU_UAZ_DSHKM_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_UAZ_DSHKM);
};
class TACU_Chernobog_Children_V_I_Skoda: TACU_S1203_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_Skoda);
};
class TACU_Chernobog_Children_V_I_Ural: TACU_Ural_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_Ural);
};
class TACU_Chernobog_Chosen_V_I_UAZ: TACU_Chernobog_Children_V_I_UAZ {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Chosen_V_I_UAZ_DSHKM: TACU_Chernobog_Children_V_I_UAZ_DSHKM {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Chosen_V_I_Skoda: TACU_Chernobog_Children_V_I_Skoda {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Chosen_V_I_Ural: TACU_Chernobog_Children_V_I_Ural {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};

class TACU_Chernobog_Sons_V_I_UAZ: TACU_Chernobog_Children_V_I_UAZ {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_UAZ_DSHKM: TACU_Chernobog_Children_V_I_UAZ_DSHKM {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Skoda: TACU_Chernobog_Children_V_I_Skoda {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Ural: TACU_Chernobog_Children_V_I_Ural {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};

class TACU_Chernobog_Children_V_I_Hilux: TACU_Hilux_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_Hilux);
};
class TACU_Chernobog_Children_V_I_Hilux_Armored: TACU_Hilux_Armored_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Chernobog";
    editorSubcategory = "TACU_Chernobog_Children_Cars";
    side = 2;
    crew = "TACU_Chernobog_Children_U_I_Rifleman_01";
    typicalCargo[] = {"TACU_Chernobog_Children_U_I_Rifleman_01"};
    //EDITORPREVIEW(TACU_Chernobog_Children_V_I_Hilux_Armored);
};

class TACU_Chernobog_Chosen_V_I_Hilux: TACU_Chernobog_Children_V_I_Hilux {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Chosen_V_I_Hilux_Armored: TACU_Chernobog_Children_V_I_Hilux_Armored {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
};
class TACU_Chernobog_Chosen_V_I_Hilux_BMP1: TACU_Hilux_BMP1_Base {
    editorSubcategory = "TACU_Chernobog_Chosen_Cars";
    crew = "TACU_Chernobog_Chosen_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Chosen_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Chosen_V_I_Hilux_BMP1);
};

class TACU_Chernobog_Sons_V_I_Hilux: TACU_Chernobog_Children_V_I_Hilux {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Hilux_Armored: TACU_Chernobog_Children_V_I_Hilux_Armored {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Hilux_BMP1: TACU_Chernobog_Chosen_V_I_Hilux_BMP1 {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
};
class TACU_Chernobog_Sons_V_I_Hilux_BMP1_Armored: TACU_Hilux_Armored_BMP1_Base {
    editorSubcategory = "TACU_Chernobog_Sons_Cars";
    crew = "TACU_Chernobog_Sons_U_I_Rifleman";
    typicalCargo[] = {"TACU_Chernobog_Sons_U_I_Rifleman"};
    //EDITORPREVIEW(TACU_Chernobog_Sons_V_I_Hilux_BMP1_Armored);
};
