class CUP_S1203_Base: Car_F {
    class EventHandlers;
};

class TACU_S1203_Base: CUP_S1203_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
