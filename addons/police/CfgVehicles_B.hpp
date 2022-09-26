// Units - Police (Counter Terrorism)
class TACU_Police_U_B_CT_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    backpack = "";
    editorPreview = QPATHTOF(ui\Police_U_B_CT_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_OpsCore_Black", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_OpsCore_Black", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK416_CQB", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_30Rnd_556x45_EPR_EMAG"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("tacgt_30Rnd_556x45_EPR_EMAG"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    headgearList[] = {
        "CUP_H_OpsCore_Black", 0.50,
        "CUP_H_OpsCore_Black_NoHS", 0.50
    };
    CBA_facewearList[] = {
        "CUP_G_PMC_Facewrap_Black_Glasses_Dark", 0.30,
        "CUP_G_PMC_Facewrap_Black_Glasses_Dark_Headset", 0.30,
        "CUP_G_PMC_Facewrap_Black_Glasses_Ember", 0.30
    };
    editorSubcategory = "TACU_Police_EdSubCat_B_CT";
};

class TACU_Police_U_B_CT_Breacher: TACU_Police_U_B_CT_Rifleman {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_B_CT_Breacher.jpg);
    weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_8("tacgt_8Rnd_P_000"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_8("tacgt_8Rnd_P_000"), mag_3("CUP_17Rnd_9x19_glock17"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
};

class TACU_Police_U_B_CT_Marksman: TACU_Police_U_B_CT_Rifleman {
    displayName = "Marksman";
    editorPreview = QPATHTOF(ui\Police_U_B_CT_Marksman.jpg);
    weapons[] = {"TACU_Police_W_HK417_DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_HK417_DMR", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("ACE_20Rnd_762x51_M993_AP_Mag"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_6("ACE_20Rnd_762x51_M993_AP_Mag"), mag_3("CUP_17Rnd_9x19_glock17")};
};

class TACU_Police_U_B_CT_RiotControl: TACU_Police_U_B_CT_Rifleman {
    displayName = "Riot Control";
    editorPreview = QPATHTOF(ui\Police_U_B_CT_RiotControl.jpg);
    weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    magazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "CUP_HandGrenade_M67", "SmokeShell"};
};

// Units - Police (Enforcers)
class TACU_Police_U_B_Enforcer_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "TACU_Police_Uniform_Combat_Blue";
    backpack = "";
    editorPreview = QPATHTOF(ui\Police_U_B_Enforcer_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_police", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceBlue"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M4A3_black", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_30Rnd_556x45_AP_EMAG"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_4("tacgt_30Rnd_556x45_AP_EMAG"), mag_3("CUP_17Rnd_9x19_glock17")};
    headgearList[] = {
        "H_Cap_police", 0.60,
        "H_MilCap_blue", 0.50,
        "CUP_H_PMC_Beanie_Black", 0.30,
        "CUP_H_PMC_Beanie_Khaki", 0.30,
        "CUP_H_PMC_Cap_PRR_Grey", 0.40,
        "CUP_H_OpsCore_Black", 0.25,
        "CUP_H_OpsCore_Black_NoHS", 0.25
    };
    CBA_facewearList[] = {
        "CUP_G_Oakleys_Drk", 0.20,
        "CUP_G_Oakleys_Embr", 0.20,
        "CUP_G_Oakleys_Clr", 0.20
    };
    editorSubcategory = "TACU_Police_EdSubCat_B_Enforcer";
};

class TACU_Police_U_B_Enforcer_SMG_1: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (MP5A5)";
    editorPreview = QPATHTOF(ui\Police_U_B_Enforcer_SMG_1.jpg);
    weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x19_MP5"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x19_MP5"), mag_3("CUP_17Rnd_9x19_glock17")};
};

class TACU_Police_U_B_Enforcer_SMG_2: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "SMG (Vector)";
    editorPreview = QPATHTOF(ui\Police_U_B_Enforcer_SMG_2.jpg);
    weapons[] = {"SMG_01_F", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"SMG_01_F", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_45ACP_Mag_SMG_01"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_6("30Rnd_45ACP_Mag_SMG_01"), mag_3("CUP_17Rnd_9x19_glock17")};
};

class TACU_Police_U_B_Enforcer_Breacher: TACU_Police_U_B_Enforcer_Rifleman {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_B_Enforcer_Breacher.jpg);
    weapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014", "CUP_hgun_Glock17_blk", "Throw", "Put"};
    magazines[] = {mag_6("tacgt_8Rnd_P_000"), mag_3("CUP_17Rnd_9x19_glock17")};
    respawnMagazines[] = {mag_6("tacgt_8Rnd_P_000"), mag_3("CUP_17Rnd_9x19_glock17")};
};

// Vehicles
class TACU_Police_V_B_Offroad_Blue: Offroad_01_unarmed_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 1;
    displayName = "Offroad (Police, Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_2"};
    editorPreview = QPATHTOF(ui\Police_V_B_Offroad_Blue.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Offroad_Blue_co.paa),
        QPATHTOF(data\Police_V_Offroad_Blue_co.paa)
    };
    transportMaxBackpacks = 6;
    animationList[] = {
        "HideDoor1", 0,
        "HideDoor2", 0,
        "HideDoor3", 0,
        "HideBumper1", 1,
        "HideBumper2", 0,
        "HideConstruction", 0.2,
        "HideBackpacks", 1,
        "HidePolice", 0
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};

class TACU_Police_V_B_Van_Cargo_Blue: Van_02_vehicle_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 1;
    displayName = "Van (Cargo, Police, Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_1"};
    editorPreview = QPATHTOF(ui\Police_V_B_Van_Cargo_Blue.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_Blue_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_Blue_co.paa)
    };
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};

class TACU_Police_V_B_Van_Transport_Blue: Van_02_transport_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_B";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 1;
    displayName = "Van (Transport, Police, Blue)";
    crew = "TACU_Police_U_B_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_B_Enforcer_SMG_2"};
    editorPreview = QPATHTOF(ui\Police_V_B_Van_Transport_Blue.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_Blue_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_Blue_co.paa)
    };
    transportMaxBackpacks = 64;
    animationList[] = {
        "beacon_front_hide", 0,
        "beacon_rear_hide", 0,
        "LED_lights_hide", 0,
        "reflective_tape_hide", 0,
        "side_protective_frame_hide", 0,
        "front_protective_frame_hide", 0
    };
    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then { [_this select 0, [], []] call BIS_fnc_initVehicle; };";
    };
};
