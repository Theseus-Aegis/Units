class CUP_M2Bradley_Base: Tank_F {
    class EventHandlers;
};

class TACU_M2Bradley_Base: CUP_M2Bradley_Base {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_CUP_VEHICLE;

    class TextureSources {
        class Woodland {
            displayName = "$STR_CUP_dn_Core_tex_Woodland";
            author = "$STR_CUP_AUTHOR_STRING";
            textures[] = {
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_wdl_co.paa"
            };
            factions[] = {};
        };
        class Desert: Woodland {
            displayName = "$STR_CUP_dn_Core_tex_Desert";
            textures[] = {
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_co.paa"
            };
        };
    };

    MACRO_EVENTHANDLERS;
};
