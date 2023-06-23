class TACU_SevenRings_V_I_Kamaz: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Kamaz Transport";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Engineer_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_Kamaz_Covered: TACU_Kamaz_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Kamaz Transport (Covered)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_Kamaz_ZU23: TACU_Kamaz_ZU23_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Kamaz (ZU-23)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Brown", 1};
};

class TACU_SevenRings_V_I_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Offroad";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Guerilla_12", 1};
};

class TACU_SevenRings_V_I_Offroad_Armored: TACU_Offroad_Unarmed_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Offroad Armored";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Engineer_02"
    };
    textureList[] = {"Guerilla_12", 1};
};

class TACU_SevenRings_V_I_Offroad_M2: TACU_Offroad_Armed_M2_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Offroad (M2)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Engineer_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Guerilla_12", 1};
};

class TACU_SevenRings_V_I_Offroad_Armored_M2: TACU_Offroad_Armed_M2_UP_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "Offroad Armored (M2)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Guerilla_12", 1};
};

class TACU_SevenRings_V_I_Marid_M2: TACU_Otokar_ARMA_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "MSE-3 Marid (HMG)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Engineer_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    textureList[] = {"Sand_Desert", 1};
};

// Turrets
class TACU_SevenRings_V_I_AGS30: TACU_Assets_AGS_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "AGS-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_01"};
};

class TACU_SevenRings_V_I_D30: TACU_Assets_D30_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "D-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
};

class TACU_SevenRings_V_I_ZU23: TACU_Assets_ZU23_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "ZU-23";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_03"};
};

class TACU_SevenRings_V_I_DSHKM: TACU_Assets_DSHKM_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_EASTERN_VEHICLE;
    displayName = "DShKM";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
};
