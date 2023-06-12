class TACU_SevenRings_V_I_Kamaz: O_SFIA_Truck_02_transport_lxWS {
    MACRO_EASTERN_VEHICLE
    displayName = "Kamaz Transport";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Engineer_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Kamaz.jpg);
};

class TACU_SevenRings_V_I_Kamaz_Covered: O_SFIA_Truck_02_covered_lxWS {
    MACRO_EASTERN_VEHICLE
    displayName = "Kamaz Transport (Covered)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Kamaz_Covered.jpg);
};

class TACU_SevenRings_V_I_Kamaz_ZU23: O_SFIA_Truck_02_aa_lxWS {
    MACRO_EASTERN_VEHICLE
    displayName = "Kamaz (ZU-23)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Ural_ZU23.jpg);
};

class TACU_SevenRings_V_I_Offroad: I_G_Offroad_01_F {
    MACRO_EASTERN_VEHICLE
    displayName = "Offroad";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Hilux.jpg);
};

class TACU_SevenRings_V_I_Offroad_Armored: I_G_Offroad_01_armor_base_lxWS {
    MACRO_EASTERN_VEHICLE
    displayName = "Offroad Armored";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Engineer_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Hilux_Armored.jpg);
};

class TACU_SevenRings_V_I_Offroad_M2: I_G_Offroad_01_armed_F {
    MACRO_EASTERN_VEHICLE
    displayName = "Offroad (M2)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Engineer_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Hilux_M2.jpg);
};

class TACU_SevenRings_V_I_Offroad_Armored_M2: I_G_Offroad_01_armor_armed_lxWS {
    MACRO_EASTERN_VEHICLE
    displayName = "Offroad Armored (M2)";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Eastern_Rifleman_01",
        "TACU_SevenRings_U_I_Eastern_Rifleman_02"
    };
    editorPreview = QPATHTOF(ui\SevenRings_V_I_Hilux_Armored_M2.jpg);
};

// Turrets
class TACU_SevenRings_V_I_AGS30: TACU_CUP_Turrets_AGS_O {
    MACRO_EASTERN_VEHICLE
    displayName = "AGS-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_01"};
    editorPreview = QPATHTOF(ui\SevenRings_V_I_AGS30.jpg);
};

class TACU_SevenRings_V_I_D30: TACU_CUP_Turrets_D30_O {
    MACRO_EASTERN_VEHICLE
    displayName = "D-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
    editorPreview = QPATHTOF(ui\SevenRings_V_I_D30.jpg);
};

class TACU_SevenRings_V_I_ZU23: TACU_CUP_Turrets_ZU23_O {
    MACRO_EASTERN_VEHICLE
    displayName = "ZU-23";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_03"};
    editorPreview = QPATHTOF(ui\SevenRings_V_I_ZU23.jpg);
};

class TACU_SevenRings_V_I_DSHKM: TACU_CUP_Turrets_DSHKM_O {
    MACRO_EASTERN_VEHICLE
    displayName = "DShKM";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
    editorPreview = QPATHTOF(ui\SevenRings_V_I_DSHKM.jpg);
};
