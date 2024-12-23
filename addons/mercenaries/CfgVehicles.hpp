class CfgVehicles {
    #include "\x\tacu\addons\assets_vehicles\script_classes_vehicles.hpp"

    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
    class TACU_Main_U_INDEP_Soldier_Base;

    // Units - Opfor
    #include "opfor\CfgVehicles_O_Low.hpp"
    #include "opfor\CfgVehicles_O_Medium.hpp"
    #include "opfor\CfgVehicles_O_High.hpp"

    // Units - Independent
    #include "independent\CfgVehicles_I_Low.hpp"
    #include "independent\CfgVehicles_I_Medium.hpp"
    #include "independent\CfgVehicles_I_High.hpp"

    #include "CfgVehicles_Backpacks.hpp"

    // Vehicles
    #include "opfor\CfgVehicles_Vehicles_O.hpp"
    #include "independent\CfgVehicles_Vehicles_I.hpp"

    // Turrets
    #include "opfor\CfgVehicles_Turrets_O.hpp"
    #include "independent\CfgVehicles_Turrets_I.hpp"
};
