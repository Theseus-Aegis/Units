#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Police_U_B_CT_Breacher",
            "TACU_Police_U_B_CT_Marksman",
            "TACU_Police_U_B_CT_Rifleman",
            "TACU_Police_U_B_Enforcer_Breacher",
            "TACU_Police_U_B_Enforcer_Rifleman",
            "TACU_Police_U_B_Enforcer_SMG_1",
            "TACU_Police_U_B_Enforcer_SMG_2",
            "TACU_Police_U_I_CT_Breacher",
            "TACU_Police_U_I_CT_Marksman",
            "TACU_Police_U_I_CT_Rifleman",
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
            "TACU_Police_W_HK416_CQB",
            "TACU_Police_W_HK417_DMR",
            "TACU_Police_W_Tar21",
            "TACU_Police_W_AA40",
            "TACU_Police_W_EBR",
            "TACU_Police_W_AK15",
            "TACU_Police_W_Scorpion",
            "TACU_Police_W_CPW",
            "TACU_Police_W_QBU"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main", "tacu_assets",};
        author = ECSTRING(main,Author);
        authors[] = {"Kresky", "Mike"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
