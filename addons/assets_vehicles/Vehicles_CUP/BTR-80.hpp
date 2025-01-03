// BTR-80
class CUP_BTR80_Base: CUP_BTR80_Common_Base {
    class EventHandlers;
};

class TACU_BTR80_Base: CUP_BTR80_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

// BTR-80A
class CUP_BTR80A_Base: CUP_BTR80_Common_Base {
    class EventHandlers;
};

class TACU_BTR80A_Base: CUP_BTR80A_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
