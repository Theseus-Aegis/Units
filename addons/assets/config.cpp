#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Muddy",
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid",
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Tropic",
            "TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Urban",
            "TACU_BAF_Item_Vest_LightPlateCarrier_Arid",
            "TACU_BAF_Item_Vest_LightPlateCarrier_Tropic",
            "TACU_BAF_Item_Vest_LightPlateCarrier_Urban",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Arid",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Tropic",
            "TACU_BAF_Item_Vest_HeavyPlateCarrier_Urban",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceGreen",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Earth",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Foliage",
            "TACU_Vanguard_Item_Vest_PlateCarrier_Snow"
        };
        weapons[] = {
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
            "TACU_BAF_Vest_LightPlateCarrier_Arid",
            "TACU_BAF_Vest_LightPlateCarrier_Tropic",
            "TACU_BAF_Vest_LightPlateCarrier_Urban",
            "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
            "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
            "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
            "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
            "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
            "TACU_Police_Uniform_Combat_Black",
            "TACU_Police_Uniform_Combat_Blue",
            "TACU_Police_Uniform_Combat_Brown",
            "TACU_Police_Uniform_Combat_Green",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Vest_PlateCarrier_PoliceGreen",
            "TACU_Vanguard_V_PlateCarrier_Earth",
            "TACU_Vanguard_V_PlateCarrier_Foliage",
            "TACU_Vanguard_V_PlateCarrier_Snow"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
#include "CfgFaces.hpp"
