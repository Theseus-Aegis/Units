// BMP-2
class CUP_BMP2_base: CUP_BMP1_base {
    class EventHandlers;
};

class TACU_BMP2_Base: CUP_BMP2_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

// BMP-2K
class CUP_BMP2_HQ_Base: CUP_BMP2_base {
    class EventHandlers;
};

class TACU_BMP2K_Base: CUP_BMP2_HQ_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
