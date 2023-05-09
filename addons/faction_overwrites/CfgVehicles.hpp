class CfgVehicles {
    // Base classes - Vanilla
    class SoldierGB;
    class SoldierEB;
    class B_Soldier_F;
    class I_Soldier_base_F;
    class I_Soldier_diver_base_F;
    class I_Soldier_sniper_base_F;
    class I_Soldier_02_F;
    class I_Soldier_03_F;
    class I_Soldier_04_F;
    class I_G_Soldier_base_F;
    class I_C_Soldier_base_F;

    // Base classes - CUP

    // Base classes - Missing Units
    class I_MU_GrDa_base_F;
    class I_MU_mercs_base_F;
    class I_MU_mercs_base_2_F;

    // Base classes - Backpacks
    class B_AssaultPack_rgr;
    class B_AssaultPack_dgtl;
    class B_Carryall_oli;
    class B_Carryall_ocamo;
    class B_Carryall_oucamo;
    class B_Carryall_ghex_F;
    class B_TacticalPack_blk;
    class B_Kitbag_rgr;
    class B_Kitbag_cbr;
    class B_FieldPack_khk;
    class B_FieldPack_blk;
    class B_ViperHarness_hex_F;
    class B_ViperHarness_ghex_F;
    class B_FieldPack_cbr_Ammo;
    class B_FieldPack_cbr;
    class B_FieldPack_oli;

    // Backpacks
    #include "CfgVehicles_Backpacks.hpp"

    // Vanilla
    #include "vanilla\aaf.hpp"
    #include "vanilla\csat.hpp"
    #include "vanilla\csat_pacific.hpp"
    #include "vanilla\fia.hpp"
    #include "vanilla\gendarmerie.hpp"
    #include "vanilla\syndikat.hpp"
    #include "vanilla\tura.hpp"

    // CUP

    // Missing Units
    #include "missing_units\combat_divers.hpp"
    #include "missing_units\green_daggers.hpp"
    #include "missing_units\mercenaries.hpp"
    #include "missing_units\russia.hpp"
};
