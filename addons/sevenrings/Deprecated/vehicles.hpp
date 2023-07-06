// Independent, Eastern vehicles.
class TACU_SevenRings_V_I_Kamaz: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
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
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
    displayName = "AGS-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_01";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_01"};
};

class TACU_SevenRings_V_I_D30: TACU_Assets_D30_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
    displayName = "D-30";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
};

class TACU_SevenRings_V_I_ZU23: TACU_Assets_ZU23_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
    displayName = "ZU-23";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_03";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_03"};
};

class TACU_SevenRings_V_I_DSHKM: TACU_Assets_DSHKM_base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Eastern";
    side = 2;
    scope = 1;
    displayName = "DShKM";
    crew = "TACU_SevenRings_U_I_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_I_Eastern_Rifleman_02"};
};

// Opfor, Eastern Vehicles
class TACU_SevenRings_V_O_Kamaz: TACU_SevenRings_V_I_Kamaz {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Engineer_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Kamaz_Covered: TACU_SevenRings_V_I_Kamaz_Covered {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Rifleman_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Kamaz_ZU23: TACU_SevenRings_V_I_Kamaz_ZU23 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Rifleman_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Offroad: TACU_SevenRings_V_I_Offroad {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Rifleman_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Offroad_Armored: TACU_SevenRings_V_I_Offroad_Armored {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Rifleman_01",
        "TACU_SevenRings_U_O_Eastern_Engineer_02"
    };
};

class TACU_SevenRings_V_O_Offroad_M2: TACU_SevenRings_V_I_Offroad_M2 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Engineer_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Offroad_Armored_M2: TACU_SevenRings_V_I_Offroad_Armored_M2 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Rifleman_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Marid_M2: TACU_SevenRings_V_I_Marid_M2 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Eastern_Engineer_01",
        "TACU_SevenRings_U_O_Eastern_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_AGS30: TACU_SevenRings_V_I_AGS30 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_01";
    typicalCargo[] = {"TACU_SevenRings_U_O_Eastern_Rifleman_01"};
};

class TACU_SevenRings_V_O_D30: TACU_SevenRings_V_I_D30 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_O_Eastern_Rifleman_02"};
};

class TACU_SevenRings_V_O_ZU23: TACU_SevenRings_V_I_ZU23 {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_03";
    typicalCargo[] = {"TACU_SevenRings_U_O_Eastern_Rifleman_03"};
};

class TACU_SevenRings_V_O_DSHKM: TACU_SevenRings_V_I_DSHKM {
    MACRO_OPFOR_EAST_SIDE;
    crew = "TACU_SevenRings_U_O_Eastern_Rifleman_02";
    typicalCargo[] = {"TACU_SevenRings_U_O_Eastern_Rifleman_02"};
};

// Independent, Western vehicles
// Helicopters
class TACU_SevenRings_V_I_AH6_Little_Bird: TACU_AH6_LittleBird_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
    displayName = "UH-80 Ghost Hawk (Armed)";
    crew = "TACU_SevenRings_U_I_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Pilot_01",
        "TACU_SevenRings_U_I_Western_Engineer_01"
    };
    textureList[] = {"Black", 1};
};
// Boats
class B_Boat_Transport_01_F;
class TACU_SevenRings_V_I_Assault_Boat: B_Boat_Transport_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
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
    faction = "TACU_SevenRings_I_Western";
    side = 2;
    displayName = "Badger IFV";
    crew = "TACU_SevenRings_U_I_Western_Rifleman_03";
        typicalCargo[] = {
        "TACU_SevenRings_U_I_Western_Rifleman_01",
        "TACU_SevenRings_U_I_Western_Rifleman_02"
    };
    textureList[] = {"Blufor", 1};
};

// Opfor, Western vehicles
class TACU_SevenRings_V_O_AH6_Little_Bird: TACU_SevenRings_V_I_AH6_Little_Bird {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Pilot_01",
        "TACU_SevenRings_U_O_Western_Engineer_02"
    };
};

class TACU_SevenRings_V_O_CH47_Chinook_Unarmed: TACU_SevenRings_V_I_CH47_Chinook_Unarmed {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Pilot_01",
        "TACU_SevenRings_U_O_Western_Engineer_03"
    };
};

class TACU_SevenRings_V_O_CH47_Chinook_Armed: TACU_SevenRings_V_I_CH47_Chinook_Armed {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Pilot_01",
        "TACU_SevenRings_U_O_Western_Engineer_02"
    };
};

class TACU_SevenRings_V_O_UH80_Ghost_Hawk: TACU_SevenRings_V_I_UH80_Ghost_Hawk {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Pilot_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Pilot_01",
        "TACU_SevenRings_U_O_Western_Engineer_01"
    };
};

class TACU_SevenRings_V_O_Assault_Boat: TACU_SevenRings_V_I_Assault_Boat {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Engineer_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Offroad_Covered: TACU_SevenRings_V_I_Offroad_Covered {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_MATV: TACU_SevenRings_V_I_MATV {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Engineer_02"
    };
};

class TACU_SevenRings_V_O_MATV_HMG: TACU_SevenRings_V_I_MATV_HMG {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Engineer_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Fennek: TACU_SevenRings_V_I_Fennek {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Fennek_HMG: TACU_SevenRings_V_I_Fennek_HMG {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Engineer_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Polaris_Dagor: TACU_SevenRings_V_I_Polaris_Dagor {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Engineer_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Polaris_Dagor_XM312: TACU_SevenRings_V_I_Polaris_Dagor_XM312 {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_HEMTT_Transport: TACU_SevenRings_V_I_HEMTT_Transport {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Engineer_02"
    };
};

class TACU_SevenRings_V_O_HEMTT_Transport_Covered: TACU_SevenRings_V_I_HEMTT_Transport_Covered {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_02";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Engineer_02"
    };
};

class TACU_SevenRings_V_O_PANDUR_II: TACU_SevenRings_V_I_PANDUR_II {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_01";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Engineer_02",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};

class TACU_SevenRings_V_O_Badger_IFV: TACU_SevenRings_V_I_Badger_IFV {
    MACRO_OPFOR_WEST_SIDE;
    crew = "TACU_SevenRings_U_O_Western_Rifleman_03";
    typicalCargo[] = {
        "TACU_SevenRings_U_O_Western_Rifleman_01",
        "TACU_SevenRings_U_O_Western_Rifleman_02"
    };
};
