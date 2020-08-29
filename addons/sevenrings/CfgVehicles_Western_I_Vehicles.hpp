// Helicopters
class TACU_Seven_Rings_V_I_AH6_Little_Bird: B_Heli_Light_01_dynamicLoadout_F {
    SR_WESTERN_I_V_MACRO
    displayName = "AH-6 Little Bird (Black)";
    crew = "TACU_Seven_Rings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Pilot_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_02"
    };
    hiddenSelectionsTextures[] = {
        "A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_ION_CO.paa",
        "a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_AH6_Little_Bird.jpg);
};

class TACU_Seven_Rings_V_I_CH47_Chinook_Unarmed: B_Heli_Transport_03_unarmed_F {
    SR_WESTERN_I_V_MACRO
    displayName = "CH-47 Chinook (Unarmed)";
    crew = "TACU_Seven_Rings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Pilot_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_03"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_CH47_Chinook_Unarmed.jpg);
};

class TACU_Seven_Rings_V_I_CH47_Chinook_Armed: B_Heli_Transport_03_F {
    SR_WESTERN_I_V_MACRO
    displayName = "CH-47 Chinook (Armed)";
    crew = "TACU_Seven_Rings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Pilot_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_02"
    };
    hiddenSelectionsTextures[] = {
        "\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
        "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_CH47_Chinook_Armed.jpg);
};

class TACU_Seven_Rings_V_I_UH80_Ghost_Hawk: B_Heli_Transport_01_F {
    SR_WESTERN_I_V_MACRO
    displayName = "UH-80 Ghost Hawk (Armed)";
    crew = "TACU_Seven_Rings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Pilot_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_01"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_UH80_Ghost_Hawk.jpg);
};
// Boats
class TACU_Seven_Rings_V_I_Assault_Boat: B_Boat_Transport_01_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Assault Boat";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Engineer_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Assault_Boat.jpg);
};
// Cars
class TACU_Seven_Rings_V_I_Offroad_Covered: C_Offroad_01_covered_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Offroad (Covered)";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Offroad_Covered.jpg);
};

class TACU_Seven_Rings_V_I_MATV: B_MRAP_01_F {
    SR_WESTERN_I_V_MACRO
    displayName = "M-ATV";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_MATV.jpg);
};

class TACU_Seven_Rings_V_I_MATV_HMG: B_MRAP_01_hmg_F {
    SR_WESTERN_I_V_MACRO
    displayName = "M-ATV (HMG)";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Engineer_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_MATV_HMG.jpg);
};

class TACU_Seven_Rings_V_I_Fennek: I_MRAP_03_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Fennek";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
        "\a3\data_f\vehicles\turret_co.paa"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Fennek.jpg);
};

class TACU_Seven_Rings_V_I_Fennek_HMG: I_MRAP_03_hmg_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Fennek (HMG)";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Engineer_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "\A3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
        "\a3\data_f\vehicles\turret_co.paa"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Fennek_HMG.jpg);
};

class TACU_Seven_Rings_V_I_Polaris_Dagor: B_LSV_01_unarmed_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Polaris DAGOR";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Engineer_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Polaris_Dagor.jpg);
};

class TACU_Seven_Rings_V_I_Polaris_Dagor_XM312: B_LSV_01_armed_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Polaris DAGOR (XM312)";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Polaris_Dagor_XM312.jpg);
};

class TACU_Seven_Rings_V_I_HEMTT_Transport: B_Truck_01_transport_F {
    SR_WESTERN_I_V_MACRO
    displayName = "HEMTT Transport";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_HEMTT_Transport.jpg);
};

class TACU_Seven_Rings_V_I_HEMTT_Transport_Covered: B_Truck_01_covered_F {
    SR_WESTERN_I_V_MACRO
    displayName = "HEMTT Transport (Covered)";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_02";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Engineer_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_HEMTT_Transport_Covered.jpg);
};

// APCs
class TACU_Seven_Rings_V_I_PANDUR_II: I_APC_Wheeled_03_cannon_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Pandur II";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_01";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Engineer_02",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    hiddenSelectionsTextures[] = {
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa",
        "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_PANDUR_II.jpg);
};

class TACU_Seven_Rings_V_I_Badger_IFV: B_APC_Wheeled_01_cannon_F {
    SR_WESTERN_I_V_MACRO
    displayName = "Badger IFV";
    crew = "TACU_Seven_Rings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_Seven_Rings_U_I_Western_Rifleman_01",
        "TACU_Seven_Rings_U_I_Western_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\Seven_Rings_V_I_Badger_IFV.jpg);
};
