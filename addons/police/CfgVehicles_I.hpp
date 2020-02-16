// Units - Police (Counter-Terrorism)
class TACU_Police_U_I_CT_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    backpack = "";
    editorPreview = QPATHTOF(ui\Police_U_I_CT_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "G_Balaclava_blk", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", "G_Balaclava_blk", "TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Police_W_MK16_TAC", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_MK16_TAC", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_Stanag_Mk16_black"), mag_3("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_Stanag_Mk16_black"), mag_3("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 0.70,
        "G_Balaclava_combat", 0.30
    };
    editorSubcategory = "TACU_Police_EdSubCat_I_CT";
};

class TACU_Police_U_I_CT_Breacher: TACU_Police_U_I_CT_Rifleman {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_I_CT_Breacher.jpg);
    weapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("6Rnd_00_Buckshot_Magazine"), mag_3("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
    respawnMagazines[] = {mag_8("6Rnd_00_Buckshot_Magazine"), mag_3("CUP_15Rnd_9x19_M9"), mag_2("ACE_M84"), "MiniGrenade", "SmokeShell"};
};

class TACU_Police_U_I_CT_Marksman: TACU_Police_U_I_CT_Rifleman {
    displayName = "Marksman";
    editorPreview = QPATHTOF(ui\Police_U_I_CT_Marksman.jpg);
    weapons[] = {"TACU_Police_W_DMR_03_Rail", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_DMR_03_Rail", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("20Rnd_762x51_Mag"), mag_3("CUP_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_CT_RiotControl: TACU_Police_U_I_CT_Rifleman {
    displayName = "Riot Control";
    editorPreview = QPATHTOF(ui\Police_U_I_CT_RiotControl.jpg);
    weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
    magazines[] = {mag_6("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("CUP_15Rnd_9x19_M9")};
};

// Units - Police (Enforcers)
class TACU_Police_U_I_Enforcer_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Black";
    backpack = "";
    editorPreview = QPATHTOF(ui\Police_U_I_Enforcer_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceBlack"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceBlack"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_G36C", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_G36C", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_556x45_G36"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_556x45_G36"), mag_3("CUP_15Rnd_9x19_M9")};
    headgearList[] = {
        "H_Cap_blk", 0.60,
        "CUP_H_PMC_Cap_Grey", 0.40,
        "CUP_H_USArmy_Helmet_Pro", 0.10,
        "CUP_H_USArmy_Helmet_Pro_gog", 0.10
    };
    CBA_facewearList[] = {
        "CUP_G_Oakleys_Drk", 0.20,
        "CUP_G_Oakleys_Embr", 0.20,
        "CUP_G_Oakleys_Clr", 0.20,
        "G_Shades_Black", 0.20,
        "G_Aviator", 0.20
    };
    editorSubcategory = "TACU_Police_EdSubCat_I_Enforcer";
};

class TACU_Police_U_I_Enforcer_SMG_1: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (CPW)";
    editorPreview = QPATHTOF(ui\Police_U_I_Enforcer_SMG_1.jpg);
    weapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("30Rnd_9x21_Mag"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("30Rnd_9x21_Mag"), mag_3("CUP_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_Enforcer_SMG_2: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "SMG (P90)";
    editorPreview = QPATHTOF(ui\Police_U_I_Enforcer_SMG_2.jpg);
    weapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_4("50Rnd_570x28_SMG_03"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_4("50Rnd_570x28_SMG_03"), mag_3("CUP_15Rnd_9x19_M9")};
};

class TACU_Police_U_I_Enforcer_Breacher: TACU_Police_U_I_Enforcer_Rifleman {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_I_Enforcer_Breacher.jpg);
    weapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"bnae_m97_virtual", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_6("6Rnd_00_Buckshot_Magazine"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_6("6Rnd_00_Buckshot_Magazine"), mag_3("CUP_15Rnd_9x19_M9")};
};

// Vehicles
class TACU_Police_V_I_Offroad_Black: Offroad_01_unarmed_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    displayName = "Offroad (Police, Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_2"};
    editorPreview = QPATHTOF(ui\Police_V_I_Offroad_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Offroad_Black_co.paa),
        QPATHTOF(data\Police_V_Offroad_Black_co.paa)
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

class TACU_Police_V_I_Van_Cargo_Black: Van_02_vehicle_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    displayName = "Van (Cargo, Police, Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_1"};
    editorPreview = QPATHTOF(ui\Police_V_I_Van_Cargo_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_Black_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_Black_co.paa)
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

class TACU_Police_V_I_Van_Transport_Black: Van_02_transport_base_F {
    MACRO_CLEAR_VEHICLE_CARGO
    author = "Kresky";
    faction = "TACU_Police_I";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 2;
    displayName = "Van (Transport, Police, Black)";
    crew = "TACU_Police_U_I_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_I_Enforcer_SMG_2"};
    editorPreview = QPATHTOF(ui\Police_V_I_Van_Transport_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_Black_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_Black_co.paa)
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
