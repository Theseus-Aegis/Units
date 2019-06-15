class CfgVehicles {
    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
    class I_C_Offroad_02_unarmed_F;
    class I_C_Offroad_02_LMG_F;
    class C_Van_02_transport_F;

    #include "CfgVehicles_Sicarios.hpp"
    #include "CfgVehicles_Soldados.hpp"

    // Vehicles - Cartel

    class TACU_Cartel_V_Offroad_Jeep: I_C_Offroad_02_unarmed_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Jeep Wrangler";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Offroad_Jeep.jpg);
    };    
    class TACU_Cartel_V_Offroad_Jeep_Armed: I_C_Offroad_02_LMG_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Jeep Wrangler (LMG)";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Offroad_Jeep_Armed.jpg);
    };    
    class TACU_Cartel_V_Van_Transport: C_Van_02_transport_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Cargo Van Transport";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Van_Transport.jpg);
    };
};