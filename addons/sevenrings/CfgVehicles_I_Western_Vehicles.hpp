// Helicopters
class TACU_SevenRings_V_I_AH6_Little_Bird: TACU_AH6_LittleBird_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "AH-6 Little Bird";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    hiddenSelectionsTextures[] = {
        "A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa",
        "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_CH47_Chinook_Unarmed: TACU_Chinook_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "CH-47 Chinook (Unarmed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_03"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_CH47_Chinook_Armed: TACU_Chinook_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "CH-47 Chinook (Armed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_UH80_Ghost_Hawk: TACU_GhostHawk_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "UH-80 Ghost Hawk (Armed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_01"
    };
    textureList[] = {"Black", 1};
};
// Boats
class TACU_SevenRings_V_I_Assault_Boat: B_Boat_Transport_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Assault Boat";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
};
// Cars
class TACU_SevenRings_V_I_Offroad_Covered: TACU_Offroad_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Offroad (Covered)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_MATV: TACU_MATV_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "M-ATV";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_MATV_HMG: TACU_MATV_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "M-ATV (HMG)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_Fennek: TACU_Fennek_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Fennek";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_Fennek_HMG: TACU_Fennek_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Fennek (HMG)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
        "\a3\data_f\vehicles\turret_co.paa"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_Polaris_Dagor: TACU_Polaris_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Polaris DAGOR";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_Polaris_Dagor_XM312: TACU_Polaris_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Polaris DAGOR (XM312)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Black", 1};
};

class TACU_SevenRings_V_I_HEMTT_Transport: TACU_HEMTT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "HEMTT Transport";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_HEMTT_Transport_Covered: TACU_HEMTT_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "HEMTT Transport (Covered)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    textureList[] = {"Blufor", 1};
};

// APCs
class TACU_SevenRings_V_I_PANDUR_II: TACU_Pandur_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Pandur II";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_02",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Blufor", 1};
};

class TACU_SevenRings_V_I_Badger_IFV: TACU_Badger_IFV_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_WESTERN_VEHICLE;
    displayName = "Badger IFV";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Blufor", 1};
};
