class CUP_T55_Base: Tank_F {
    class EventHandlers;
};

class TACU_T55_Base: CUP_T55_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
