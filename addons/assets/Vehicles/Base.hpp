// Helmet, Item & Vest Base
class Headgear_Base_F;
class Item_Base_F;
class Vest_Base_F;

// Uniform Base
class I_G_Soldier_LAT_F;

// Vehicles
class APC_Wheeled_02_base_F;
class Car_F;
class Heli_Attack_01_base_F;
class Heli_Light_01_base_F;
class Heli_light_03_base_F;
class Heli_Transport_03_base_F;
class Helicopter_Base_H;
class LSV_01_base_F;
class LSV_02_base_F;
class LT_01_base_F;
class Offroad_01_armed_lxWS;
class Offroad_01_AT_lxWS;
class Offroad_01_base_F;
class Offroad_01_base_lxWS;
class Offroad_01_military_base_F;
class Tank_F;
class Truck_F;
class Van_01_base_F;
class Van_02_base_F;
class Wheeled_APC_F;

// AH-6
class Heli_Light_01_armed_base_F: Heli_Light_01_base_F {
    class EventHandlers;
};

// Fennek
class MRAP_03_base_F: Car_F {
    class EventHandlers;
};

// Fennek HMG
class MRAP_03_hmg_base_F: MRAP_03_base_F {
    class EventHandlers;
};

// Fennek GMG
class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F {
    class EventHandlers;
};

// Ghost Hawk
class Heli_Transport_01_base_F: Helicopter_Base_H {
    class EventHandlers;
};

// Pandur
class APC_Wheeled_03_base_F: Wheeled_APC_F {
    class EventHandlers;
};

// M-ATV
class MRAP_01_base_F: Car_F {
    class EventHandlers;
};

// M-ATV (GMG)
class MRAP_01_gmg_base_F: MRAP_01_base_F {
    class EventHandlers;
};

// M-ATV (HMG)
class MRAP_01_hmg_base_F: MRAP_01_gmg_base_F {
    class EventHandlers;
};

// AW-101 (Merlin)
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

// Offroad Covered
class Offroad_01_military_covered_base_F: Offroad_01_military_base_F {
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

// Truck
class Van_01_transport_base_F: Van_01_base_F {
    class EventHandlers;
};

// Badger IFV
class APC_Wheeled_01_base_F: Wheeled_APC_F {
    class EventHandlers;
};

// Warrior IFV
class APC_Tracked_03_base_F: Tank_F {
    class EventHandlers;
};

// HEMTT
class Truck_01_base_F: Truck_F {
    class EventHandlers;
};

// Karatel
class MRAP_02_base_F: Car_F {
    class EventHandlers;
};

// Karatel HMG
class MRAP_02_hmg_base_F: MRAP_02_base_F {
    class EventHandlers;
};

// Karatel GMG
class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F {
    class EventHandlers;
};

// Leopard 2SG
class MBT_03_base_F: Tank_F {
    class EventHandlers;
};

// Bardelas
class APC_Tracked_01_base_F: Tank_F {
    class EventHandlers;
};

// Jeep Wrangler
class Offroad_02_base_F: Car_F {
    class EventHandlers;
};

// Jeep Wrangler (LMG)
class Offroad_02_LMG_base_F: Offroad_02_base_F {
    class EventHandlers;
};

// Jeep Wrangler (SPG-9)
class Offroad_02_AT_base_F: Offroad_02_base_F {
    class EventHandlers;
};

// CH-47L Chinook (Unarmed)
class Heli_Transport_03_unarmed_base_F: Heli_Transport_03_base_F {
    class EventHandlers;
};

// CH-47L Chinook (Armed)
class Heli_Transport_03_base_F: Helicopter_Base_H {
    class EventHandlers;
};

// LSV Mk. II (Unarmed)
class LSV_02_unarmed_base_F: LSV_02_base_F {
    class EventHandlers;
};

// LSV Mk. II (M134)
class LSV_02_armed_base_F: LSV_02_base_F {
    class EventHandlers;
};

// LSV Mk. II (Metis)
class LSV_02_AT_base_F: LSV_02_base_F {
    class EventHandlers;
};

// Namer
class APC_Tracked_01_base_F: Tank_F {
    class EventHandlers;
};

// Nemmera
class APC_Tracked_01_base_F: Tank_F {
    class EventHandlers;
};

// RAH-66 Comanche
class Heli_Attack_01_dynamicLoadout_base_F: Heli_Attack_01_base_F {
    class EventHandlers;
};

// Otokar ARMA (HMG)
class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F {
    class EventHandlers;
};

// Otokar ARMA Unarmed
class APC_Wheeled_02_unarmed_base_lxws: APC_Wheeled_02_base_v2_F {
    class EventHandlers;
};

// Otokar ARMA (M2)
class APC_Wheeled_02_hmg_base_lxws: APC_Wheeled_02_base_v2_F {
    class EventHandlers;
};

// Typhoon Transport
class Truck_03_base_F: Truck_F {
    class EventHandlers;
};

// Kamaz Transport (Covered)
class Truck_02_base_F: Truck_F {
    class EventHandlers;
};

// Kamaz Transport
class Truck_02_transport_base_F: Truck_02_base_F {
    class EventHandlers;
};

// Kamaz MRL
class Truck_02_MRL_base_F: Truck_02_base_F {
    class EventHandlers;
};

// Kamaz ZU-23-2
class Truck_02_aa_base_lxWS: Truck_02_base_F {
    class EventHandlers;
};

// Wildcat Unarmed
class Heli_light_03_unarmed_base_F: Heli_light_03_base_F {
    class EventHandlers;
};

class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F {
    class EventHandlers;
};

// Wiesel (MK20)
class LT_01_cannon_base_F: LT_01_base_F {
    class EventHandlers;
};

// Wiesel (ATGM)
class LT_01_AT_base_F: LT_01_base_F {
    class EventHandlers;
};
