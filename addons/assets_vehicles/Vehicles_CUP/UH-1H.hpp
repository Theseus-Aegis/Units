class CUP_UH1H_base: Helicopter_Base_H {
    class EventHandlers;
};

class TACU_UH1H_Base: CUP_UH1H_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {"Olive", 1};

    MACRO_EVENTHANDLERS;
};
