// APCs
class TACU_African_North_V_B_Namer_Sand: TACU_Namer_Base {
    displayName = "Namer (Yellow)";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Crewman";
    typicalCargo[] = {"TACU_African_North_U_B_Crewman"};
    textureList[] = {"North_African_Yellow", 1};
};

class TACU_African_North_V_B_Namer_Green: TACU_African_North_V_B_Namer_Sand {
    displayName = "Namer (Green)";
    textureList[] = {"Olive", 1};
};

class TACU_African_North_V_B_Otokar_Unarmed: O_SFIA_APC_Wheeled_02_unarmed_lxWS {
    displayName = "Otokar ARMA (Unarmed)";
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Crewman";
    typicalCargo[] = {"TACU_African_North_U_B_Crewman"};
};

class TACU_African_North_V_B_Otokar_Armed: O_SFIA_APC_Wheeled_02_hmg_lxWS {
    displayName = "Otokar ARMA (M2)";
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Crewman";
    typicalCargo[] = {"TACU_African_North_U_B_Crewman"};
};

// Helicopters
class TACU_African_North_V_B_Kasatka_Unarmed: TACU_Kasatka_Unarmed_Base {
    displayName = "Ka-60 Kasatka Unarmed (Yellow)";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Pilot";
    typicalCargo[] = {"TACU_African_North_U_B_Pilot"};
    textureList[] = {"North_African_Yellow", 1};
};
class TACU_African_North_V_B_Kasatka_Unarmed_Green: TACU_African_North_V_B_Kasatka_Unarmed {
    displayName = "Ka-60 Kasatka Unarmed (Green)";
    textureList[] = {"North_African_Green", 1};
};

class TACU_African_North_V_B_Kasatka_Armed: TACU_Kasatka_Armed_Base {
    displayName = "Ka-60 Kasatka (Yellow)";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Pilot";
    typicalCargo[] = {"TACU_African_North_U_B_Pilot"};
    textureList[] = {"North_African_Yellow", 1};
};
class TACU_African_North_V_B_Kasatka_Armed_Green: TACU_African_North_V_B_Kasatka_Armed {
    displayName = "Ka-60 Kasatka (Green)";
    textureList[] = {"North_African_Green", 1};
};

class TACU_African_North_V_B_Kasatka_Unarmed_UP: TACU_Kasatka_Unarmed_Armoured_Base {
    displayName = "Ka-60 Kasatka Unarmed (UP, Yellow)";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Pilot";
    typicalCargo[] = {"TACU_African_North_U_B_Pilot"};
    textureList[] = {"North_African_Yellow", 1};
};
class TACU_African_North_V_B_Kasatka_Unarmed_UP_Green: TACU_African_North_V_B_Kasatka_Unarmed_UP {
    displayName = "Ka-60 Kasatka Unarmed (UP, Green)";
    textureList[] = {"North_African_Green", 1};
};

class TACU_African_North_V_B_Kasatka_Armed_UP: TACU_Kasatka_Armed_Armoured_Base {
    displayName = "Ka-60 Kasatka (UP, Yellow)";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Pilot";
    typicalCargo[] = {"TACU_African_North_U_B_Pilot"};
    textureList[] = {"North_African_Yellow", 1};
};
class TACU_African_North_V_B_Kasatka_Armed_UP_Green: TACU_African_North_V_B_Kasatka_Armed_UP {
    displayName = "Ka-60 Kasatka (UP, Green)";
    textureList[] = {"North_African_Green", 1};
};

// Zamaks
class TACU_African_North_V_B_Zamak_AA : O_SFIA_Truck_02_aa_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_MRL: O_SFIA_Truck_02_MRL_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Fuel: O_SFIA_Truck_02_fuel_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Transport: O_SFIA_Truck_02_transport_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Transport_Covered: O_SFIA_Truck_02_covered_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Ammo: O_SFIA_Truck_02_Ammo_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    displayName = "KamAZ Ammo";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Cargo: O_SFIA_Truck_02_cargo_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    displayName = "KamAZ Cargo";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Flatbed: O_SFIA_Truck_02_flatbed_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    displayName = "KamAZ Flatbed";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Zamak_Repair: O_SFIA_Truck_02_box_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    displayName = "KamAZ Repair";
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

// Offroads
class TACU_African_North_V_B_Offroad: O_SFIA_Offroad_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Offroad_AT: O_SFIA_Offroad_AT_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_Offroad_HMG: O_SFIA_Offroad_armed_lxWS {
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

// Turrets
class TACU_African_North_V_B_M2HMG_Low: O_SFIA_HMG_02_lxWS {
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_M2HMG: O_SFIA_HMG_02_high_lxWS {
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_MK6: O_SFIA_Mortar_lxWS {
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};

class TACU_African_North_V_B_ZU23: O_SFIA_ZU23_lxWS {
    faction = "TACU_African_North_B";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    crew = "TACU_African_North_U_B_Repair";
    typicalCargo[] = {"TACU_African_North_U_B_Repair"};
};
