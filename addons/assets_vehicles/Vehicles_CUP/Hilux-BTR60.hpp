class CUP_Hilux_btr60_base: CUP_Hilux_Base {
    class EventHandlers;
};

class TACU_Hilux_BTR60_Base: CUP_Hilux_btr60_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

class CUP_Hilux_armored_BTR60_Base: CUP_Hilux_btr60_base {
    class EventHandlers;
};

class TACU_Hilux_Armored_BTR60_Base: CUP_Hilux_armored_BTR60_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
