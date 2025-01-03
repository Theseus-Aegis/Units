class CUP_MTVR_Base: Car_F {
    class EventHandlers;
};

class TACU_MTVR_Base: CUP_MTVR_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
