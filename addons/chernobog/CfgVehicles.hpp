class CfgVehicles {
    //#include "\x\tacu\addons\assets_vehicles\script_classes_vehicles.hpp"

    class TACU_Main_U_INDEP_Soldier_Base;

    // Vehicle Baseclasses
    class TACU_BRDM2_Base;
    class TACU_BTR60_Base;
    class TACU_Hilux_Armored_Base;
    class TACU_Hilux_Armored_BMP1_Base;
    class TACU_Hilux_Base;
    class TACU_Hilux_BMP1_Base;
    class TACU_Leopard_1_Base;
    class TACU_M113A1_Base;
    class TACU_MTLB_Base;
    class TACU_Offroad_Armed_M2_Base;
    class TACU_Offroad_Armed_M2_UP_Base;
    class TACU_Offroad_Unarmed_Base;
    class TACU_Offroad_Unarmed_UP_Base;
    class TACU_Otokar_ARMA_Armed_Base;
    class TACU_S1203_Base;
    class TACU_T55_Base;
    class TACU_UAZ_DSHKM_Base;
    class TACU_UAZ_Open_Base;
    class TACU_Ural_Base;

    // Backpack Baseclasses
    class B_CivilianBackpack_01_Everyday_Black_F;
    class B_CivilianBackpack_01_Sport_Blue_F;
    class B_Messenger_Olive_F;
    class CUP_B_AlicePack_OD;
    class CUP_B_HikingPack_Civ;
    class CUP_B_RPGPack_Khaki;
    class tacs_Backpack_Kitbag_Medic_Green;
    class tacs_Backpack_ViperHarness_Green;

    // Core Unit
    class TACU_Chernobog_Core_Unit: TACU_Main_U_INDEP_Soldier_Base {
        author = "Mike";
        faction = "TACU_Chernobog";
        displayName = "Rifleman";
        identityTypes[] = {"LanguageRUS_F", "Head_Russian"};
        genericNames = "RussianMen";
        icon = "iconMan";
        role = "Rifleman";
        headgearList[] = {"H_Hat_Tinfoil_F", 1};
    };

    #include "CfgVehicles_Children.hpp"
    #include "CfgVehicles_Chosen.hpp"
    #include "CfgVehicles_Sons.hpp"
    #include "CfgVehicles_Backpacks.hpp"
    #include "CfgVehicles_Vehicles_Children.hpp"
    #include "CfgVehicles_Vehicles_Chosen.hpp"
    #include "CfgVehicles_Vehicles_Sons.hpp"
};
