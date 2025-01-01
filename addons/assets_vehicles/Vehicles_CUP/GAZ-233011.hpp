class CUP_Tigr_233011_Base: CUP_Tigr_Base {
    class EventHandlers;
};

class TACU_TIGR_233011_Base: CUP_Tigr_233011_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "RU_Camo", 0.14,
        "RU_PlainDesert", 0.14,
        "SLA", 0.14,
        "Guerrilla_01", 0.14,
        "Guerrilla_02", 0.14,
        "Generic_Desert", 0.14,
        "Generic_Civil_02", 0.14
    };

    MACRO_EVENTHANDLERS;
};
