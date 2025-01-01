class CUP_Mi8_base: Helicopter_Base_H {
    class EventHandlers;
};
class CUP_Mi8_MTV3_base: CUP_Mi8_base {
    class EventHandlers;
};

class TACU_Mi8_Base: CUP_Mi8_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;
    displayName = "Mi-8MT";

    textureList[] = {"CIV_GREEN", 1};

    MACRO_EVENTHANDLERS;
};

class TACU_Mi8_MTV3_Base: CUP_Mi8_MTV3_base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {"CIV_GREEN", 1};

    MACRO_EVENTHANDLERS;
};
