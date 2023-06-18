// Helicopters
class TACU_SevenRings_V_I_AH6_Little_Bird: B_Heli_Light_01_dynamicLoadout_F {
    MACRO_WESTERN_VEHICLE
    displayName = "AH-6 Little Bird (Black)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    hiddenSelectionsTextures[] = {
        "A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa",
        "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
    };
    //EDITORPREVIEW(SevenRings_V_I_AH6_Little_Bird)
};

class TACU_SevenRings_V_I_CH47_Chinook_Unarmed: B_Heli_Transport_03_unarmed_F {
    MACRO_WESTERN_VEHICLE
    displayName = "CH-47 Chinook (Unarmed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_03"
    };
    //EDITORPREVIEW(SevenRings_V_I_CH47_Chinook_Unarmed)
};

class TACU_SevenRings_V_I_CH47_Chinook_Armed: B_Heli_Transport_03_F {
    MACRO_WESTERN_VEHICLE
    displayName = "CH-47 Chinook (Armed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_CH47_Chinook_Armed)
};

class TACU_SevenRings_V_I_UH80_Ghost_Hawk: B_Heli_Transport_01_F {
    MACRO_WESTERN_VEHICLE
    displayName = "UH-80 Ghost Hawk (Armed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_01"
    };
    //EDITORPREVIEW(SevenRings_V_I_UH80_Ghost_Hawk)
};
// Boats
class TACU_SevenRings_V_I_Assault_Boat: B_Boat_Transport_01_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Assault Boat";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_Assault_Boat)
};
// Cars
class TACU_SevenRings_V_I_Offroad_Covered: C_Offroad_01_covered_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Offroad (Covered)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_Offroad_Covered)
};

class TACU_SevenRings_V_I_MATV: B_MRAP_01_F {
    MACRO_WESTERN_VEHICLE
    displayName = "M-ATV";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_MATV)
};

class TACU_SevenRings_V_I_MATV_HMG: B_MRAP_01_hmg_F {
    MACRO_WESTERN_VEHICLE
    displayName = "M-ATV (HMG)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_MATV_HMG)
};

class TACU_SevenRings_V_I_Fennek: I_MRAP_03_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Fennek";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
        "\a3\data_f\vehicles\turret_co.paa"
    };
    //EDITORPREVIEW(SevenRings_V_I_Fennek)
};

class TACU_SevenRings_V_I_Fennek_HMG: I_MRAP_03_hmg_F {
    MACRO_WESTERN_VEHICLE
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
    //EDITORPREVIEW(SevenRings_V_I_Fennek_HMG)
};

class TACU_SevenRings_V_I_Polaris_Dagor: B_LSV_01_unarmed_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Polaris DAGOR";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_Polaris_Dagor)
};

class TACU_SevenRings_V_I_Polaris_Dagor_XM312: B_LSV_01_armed_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Polaris DAGOR (XM312)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_Polaris_Dagor_XM312)
};

class TACU_SevenRings_V_I_HEMTT_Transport: B_Truck_01_transport_F {
    MACRO_WESTERN_VEHICLE
    displayName = "HEMTT Transport";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_HEMTT_Transport)
};

class TACU_SevenRings_V_I_HEMTT_Transport_Covered: B_Truck_01_covered_F {
    MACRO_WESTERN_VEHICLE
    displayName = "HEMTT Transport (Covered)";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Engineer_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_HEMTT_Transport_Covered)
};

// APCs
class TACU_SevenRings_V_I_PANDUR_II: I_APC_Wheeled_03_cannon_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Pandur II";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Engineer_02",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
    };
    //EDITORPREVIEW(SevenRings_V_I_PANDUR_II)
};

class TACU_SevenRings_V_I_Badger_IFV: B_APC_Wheeled_01_cannon_F {
    MACRO_WESTERN_VEHICLE
    displayName = "Badger IFV";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    //EDITORPREVIEW(SevenRings_V_I_Badger_IFV)
};
