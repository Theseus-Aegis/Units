class CfgVehicles {
    // Base Classes
    class TACU_Main_U_INDEP_Soldier_Base;
    class B_Heli_Transport_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class tacs_Offroad_B_Armed_Black;
    class B_MRAP_01_F;
    class I_APC_Wheeled_03_cannon_F;
    class I_MRAP_03_F;
    class B_T_LSV_01_unarmed_black_F;
    class O_T_LSV_02_armed_black_F;

    #include "CfgVehicles_Contractors.hpp"
    #include "CfgVehicles_Specialists.hpp"

    // Vehicles - Vanguard PMC

    class TACU_Vanguard_V_UH80_Ghosthawk: B_Heli_Transport_01_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "UH-80 Ghosthawk";
        crew = "TACU_Vanguard_U_Contractor_Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext01_CO.paa), QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext02_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_UH80_Ghosthawk.jpg);
    };

    class TACU_Vanguard_V_AH9_Pawnee: B_Heli_Light_01_dynamicLoadout_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "AH-9 Pawnee";
        crew = "TACU_Vanguard_U_Contractor_Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AH9_Pawnee_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_AH9_Pawnee.jpg);
    };

    class TACU_Vanguard_V_Offroad_Armed: tacs_Offroad_B_Armed_Black {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Offroad (Armed)";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Offroad_Armed.jpg);
    };

    class TACU_Vanguard_V_Hunter: B_MRAP_01_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Hunter";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Hunter_ext01_CO.paa), QPATHTOF(data\Vanguard_V_Hunter_ext02_CO)};
        editorPreview = QPATHTOF(ui\Vanguard_V_Hunter.jpg);
    };

    class TACU_Vanguard_V_Strider: I_MRAP_03_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Strider";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Strider_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_Strider.jpg);
    };

    class TACU_Vanguard_V_AFV4_Gorgon: I_APC_Wheeled_03_cannon_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "AFV-4 Gorgon";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AFV4_Gorgon_CO.paa), "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"};
        editorPreview = QPATHTOF(ui\Vanguard_V_AFV4_Gorgon.jpg);
    };

    class TACU_Vanguard_V_Prowler: B_T_LSV_01_unarmed_black_F {
        faction = "TACU_Vanguard";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Prowler.jpg);
    };

    class TACU_Vanguard_V_Qilin: O_T_LSV_02_armed_black_F {
        faction = "TACU_Vanguard";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Qilin (Armed)";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Qilin.jpg);
    };
};
