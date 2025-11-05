class CfgVehicles {
    //#include "\x\tacu\addons\assets_vehicles\script_classes_vehicles.hpp"

    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
    class TACU_Main_U_INDEP_Soldier_Base;

    // Vehicle Baseclasses
    class TACU_Assault_Boat_Base;
    class TACU_Badger_IFV_Base;
    class TACU_Fennek_HMG_Base;
    class TACU_Fennek_Unarmed_Base;
    class TACU_HEMTT_Base;
    class TACU_HEMTT_Covered_Base;
    class TACU_Jeep_Wrangler_AT_Base;
    class TACU_Jeep_Wrangler_LMG_Base;
    class TACU_Jeep_Wrangler_Unarmed_Base;
    class TACU_Kamaz_Base;
    class TACU_Karatel_HMG_Base;
    class TACU_Karatel_Unarmed_Base;
    class TACU_Leopard_2SG_Base;
    class TACU_LSV_MKII_Armed_Base;
    class TACU_LSV_MKII_Base;
    class TACU_Offroad_Armed_AT_Base;
    class TACU_Offroad_Armed_AT_UP_Base;
    class TACU_Offroad_Armed_M2_Base;
    class TACU_Offroad_Armed_M2_UP_Base;
    class TACU_Offroad_Unarmed_Base;
    class TACU_Offroad_Unarmed_UP_Base;
    class TACU_Pandur_Base;
    class TACU_Polaris_Armed_Base;
    class TACU_Polaris_Unarmed_Base;
    class TACU_Rooikat_Base;
    class TACU_Speedboat_Minigun_Base;

    // Turret Baseclasses
    class TACU_HMG_50;
    class TACU_Mini_Spike_AT;
    class TACU_MK6_Base;
    class TACU_ZU23_base;

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
