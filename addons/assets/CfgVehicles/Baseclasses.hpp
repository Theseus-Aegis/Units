// Helmet, Item & Vest Base
class Item_Base_F;
class Headgear_Base_F;
class Vest_Base_F;

// Uniform Base
class I_G_Soldier_LAT_F;

// Vehicles
class Car_F;
class Helicopter_Base_H;
class Heli_Light_01_armed_base_F;
class LSV_01_base_F;
class Offroad_01_base_F;
class Offroad_01_military_base_F;
class Offroad_01_base_lxWS;
class Offroad_01_armed_lxWS;
class Offroad_01_AT_lxWS;
class Wheeled_APC_F;
class Van_02_base_F;

// AH-6
class Heli_Light_01_dynamicLoadout_base_F: Heli_Light_01_armed_base_F {
    class EventHandlers;
};

// Fennek
class MRAP_03_base_F: Car_F {
    class EventHandlers;
};

// Ghost Hawk
class Heli_Transport_01_base_F: Helicopter_Base_H {
    class EventHandlers;
};

// Gorgon
class APC_Wheeled_03_base_F: Wheeled_APC_F {
    class EventHandlers;
};

// M-ATV
class MRAP_01_base_F: Car_F {
    class EventHandlers;
};

// Merlin (AW-101)
class Heli_Transport_02_base_F: Helicopter_Base_H {
    class EventHandlers;
};

// Offroad Base
class Offroad_01_unarmed_base_F: Offroad_01_base_F {
    class EventHandlers;
};

// Offroad Armed Base
class Offroad_01_armed_base_F: Offroad_01_military_base_F {
    class EventHandlers;
};

// Offroad AT
class Offroad_01_AT_base_F: Offroad_01_military_base_F {
    class EventHandlers;
};

// Offroad Unarmed (Armoured)
class Offroad_01_armor_base_lxWS: Offroad_01_base_lxWS {
    class EventHandlers;
};

// Offroad Armed (Armoured)
class Offroad_01_armor_armed_lxWS: Offroad_01_armed_lxWS {
    class EventHandlers;
};

// Offroad AT (Armoured)
class Offroad_01_armor_AT_lxWS: Offroad_01_AT_lxWS {
    class EventHandlers;
};

// Polaris Unarmed
class LSV_01_unarmed_base_F: LSV_01_base_F {
    class EventHandlers;
};

// Polaris Armed
class LSV_01_armed_base_F: LSV_01_base_F {
    class EventHandlers;
};

// Polaris Armed AT
class LSV_01_AT_base_F: LSV_01_base_F {
    class EventHandlers;
};

// Van (Cargo)
class Van_02_vehicle_base_F: Van_02_base_F {
    class EventHandlers;
};

// Van (Transport)
class Van_02_transport_base_F: Van_02_base_F {
    class EventHandlers;
};
