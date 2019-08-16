#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Vanguard_U_Soldier_Base",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_03",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_04",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_05",
            "TACU_Vanguard_U_Contractor_Guard_Rifleman_06",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_AT",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_AT",
            "TACU_Vanguard_U_Contractor_Green_Grenadier",
            "TACU_Vanguard_U_Contractor_Sand_Grenadier",
            "TACU_Vanguard_U_Contractor_Green_Marksman",
            "TACU_Vanguard_U_Contractor_Sand_Marksman",
            "TACU_Vanguard_U_Contractor_Green_Driver",
            "TACU_Vanguard_U_Contractor_Sand_Driver",
            "TACU_Vanguard_U_Contractor_Green_TeamLeader",
            "TACU_Vanguard_U_Contractor_Sand_TeamLeader",
            "TACU_Vanguard_U_Contractor_Green_Autorifleman",
            "TACU_Vanguard_U_Contractor_Sand_Autorifleman",
            "TACU_Vanguard_U_Contractor_Green_Medic",
            "TACU_Vanguard_U_Contractor_Sand_Medic",
            "TACU_Vanguard_U_Contractor_Green_Engineer",
            "TACU_Vanguard_U_Contractor_Sand_Engineer",
            "TACU_Vanguard_U_Contractor_Pilot",
            "TACU_Vanguard_U_Specialist_Rifleman",
            "TACU_Vanguard_U_Specialist_Rifleman_AT",
            "TACU_Vanguard_U_Specialist_Grenadier",
            "TACU_Vanguard_U_Specialist_Marksman",
            "TACU_Vanguard_U_Specialist_Driver",
            "TACU_Vanguard_U_Specialist_TeamLeader",
            "TACU_Vanguard_U_Specialist_Autorifleman",
            "TACU_Vanguard_U_Specialist_Medic",
            "TACU_Vanguard_V_UH80_Ghosthawk",
            "TACU_Vanguard_V_AH9_Pawnee",
            "TACU_Vanguard_V_Offroad_Armed",
            "TACU_Vanguard_V_Hunter",
            "TACU_Vanguard_V_Strider",
            "TACU_Vanguard_V_AFV4_Gorgon",
            "TACU_Vanguard_V_Prowler",
            "TACU_Vanguard_V_Qilin"
        };
        weapons[] = {
            "TACU_Vanguard_W_MXM_Black",
            "TACU_Vanguard_W_ARX_Black",
            "TACU_Vanguard_W_MX_Black",
            "TACU_Vanguard_W_MX_GL_Black",
            "TACU_Vanguard_W_MX_SW_Black",
            "TACU_Vanguard_W_MXC_Black",
            "TACU_Vanguard_W_Rook40",
            "TACU_Vanguard_W_F2000_Sand",
            "TACU_Vanguard_W_CTAR_Green",
            "TACU_Vanguard_W_CTAR_Sand",
            "TACU_Vanguard_W_MX_Green",
            "TACU_Vanguard_W_Stoner_Black",
            "TACU_Vanguard_W_HK416GL_Green",
            "TACU_Vanguard_W_HK416GL_Sand",
            "TACU_Vanguard_W_SIG556_Green",
            "TACU_Vanguard_W_SIG556_Sand"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Tyrone"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
