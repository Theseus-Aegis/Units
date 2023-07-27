#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Police_U_B_CT_Breacher",
            "TACU_Police_U_B_CT_RiotControl",
            "TACU_Police_U_B_Enforcer_Breacher",
            "TACU_Police_U_I_CT_RiotControl",
            "TACU_Police_U_O_CT_Rifleman",
            "TACU_Police_U_O_CT_SMG_1",
            "TACU_Police_U_O_CT_SMG_2",
            "TACU_Police_U_O_CT_Breacher",
            "TACU_Police_U_O_CT_Marksman",
            "TACU_Police_U_O_Enforcer_SMG_1",
            "TACU_Police_U_O_Enforcer_SMG_2",
            "TACU_Police_U_O_Enforcer_SMG_3",
            "TACU_Police_U_O_Enforcer_Breacher"
        };
        weapons[] = {
            "TACU_Police_W_Dragunov",
            "TACU_Police_W_ASVAL",
            "TACU_Police_W_Vikhr_Grip",
            "TACU_Police_W_Vityaz_Grip"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tacu_police",
            "tacu_assets_cup",
            "CUP_Weapons_LoadOrder"
        };
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
