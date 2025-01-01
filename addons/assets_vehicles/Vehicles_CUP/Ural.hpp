// Ural Covered
class CUP_Ural_Base: CUP_Ural_BaseTurret {
    class EventHandlers;
};

class TACU_Ural_Base: CUP_Ural_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "CDF", 0.11,
        "CDFSnow", 0.11,
        "CIV1", 0.11,
        "CIV2", 0.11,
        "CIV3", 0.11,
        "RU", 0.11,
        "RUD", 0.11,
        "SLA", 0.11,
        "TKA", 0.11
    };

    MACRO_EVENTHANDLERS;
};

// Ural Open
class CUP_Ural_Open_Base: CUP_Ural_Base {
    class EventHandlers;
};

class TACU_Ural_Open_Base: CUP_Ural_Open_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "CDF", 0.16,
        "CDFSnow", 0.16,
        "RU", 0.16,
        "RUD", 0.16,
        "SLA", 0.16,
        "TKA", 0.16
    };

    MACRO_EVENTHANDLERS;
};
