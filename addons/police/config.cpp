// Needs CUP Removals.
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack",
            "TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen",
            "TACU_Police_Item_Uniform_Combat_Black",
            "TACU_Police_Item_Uniform_Combat_Blue",
            "TACU_Police_Item_Uniform_Combat_Brown",
            "TACU_Police_Item_Uniform_Combat_Green",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlack",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceBlue",
            "TACU_Police_Item_Vest_PlateCarrier_PoliceGreen",
            "TACU_Police_U_B_CT_Breacher",
            "TACU_Police_U_B_CT_Marksman",
            "TACU_Police_U_B_CT_Rifleman",
            "TACU_Police_U_B_CT_RiotControl",
            "TACU_Police_U_B_Enforcer_Breacher",
            "TACU_Police_U_B_Enforcer_Rifleman",
            "TACU_Police_U_B_Enforcer_SMG_1",
            "TACU_Police_U_B_Enforcer_SMG_2",
            "TACU_Police_U_I_CT_Breacher",
            "TACU_Police_U_I_CT_Marksman",
            "TACU_Police_U_I_CT_Rifleman",
            "TACU_Police_U_I_CT_RiotControl",
            "TACU_Police_U_I_Enforcer_Breacher",
            "TACU_Police_U_I_Enforcer_Rifleman",
            "TACU_Police_U_I_Enforcer_SMG_1",
            "TACU_Police_U_I_Enforcer_SMG_2",
            "TACU_Police_U_O_CT_Breacher",
            "TACU_Police_U_O_CT_Marksman",
            "TACU_Police_U_O_CT_Rifleman",
            "TACU_Police_U_O_CT_SMG_1",
            "TACU_Police_U_O_CT_SMG_2",
            "TACU_Police_U_O_Enforcer_Breacher",
            "TACU_Police_U_O_Enforcer_SMG_1",
            "TACU_Police_U_O_Enforcer_SMG_2",
            "TACU_Police_U_O_Enforcer_SMG_3",
            "TACU_Police_V_B_Offroad_Blue",
            "TACU_Police_V_B_Van_Cargo_Blue",
            "TACU_Police_V_B_Van_Transport_Blue",
            "TACU_Police_V_I_Offroad_Black",
            "TACU_Police_V_I_Van_Cargo_Black",
            "TACU_Police_V_I_Van_Transport_Black",
            "TACU_Police_V_O_Offroad_Black",
            "TACU_Police_V_O_Van_Cargo_Black",
            "TACU_Police_V_O_Van_Transport_Black"
        };
        weapons[] = {
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
            "TACU_Police_W_Dragunov",
            "TACU_Police_W_HK416_CQB",
            "TACU_Police_W_HK417_DMR",
            "TACU_Police_W_SG5501_DMR_Rail",
            "TACU_Police_W_SG551LB_TAC",
            "TACU_Police_W_Vikhr_Grip",
            "TACU_Police_W_Vityaz_Grip"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_cup_turrets", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
