class CUP_Hilux_unarmed_Base: CUP_Hilux_Base {
    class EventHandlers;
};

class TACU_Hilux_Base: CUP_Hilux_unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

class CUP_Hilux_armored_unarmed_Base: CUP_Hilux_unarmed_Base {
    class EventHandlers;
};
class TACU_Hilux_Armored_Base: CUP_Hilux_armored_unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
