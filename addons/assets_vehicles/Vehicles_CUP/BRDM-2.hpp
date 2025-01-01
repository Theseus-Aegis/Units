class CUP_BRDM2_Base: Wheeled_APC_F {
    class EventHandlers;
};

class TACU_BRDM2_Base: CUP_BRDM2_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "NAPA", 0.14,
        "SLA", 0.14,
        "TK", 0.14,
        "RU", 0.14,
        "TKG", 0.14,
        "UKRAINE", 0.14
    };

    MACRO_EVENTHANDLERS;
};
