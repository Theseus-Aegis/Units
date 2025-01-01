// These have to manually set hiddenSelectionsTextures because for some reason the vehicles just refuse to set them.
// GAZ-233114 KORD
class CUP_Tigr_233114_KORD_Base: CUP_Tigr_M_KORD_Base {
    class EventHandlers;
};

class TACU_TIGR_233114_KORD_Base: CUP_Tigr_233114_KORD_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "RU_Camo", 0.14,
        "RU_PlainDesert", 0.14,
        "SLA", 0.14,
        "Guerrilla_01", 0.14,
        "Guerrilla_02", 0.14,
        "Generic_Desert", 0.14,
        "Generic_Civil_02", 0.14
    };

    MACRO_EVENTHANDLERS;
};

// GAZ-233114 PKM
class CUP_Tigr_233114_PK_Base: CUP_Tigr_M_PK_Base {
    class EventHandlers;
};

class TACU_TIGR_233114_PK_Base: CUP_Tigr_233114_PK_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    textureList[] = {
        "RU_Camo", 0.14,
        "RU_PlainDesert", 0.14,
        "SLA", 0.14,
        "Guerrilla_01", 0.14,
        "Guerrilla_02", 0.14,
        "Generic_Desert", 0.14,
        "Generic_Civil_02", 0.14
    };

    MACRO_EVENTHANDLERS;
};
