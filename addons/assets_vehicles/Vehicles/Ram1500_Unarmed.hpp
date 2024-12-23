class Pickup_01_base_rf: Offroad_01_unarmed_base_F {
    class EventHandlers;
};

class TACU_Ram1500_Unarmed_Base: Pickup_01_base_rf {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;

    textureList[] = {
        "Black", 1,
        "Guerilla_01", 1,
        "Guerilla_02", 1,
        "Guerilla_03", 1,
        "Guerilla_04", 1,
        "Guerilla_05", 1,
        "Guerilla_06", 1,
        "Guerilla_07", 1,
        "Guerilla_08", 1,
        "Guerilla_09", 1,
        "Guerilla_10", 1,
        "Urban", 1,
        "Tundra", 1,
        "Tan", 1,
        "NATO_P", 1,
        "NATO", 1,
        "MTP_Desert", 1,
        "EAF", 1,
        "Digital_desert", 1
    };

    MACRO_EVENTHANDLERS;
};
