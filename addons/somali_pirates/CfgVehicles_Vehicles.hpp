class B_Boat_Transport_01_F;
class C_Scooter_Transport_01_F;
class C_Boat_Transport_02_F;
class C_Boat_Civil_01_F;

class TACU_Somali_Pirates_V_I_Assault_Boat: B_Boat_Transport_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_Somali_I";
    side = 2;
    crew = "TACU_Somali_Pirates_U_I_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_I_Driver"};
};
class TACU_Somali_Pirates_V_O_Assault_Boat: TACU_Somali_Pirates_V_I_Assault_Boat {
    faction = "TACU_Somali_O";
    side = 0;
    crew = "TACU_Somali_Pirates_U_O_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_O_Driver"};
};

class TACU_Somali_Pirates_V_I_Water_Scooter: C_Scooter_Transport_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_Somali_I";
    side = 2;
    crew = "TACU_Somali_Pirates_U_I_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_I_Driver"};
};
class TACU_Somali_Pirates_V_O_Water_Scooter: TACU_Somali_Pirates_V_I_Water_Scooter {
    faction = "TACU_Somali_O";
    side = 0;
    crew = "TACU_Somali_Pirates_U_O_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_O_Driver"};
};

class TACU_Somali_Pirates_V_I_RHIB: C_Boat_Transport_02_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_Somali_I";
    side = 2;
    crew = "TACU_Somali_Pirates_U_I_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_I_Driver"};
};
class TACU_Somali_Pirates_V_O_RHIB: TACU_Somali_Pirates_V_I_RHIB {
    faction = "TACU_Somali_O";
    side = 0;
    crew = "TACU_Somali_Pirates_U_O_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_O_Driver"};
};

class TACU_Somali_Pirates_V_I_Motorboat: C_Boat_Civil_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_CLEAR_VEHICLE_CARGO;
    faction = "TACU_Somali_I";
    side = 2;
    crew = "TACU_Somali_Pirates_U_I_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_I_Driver"};
};
class TACU_Somali_Pirates_V_O_Motorboat: TACU_Somali_Pirates_V_I_Motorboat {
    faction = "TACU_Somali_O";
    side = 0;
    crew = "TACU_Somali_Pirates_U_O_Driver";
    typicalCargo[] = {"TACU_Somali_Pirates_U_O_Driver"};
};
