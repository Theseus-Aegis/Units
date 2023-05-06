class CfgVehicles {
    // Base classes - Vanilla
    class SoldierGB;
    class I_Soldier_base_F;
    class I_Soldier_diver_base_F;
    class I_Soldier_sniper_base_F;
    class I_Soldier_02_F;
    class I_Soldier_03_F;
    class I_Soldier_04_F;

    // Base classes - Missing Units
    class I_MU_GrDa_base_F;
    class I_MU_mercs_base_F;
    class I_MU_mercs_base_2_F;

    // Base classes - Backpacks
    class B_AssaultPack_rgr;
    class B_AssaultPack_dgtl;
    class B_Carryall_oli;
    class B_TacticalPack_blk;

    // Backpacks
    #include "CfgVehicles_Backpacks.hpp"

    // Vanilla
    #include "vanilla\aaf.hpp"

    // Missing Units
    #include "missing_units\green_daggers.hpp"
    #include "missing_units\mercenaries.hpp"
};
