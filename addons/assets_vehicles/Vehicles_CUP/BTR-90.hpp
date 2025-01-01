// BTR-90
class CUP_BTR90_Base: Wheeled_APC_F {
    class EventHandlers;
};

class TACU_BTR90_Base: CUP_BTR90_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

// BTR-90 HQ
class CUP_BTR90_HQ_Base: CUP_BTR90_Base {
    class EventHandlers;
};

class TACU_BTR90_HQ_Base: CUP_BTR90_HQ_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;
    displayName = "BTR-90 HQ";
    MACRO_EVENTHANDLERS;
};
