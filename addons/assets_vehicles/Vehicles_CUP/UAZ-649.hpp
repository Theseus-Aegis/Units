// UAZ-649
class CUP_B_UAZ_Unarmed_CDF: CUP_UAZ_Unarmed_Base {
    class EventHandlers;
};

class TACU_UAZ_Base: CUP_B_UAZ_Unarmed_CDF {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

// UAZ-649 Open
class CUP_B_UAZ_Open_CDF: CUP_UAZ_Open_Base {
    class EventHandlers;
};

class TACU_UAZ_Open_Base: CUP_B_UAZ_Open_CDF {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};

// UAZ-649 DSHKM
class CUP_B_UAZ_MG_CDF: CUP_UAZ_MG_Base {
    class EventHandlers;
};

class TACU_UAZ_DSHKM_Base: CUP_B_UAZ_MG_CDF {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    MACRO_EVENTHANDLERS;
};
