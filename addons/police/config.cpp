#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen",
            "TACU_Police_Item_Uniform_Combat_Black",
            "TACU_Police_Item_Uniform_Combat_Blue",
            "TACU_Police_Item_Uniform_Combat_Brown",
            "TACU_Police_Item_Uniform_Combat_Green",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Item_Vest_PlateCarrier_Police",
            "TACU_Police_U_B_CT_Breacher",
            "TACU_Police_U_B_CT_Marksman",
            "TACU_Police_U_B_CT_Rifleman",
            "TACU_Police_U_B_CT_RiotControl",
            "TACU_Police_U_B_CT_SMG",
            "TACU_Police_U_O_CT_Breacher",
            "TACU_Police_U_O_CT_Marksman",
            "TACU_Police_U_O_CT_SMG_1",
            "TACU_Police_U_O_CT_SMG_2",
            "TACU_Police_U_O_CT_SMG_3"
        };
        weapons[] = {
            "TACU_Police_Helmet_PASGT_Neck_PoliceGreen",
            "TACU_Police_Uniform_Combat_Black",
            "TACU_Police_Uniform_Combat_Blue",
            "TACU_Police_Uniform_Combat_Brown",
            "TACU_Police_Uniform_Combat_Green",
            "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_W_ASVAL_Grip",
            "TACU_Police_W_Dragunov",
            "TACU_Police_W_HK416_CQB",
            "TACU_Police_W_HK417_DMR",
            "TACU_Police_W_Vikhr_Grip",
            "TACU_Police_W_Vityaz_Grip"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = "Kresky";
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
