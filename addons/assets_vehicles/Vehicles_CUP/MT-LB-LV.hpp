class CUP_MTLB_Base: Tank_F {
    class EventHandlers;
};

class TACU_MTLB_Base: CUP_MTLB_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
