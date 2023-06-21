#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Vanguard_U_Soldier_Base",
            // Units - (Indep - Green)
            "TACU_Vanguard_U_Contractor_Green_Autorifleman",
            "TACU_Vanguard_U_Contractor_Green_Driver",
            "TACU_Vanguard_U_Contractor_Green_Engineer",
            "TACU_Vanguard_U_Contractor_Green_Grenadier",
            "TACU_Vanguard_U_Contractor_Green_Marksman",
            "TACU_Vanguard_U_Contractor_Green_Medic",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Green_Rifleman_AT",
            "TACU_Vanguard_U_Contractor_Green_TeamLeader",
            "TACU_Vanguard_U_Contractor_Pilot",
            // Units - (Opfor - Green)
            "TACU_Vanguard_U_O_Contractor_Green_Autorifleman",
            "TACU_Vanguard_U_O_Contractor_Green_Driver",
            "TACU_Vanguard_U_O_Contractor_Green_Engineer",
            "TACU_Vanguard_U_O_Contractor_Green_Grenadier",
            "TACU_Vanguard_U_O_Contractor_Green_Marksman",
            "TACU_Vanguard_U_O_Contractor_Green_Medic",
            "TACU_Vanguard_U_O_Contractor_Green_Rifleman_01",
            "TACU_Vanguard_U_O_Contractor_Green_Rifleman_02",
            "TACU_Vanguard_U_O_Contractor_Green_Rifleman_AT",
            "TACU_Vanguard_U_O_Contractor_Green_TeamLeader",
            // Units - (Indep - Guards)
            "TACU_Vanguard_U_Guard_Rifleman_01",
            "TACU_Vanguard_U_Guard_Rifleman_02",
            "TACU_Vanguard_U_Guard_Rifleman_03",
            "TACU_Vanguard_U_Guard_Rifleman_04",
            "TACU_Vanguard_U_Guard_Rifleman_05",
            "TACU_Vanguard_U_Guard_Rifleman_06",
            // Units - (Opfor - Guards)
            "TACU_Vanguard_U_O_Guard_Rifleman_01",
            "TACU_Vanguard_U_O_Guard_Rifleman_02",
            "TACU_Vanguard_U_O_Guard_Rifleman_03",
            "TACU_Vanguard_U_O_Guard_Rifleman_04",
            "TACU_Vanguard_U_O_Guard_Rifleman_05",
            "TACU_Vanguard_U_O_Guard_Rifleman_06",
            // Units - (Indep - Sand)
            "TACU_Vanguard_U_Contractor_Sand_Autorifleman",
            "TACU_Vanguard_U_Contractor_Sand_Driver",
            "TACU_Vanguard_U_Contractor_Sand_Engineer",
            "TACU_Vanguard_U_Contractor_Sand_Grenadier",
            "TACU_Vanguard_U_Contractor_Sand_Marksman",
            "TACU_Vanguard_U_Contractor_Sand_Medic",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Sand_Rifleman_AT",
            "TACU_Vanguard_U_Contractor_Sand_TeamLeader",
            // Units - (Opfor - Sand)
            "TACU_Vanguard_U_O_Contractor_Sand_Autorifleman",
            "TACU_Vanguard_U_O_Contractor_Sand_Driver",
            "TACU_Vanguard_U_O_Contractor_Sand_Engineer",
            "TACU_Vanguard_U_O_Contractor_Sand_Grenadier",
            "TACU_Vanguard_U_O_Contractor_Sand_Marksman",
            "TACU_Vanguard_U_O_Contractor_Sand_Medic",
            "TACU_Vanguard_U_O_Contractor_Sand_Rifleman_01",
            "TACU_Vanguard_U_O_Contractor_Sand_Rifleman_02",
            "TACU_Vanguard_U_O_Contractor_Sand_Rifleman_AT",
            "TACU_Vanguard_U_O_Contractor_Sand_TeamLeader",
            // Units - (Indep - Winter)
            "TACU_Vanguard_U_Contractor_Winter_Autorifleman",
            "TACU_Vanguard_U_Contractor_Winter_Grenadier",
            "TACU_Vanguard_U_Contractor_Winter_Marksman",
            "TACU_Vanguard_U_Contractor_Winter_Medic",
            "TACU_Vanguard_U_Contractor_Winter_Rifleman_01",
            "TACU_Vanguard_U_Contractor_Winter_Rifleman_02",
            "TACU_Vanguard_U_Contractor_Winter_Rifleman_AT",
            "TACU_Vanguard_U_Contractor_Winter_TeamLeader",
            // Units - (Opfor - Winter)
            "TACU_Vanguard_U_O_Contractor_Winter_Autorifleman",
            "TACU_Vanguard_U_O_Contractor_Winter_Grenadier",
            "TACU_Vanguard_U_O_Contractor_Winter_Marksman",
            "TACU_Vanguard_U_O_Contractor_Winter_Medic",
            "TACU_Vanguard_U_O_Contractor_Winter_Rifleman_01",
            "TACU_Vanguard_U_O_Contractor_Winter_Rifleman_02",
            "TACU_Vanguard_U_O_Contractor_Winter_Rifleman_AT",
            "TACU_Vanguard_U_O_Contractor_Winter_TeamLeader",
            // Units - (Indep - Specialists)
            "TACU_Vanguard_U_Specialist_Rifleman",
            "TACU_Vanguard_U_Specialist_Rifleman_AT",
            "TACU_Vanguard_U_Specialist_Grenadier",
            "TACU_Vanguard_U_Specialist_Marksman",
            "TACU_Vanguard_U_Specialist_Driver",
            "TACU_Vanguard_U_Specialist_TeamLeader",
            "TACU_Vanguard_U_Specialist_Autorifleman",
            "TACU_Vanguard_U_Specialist_Medic",
            // Units - (Opfor - Specialists)
            "TACU_Vanguard_U_O_Specialist_Rifleman",
            "TACU_Vanguard_U_O_Specialist_Rifleman_AT",
            "TACU_Vanguard_U_O_Specialist_Grenadier",
            "TACU_Vanguard_U_O_Specialist_Marksman",
            "TACU_Vanguard_U_O_Specialist_Driver",
            "TACU_Vanguard_U_O_Specialist_TeamLeader",
            "TACU_Vanguard_U_O_Specialist_Autorifleman",
            "TACU_Vanguard_U_O_Specialist_Medic",
            // Vehicles - (Indep)
            "TACU_Vanguard_V_UH80_Ghosthawk",
            "TACU_Vanguard_V_AH9_Pawnee",
            "TACU_Vanguard_V_Offroad_Armed",
            "TACU_Vanguard_V_Hunter",
            "TACU_Vanguard_V_Strider",
            "TACU_Vanguard_V_AFV4_Gorgon",
            "TACU_Vanguard_V_Prowler",
            "TACU_Vanguard_V_Qilin",
            // Vehicles - (Opfor)
            "TACU_Vanguard_V_O_UH80_Ghosthawk",
            "TACU_Vanguard_V_O_AH9_Pawnee",
            "TACU_Vanguard_V_O_Offroad_Armed",
            "TACU_Vanguard_V_O_Hunter",
            "TACU_Vanguard_V_O_Strider",
            "TACU_Vanguard_V_O_AFV4_Gorgon",
            "TACU_Vanguard_V_O_Prowler",
            "TACU_Vanguard_V_O_Qilin"
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
        requiredAddons[] = {"tacu_main", "tacu_cup_turrets", "tacu_assets"};
        author = ECSTRING(main,Author);
        authors[] = {"Mike"};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
