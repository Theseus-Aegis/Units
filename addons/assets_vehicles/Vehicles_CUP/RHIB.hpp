class CUP_RHIB_Base: Ship_F {
    class EventHandlers;
};
class CUP_RHIB2Turret_Base: CUP_RHIB_Base {
    class EventHandlers;
};

class TACU_RHIB_Base: CUP_RHIB_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    displayName = "RHIB";
    hiddenSelectionsTextures[] = {"cup\watervehicles\cup_watervehicles_rhib\data\rhib_co.paa"};

    MACRO_EVENTHANDLERS;
};
class TACU_RHIB_MK19: CUP_RHIB2Turret_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    displayName = "RHIB (MK19)";
    hiddenSelectionsTextures[] = {"cup\watervehicles\cup_watervehicles_rhib\data\rhib_co.paa"};

    MACRO_EVENTHANDLERS;
};
