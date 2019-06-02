#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_VanguardPMC_U_Soldier_Base",
            "TACU_VanguardPMC_U_Contractor_Rifleman_01",
            "TACU_VanguardPMC_U_Contractor_Rifleman_02",
            "TACU_VanguardPMC_U_Contractor_Rifleman_AT",
            "TACU_VanguardPMC_U_Contractor_Grenadier",
            "TACU_VanguardPMC_U_Contractor_Marksman",
            "TACU_VanguardPMC_U_Contractor_Driver",
            "TACU_VanguardPMC_U_Contractor_TeamLeader",
            "TACU_VanguardPMC_U_Contractor_Autorifleman",
            "TACU_VanguardPMC_U_Contractor_Medic",
            "TACU_VanguardPMC_U_Contractor_Engineer",
            "TACU_VanguardPMC_U_Contractor_Pilot",
            "TACU_VanguardPMC_U_Specialist_Rifleman",
            "TACU_VanguardPMC_U_Specialist_Rifleman_AT",
            "TACU_VanguardPMC_U_Specialist_Grenadier",
            "TACU_VanguardPMC_U_Specialist_Marksman",
            "TACU_VanguardPMC_U_Specialist_Driver",
            "TACU_VanguardPMC_U_Specialist_TeamLeader",
            "TACU_VanguardPMC_U_Specialist_Autorifleman",
            "TACU_VanguardPMC_U_Specialist_Medic",
            "TACU_VanguardPMC_V_UH80_Ghosthawk",
            "TACU_VanguardPMC_V_AH9_Pawnee",
            "TACU_VanguardPMC_V_Offroad_Armed",
            "TACU_VanguardPMC_V_Hunter",
            "TACU_VanguardPMC_V_Strider",
            "TACU_VanguardPMC_V_AFV4_Gorgon",
            "TACU_VanguardPMC_V_Prowler",
            "TACU_VanguardPMC_V_Qilin"
        };
        weapons[] = {
            "TACU_VanguardPMC_W_MXM_Black",
            "TACU_VanguardPMC_W_ARX_Black",
            "TACU_VanguardPMC_W_MX_Black",
            "TACU_VanguardPMC_W_MX_GL_Black",
            "TACU_VanguardPMC_W_MX_SW_Black",
            "TACU_VanguardPMC_W_MXC_Black",
            "TACU_VanguardPMC_W_Rook40"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(VanguardPMC,Author);
        authors[] = {ECSTRING(VanguardPMC,Author)};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
