class CUP_Uh60_Base: Helicopter_Base_H {
    class EventHandlers;
};

class TACU_UH60_Base: CUP_Uh60_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
