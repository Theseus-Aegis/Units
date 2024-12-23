#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Assets_Fieldpack_Arid",
            "TACU_Assets_Fieldpack_Tropic",
            "TACU_Assets_Fieldpack_Urban"
        };
        weapons[] = {
            // Uniforms
            "TACU_Proxy_China_Uniform_Combat_Fatigues",
            "TACU_Proxy_Russia_Uniform_Coveralls",
            "TACU_Proxy_Russia_Uniform_Combat_Fatigues",
            "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer",
            "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty",
            "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy",
            "TACU_Police_Uniform_Combat_Black",
            "TACU_Police_Uniform_Combat_Blue",
            "TACU_Police_Uniform_Combat_Brown",
            "TACU_Police_Uniform_Combat_Green",
            "TACU_African_South_Uniform_Combat_Fatigues",
            "TACU_African_South_Uniform_Combat_Fatigues_Rolled",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_01",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_02",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_03",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_04",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_05",
            "TACU_Uniform_O_W_Cartel_Greek_Grunt_06",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_01",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_02",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_03",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_04",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_05",
            "TACU_Uniform_O_W_Cartel_Greek_Thug_06",
            "TACU_UN_Uniform_Combat_Fatigues_Autumn",
            "TACU_UN_Uniform_Combat_Fatigues_Urban",
            "TACU_UN_Uniform_Combat_Fatigues_Woodland",
            "TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn",
            "TACU_Uniform_Combat_Fatigues_TigerStripe_Urban",
            "TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland",
            // Helmets
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
            "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
            "TACU_Police_Helmet_PASGT_Neck_PoliceBlack",
            "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
            "TACU_African_South_Helmet_PASGT_Green",
            // Vests
            "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
            "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
            "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
            "TACU_BAF_Vest_LightPlateCarrier_Arid",
            "TACU_BAF_Vest_LightPlateCarrier_Tropic",
            "TACU_BAF_Vest_LightPlateCarrier_Urban",
            "TACU_Eastern_Asia_Vest_Carrier_Rig",
            "TACU_Foreign_Legion_Vest_Carrier_Lite_Desert",
            "TACU_Mercenaries_Vest_Carrier_Rig_Coyote",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Vest_PlateCarrier_PoliceGreen",
            "TACU_Seven_Rings_Vest_Plate_Carrier_Coyote",
            "TACU_Seven_Rings_Vest_Plate_Carrier_Green",
            "TACU_Vanguard_V_PlateCarrier_Earth",
            "TACU_Vanguard_V_PlateCarrier_Foliage",
            "TACU_Vanguard_V_PlateCarrier_Snow"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike, GilleeDoo"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFaces.hpp"
#include "CfgGlasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
