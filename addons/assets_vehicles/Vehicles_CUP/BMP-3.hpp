class CUP_BMP3_Base: Tank_F {
    class EventHandlers;
};

class TACU_BMP3_Base: CUP_BMP3_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
