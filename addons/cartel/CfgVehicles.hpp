class CfgVehicles {
    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
    class I_C_Offroad_02_unarmed_F;
    class I_C_Offroad_02_LMG_F;
    class C_Van_02_transport_F;

    // Old units, kept for backwards compatibility.
    #include "deprecated\CfgVehicles_Sicarios.hpp"
    #include "deprecated\CfgVehicles_Soldados.hpp"

    /*
     * Old deprecated units classname format:
     * TACU_Cartel_U_O_Soldado_Rifleman
     *
     * New format:
     * TACU_Cartel2_U_O_Grunts_Rifleman
     *
     * Will avoid any conflicts.
    */

    #include "CfgVehicles_Uniforms.hpp"
    #include "CfgVehicles_Grunts.hpp"
    //#include "CfgVehicles_Thugs.hpp"
    //#include "CfgVehicles_Enforcers.hpp"
};
