// Arid Vehicles
class TACU_BAF_V_B_Arid_Assault_Boat: TACU_Assault_Boat_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Scout"};
    textureList[] = {"Black", 1};
};

class TACU_BAF_V_B_Arid_Speedboat_Minigun: TACU_Speedboat_Minigun_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Scout"};
    textureList[] = {"Blufor", 1};
};

class TACU_BAF_V_B_Arid_Polaris_Unarmed: TACU_Polaris_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR (Arid)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Scout"};
    textureList[] = {"Arid", 1};
};

class TACU_BAF_V_B_Arid_Polaris_Armed: TACU_Polaris_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR HMG (Arid)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Scout"};
    textureList[] = {"Arid", 1};
};

class TACU_BAF_V_B_Arid_Polaris_AT: TACU_Polaris_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR AT (Arid)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Scout"};
    textureList[] = {"Arid", 1};
};

class TACU_BAF_V_B_Arid_AW101: TACU_Merlin_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "AW101 Merlin (Arid)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Pilot";
    typicalCargo[] = {"TACU_BAF_U_B_Pilot"};
    textureList[] = {"Arid", 1};
};

class TACU_BAF_V_B_Arid_FV510_Warrior: TACU_FV510_Warrior_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "FV510 Warrior (Arid)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Arid_Demolitions";
    typicalCargo[] = {"TACU_BAF_U_B_Arid_Demolitions"};
    textureList[] = {"Arid", 1};
};

class TACU_BAF_V_Arid_FV510_Warrior_SLAT: TACU_BAF_V_B_Arid_FV510_Warrior {
    displayName = "FV510 Warrior SLAT (Arid)";
    animationList[] = {
        "showBags2", 1,
        "showSLATHull", 1,
        "showSLATTurret", 1
    };
};

// Tropic Vehicles
class TACU_BAF_V_B_Tropic_Assault_Boat: TACU_Assault_Boat_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Scout"};
    textureList[] = {"Black", 1};
};

class TACU_BAF_V_B_Tropic_Speedboat_Minigun: TACU_Speedboat_Minigun_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Scout"};
    textureList[] = {"Blufor", 1};
};

class TACU_BAF_V_B_Tropic_Polaris_Unarmed: TACU_Polaris_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR (Tropic)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Scout"};
    textureList[] = {"Tropic", 1};
};

class TACU_BAF_V_B_Tropic_Polaris_Armed: TACU_Polaris_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR HMG (Tropic)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Scout"};
    textureList[] = {"Tropic", 1};
};

class TACU_BAF_V_B_Tropic_Polaris_AT: TACU_Polaris_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR AT (Tropic)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Scout"};
    textureList[] = {"Tropic", 1};
};

class TACU_BAF_V_B_Tropic_AW101: TACU_Merlin_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "AW101 Merlin (Tropic)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Pilot";
    typicalCargo[] = {"TACU_BAF_U_B_Pilot"};
    textureList[] = {"Tropic", 1};
};

class TACU_BAF_V_B_Tropic_FV510_Warrior: TACU_FV510_Warrior_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "FV510 Warrior (Tropic)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Tropic_Demolitions";
    typicalCargo[] = {"TACU_BAF_U_B_Tropic_Demolitions"};
    textureList[] = {"Tropic", 1};
};

class TACU_BAF_V_Tropic_FV510_Warrior_SLAT: TACU_BAF_V_B_Tropic_FV510_Warrior {
    displayName = "FV510 Warrior SLAT (Tropic)";
    animationList[] = {
        "showBags2", 1,
        "showSLATHull", 1,
        "showSLATTurret", 1
    };
};

// Urban Vehicles
class TACU_BAF_V_B_Urban_Assault_Boat: TACU_Assault_Boat_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Urban_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Urban_Scout"};
    textureList[] = {"Black", 1};
};

class TACU_BAF_V_B_Urban_Speedboat_Minigun: TACU_Speedboat_Minigun_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Urban_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Urban_Scout"};
    textureList[] = {"Blufor", 1};
};

class TACU_BAF_V_B_Urban_Polaris_Unarmed: TACU_Polaris_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR (Urban)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Urban_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Urban_Scout"};
    textureList[] = {"Urban", 1};
};

class TACU_BAF_V_B_Urban_Polaris_Armed: TACU_Polaris_Armed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR HMG (Urban)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Urban_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Urban_Scout"};
    textureList[] = {"Urban", 1};
};

class TACU_BAF_V_B_Urban_Polaris_AT: TACU_Polaris_Armed_AT_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    displayName = "Polaris DAGOR AT (Urban)";
    faction = "TACU_BAF_B";
    side = 1;
    crew = "TACU_BAF_U_B_Urban_Scout";
    typicalCargo[] = {"TACU_BAF_U_B_Urban_Scout"};
    textureList[] = {"Urban", 1};
};
