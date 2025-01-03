class CUP_T72_Base: Tank_F {
    class EventHandlers;
};

class TACU_T72_Base: CUP_T72_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
