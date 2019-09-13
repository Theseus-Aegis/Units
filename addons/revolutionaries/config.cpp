#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "TACU_Revolutionaries_U_O_Tanoan_Base", //Units - Revolutionaries (Tanoan)
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman01",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman02",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman03",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman04",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman05",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman06",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman07",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman08",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman09",
            "TACU_Revolutionaries_U_O_Tanoan_Rifleman10",
            "TACU_Revolutionaries_U_O_Russian_Base", //Units - Revolutionaries (Russian)
            "TACU_Revolutionaries_U_O_Russian_Rifleman01",
            "TACU_Revolutionaries_U_O_Russian_Rifleman02",
            "TACU_Revolutionaries_U_O_Russian_Rifleman03",
            "TACU_Revolutionaries_U_O_Russian_Rifleman04",
            "TACU_Revolutionaries_U_O_Russian_Rifleman05",
            "TACU_Revolutionaries_U_O_Russian_Rifleman06",
            "TACU_Revolutionaries_U_O_Russian_Rifleman07",
            "TACU_Revolutionaries_U_O_Russian_Rifleman08",
            "TACU_Revolutionaries_U_O_Russian_Rifleman09",
            "TACU_Revolutionaries_U_O_Russian_Rifleman10",
            "TACU_Revolutionaries_U_I_Tanoan_Base", //Units - Civil Defense (Tanoan)
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman01",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman02",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman03",
            "TACU_Revolutionaries_U_I_Tanoan_Rifleman04",
            "TACU_Revolutionaries_U_I_Russian_Base", //Units - Civil Defense (Russian)
            "TACU_Revolutionaries_U_I_Russian_Rifleman01",
            "TACU_Revolutionaries_U_I_Russian_Rifleman02",
            "TACU_Revolutionaries_U_I_Russian_Rifleman03",
            "TACU_Revolutionaries_U_I_Russian_Rifleman04",
            "TACU_Revolutionaries_Backpack_Mk14", //Backpacks
            "TACU_Revolutionaries_Backpack_Shotgun",
            "TACU_Revolutionaries_Backpack_MP5K",
            "TACU_Revolutionaries_Backpack_CZ550",
            "TACU_Revolutionaries_Backpack_LeeEnfield",
            "TACU_Revolutionaries_Backpack_M79",
            "TACU_Revolutionaries_Backpack_Bizon",
            "TACU_Revolutionaries_Backpack_UK59",
            "TACU_Revolutionaries_Backpack_FNMinimiSPW",
            "TACU_Revolutionaries_Backpack_CZ805A2",
            "TACU_Revolutionaries_V_O_Hatchback01", //Vehicles - Revolutionaries (Tanoan)
            "TACU_Revolutionaries_V_O_Transport01",
            "TACU_Revolutionaries_V_O_OffroadC01",
            "TACU_Revolutionaries_V_O_Jeep_LMG",
            "TACU_Revolutionaries_V_O_Datsun_5Seat", //Vehicles - Revolutionaries (Russian)
            "TACU_Revolutionaries_V_O_Golf_Black",
            "TACU_Revolutionaries_V_O_Skoda_Blue",
            "TACU_Revolutionaries_V_O_Fatsun_PK",
            "TACU_Revolutionaries_V_O_Ural01",
            "TACU_Revolutionaries_V_I_Hatchback01", //Vehicles - Civil Defense
            "TACU_Revolutionaries_V_I_OffroadC01",
            "TACU_Revolutionaries_V_I_Datsun_5Seat",
            "TACU_Revolutionaries_V_I_Golf_Black",
            "TACU_Revolutionaries_V_I_Skoda_Blue"
        };
        weapons[] = {
            "TACU_Revolutionaries_Weapon_O_MP5K",
            "TACU_Revolutionaries_Weapon_O_FNMinimiSPW",
            "TACU_Revolutionaries_Weapon_O_CZ805A2"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacu_main"};
        author = ECSTRING(main,Author);
        authors[] = {"Jack"};
        VERSION_CONFIG;
    };
};
#include "CfgFactionClasses.hpp"
#include "CfgGroups.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"