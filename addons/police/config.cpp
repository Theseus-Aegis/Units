#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Police_Item_Vest_PlateCarrier_Police",
            "TACU_Police_U_B_Soldier_Base",
            "TACU_Police_U_B_CT_Rifleman",
            "TACU_Police_U_B_CT_Breacher",
            "TACU_Police_U_B_CT_Marksman"
        };
        weapons[] = {
            "TACU_Police_Vest_PlateCarrier_Police",
            "TACU_Police_W_HK416_CQB_Geared",
            "TACU_Police_W_MK12SPR_Geared"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(Police,Author);
        authors[] = {ECSTRING(Police,Author)};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
//#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
