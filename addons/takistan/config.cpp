#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_TNA_U_I_Major",
            "TACU_TNA_U_I_Lieutenant",
            "TACU_TNA_U_I_NCO",
            "TACU_TNA_U_I_Rifleman",
            "TACU_TNA_U_I_Rifleman2",
            "TACU_TNA_U_I_Rifleman3",
            "TACU_TNA_U_I_LMG",
            "TACU_TNA_U_I_Pilot",
            "TACU_TNA_U_I_C_NCO",
            "TACU_TNA_U_I_C_Breacher",
            "TACU_TNA_U_I_C_Grenadier",
            "TACU_TNA_U_I_C_LMG",
            "TACU_TNA_U_I_C_Medic",
            "TACU_TNA_U_I_C_Rifleman",
            "TACU_TNP_U_I_Officer",
            "TACU_TNP_U_I_Rifleman",
            "TACU_TNP_U_I_Rifleman2",
            "TACU_TNP_U_I_LMG",
            "TACU_Talib_U_O_V_Leader",
            "TACU_Talib_U_O_V_Rifleman",
            "TACU_Talib_U_O_V_Rifleman2",
            "TACU_Talib_U_O_V_Grenadier",
            "TACU_Talib_U_O_V_LMG",
            "TACU_Talib_U_O_V_RPG",
            "TACU_Talib_U_O_E_Squadleader",
            "TACU_Talib_U_O_E_Rifleman1",
            "TACU_Talib_U_O_E_Rifleman2",
            "TACU_Talib_U_O_E_Rifleman3",
            "TACU_Talib_U_O_E_Rifleman4",
            "TACU_Talib_U_O_E_LMG",
            "TACU_Talib_U_O_E_RPG",
            "TACU_Talib_V_O_Lada",
            "TACU_Talib_V_O_Lada_GreenTK",
            "TACU_Talib_V_O_V3S_Open",
            "TACU_Talib_V_O_S1203",
            "TACU_Talib_V_O_Volha_Blue",
            "TACU_TNA_V_I_HMMWV_M2",
            "TACU_TNA_V_I_M1151_M2",
            "TACU_TNA_V_I_HMMWV_Unarmed",
            "TACU_TNA_V_I_HMMWV_Transport",
            "TACU_TNA_V_I_Kamaz",
            "TACU_TNA_V_I_Mi17",
            "TACU_TNP_V_I_Police_Offroad",
            "TACU_TNP_V_I_Datsun",
            "TACU_TNP_V_I_Datsun_PK"
        };
        weapons[] = {
            "TACU_TNA_W_M4A3_Desert",
            "TACU_TNA_W_M4A1_GL",
            "TACU_TNA_W_M4A3_Black",
            "TACU_TNA_W_M4A1_Black"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"TyroneMF"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
