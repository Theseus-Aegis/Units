class CfgVehicles {

    // Base Classes
    class SoldierGB;
    class Vest_Base_F;

    // Ground Items

    class TACU_Police_Item_Vest_PlateCarrier_Police: Vest_Base_F {
        author = ECSTRING(Police,Author);
        displayName = "Carrier Lite (Police)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            class _xx_TACU_Police_Vest_PlateCarrier_Police {
                name = "Carrier Lite (Police)";
                count = 1;
            };
        };
    };

    // Units - Police (Counter Terrorism)

    class TACU_Police_U_B_Soldier_Base: SoldierGB {
        author = ECSTRING(Police,Author);
        displayName = "Police BLUFOR Base Soldier";
        faction = "TACU_Police_B";
        scope = 1;
        scopeCurator = 1;
        side = 1;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "U_B_GEN_Commander_F";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "V_TacVest_blk_POLICE"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "V_TacVest_blk_POLICE"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_9x19_MP5"), mag_3("CUP_17Rnd_9x19_glock17")};
        respawnMagazines[] = {mag_6("CUP_30Rnd_9x19_MP5"), mag_3("CUP_17Rnd_9x19_glock17")};
    };

    class TACU_Police_U_B_CT_Rifleman: TACU_Police_U_B_Soldier_Base {
        displayName = "Rifleman";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "U_B_GEN_Commander_F";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "BWA3_OpsCore", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "BWA3_OpsCore", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
        weapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        magazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_PMAG_QP"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
        editorSubcategory = "TACU_Police_EdSubCat_B_CT";

        headgearList[] = {
            "BWA3_OpsCore",0.50,
            "BWA3_OpsCore_Camera",0.50
        };
    };

    class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
        displayName = "Breacher";
        weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        magazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
        respawnMagazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    };

    class TACU_Police_U_B_CT_Marksman: TACU_Police_U_B_CT_Rifleman {
        displayName = "Marksman";
        weapons[] = {"TACU_Police_W_HK417DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Police_W_HK417DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        magazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_20Rnd_762x51_HK417"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    };

    class TACU_Police_U_B_CT_RiotControl: TACU_Police_U_B_CT_Rifleman {
        displayName = "Riot Control";
        weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
        magazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
        respawnMagazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    };
};

class Extended_Init_Eventhandlers {
    class TACU_Police_U_B_Soldier_Base {
        class TACU_Police_headgear_init {
            init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
        };
    };
};
