class CUP_T90_Base: Tank_F {
    class EventHandlers;
};

class TACU_T90_Base: CUP_T90_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
