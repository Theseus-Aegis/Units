class CfgVehicles {
    #include "\x\tacu\addons\assets_vehicles\script_classes_vehicles.hpp"

    class TACU_Main_U_INDEP_Soldier_Base;
    class CUP_B_AlicePack_OD;
    class CUP_B_RPGPack_Khaki;
    class B_CivilianBackpack_01_Sport_Blue_F;
    class B_Messenger_Olive_F;
    class B_CivilianBackpack_01_Everyday_Black_F;
    class tacs_Backpack_Kitbag_Medic_Green;
    class tacs_Backpack_ViperHarness_Green;
    class CUP_B_HikingPack_Civ;

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
