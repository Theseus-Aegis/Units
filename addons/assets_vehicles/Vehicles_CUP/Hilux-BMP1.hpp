class CUP_Hilux_BMP1_base: CUP_Hilux_Base {
    class EventHandlers;
};

class TACU_Hilux_BMP1_Base: CUP_Hilux_BMP1_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

class CUP_Hilux_armored_BMP1_Base: CUP_Hilux_BMP1_base {
    class EventHandlers;
};

class TACU_Hilux_Armored_BMP1_Base: CUP_Hilux_armored_BMP1_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
