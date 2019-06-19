// Units - Police (Counter-Terrorism)
class TACU_Police_U_O_CT_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Kresky";
    displayName = "Rifleman";
    faction = "TACU_Police_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "NoGlasses"};
    genericNames = "CUP_Names_RussianMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Police_Uniform_Combat_Green";
    backpack = "";
    editorPreview = QPATHTOF(ui\Police_U_O_CT_Rifleman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "CUP_RUS_Balaclava_grn", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", "CUP_RUS_Balaclava_grn", "TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AS_VAL", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_20Rnd_9x39_SP5_VSS_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    headgearList[] = {
        "TACU_Police_Helmet_PASGT_Neck_PoliceGreen", 1
    };
    TACU_allowedFacewear[] = {
        "CUP_RUS_Balaclava_grn", 0.30,
        "CUP_RUS_Balaclava_blk", 0.30,
        "G_Balaclava_TI_G_blk_F", 0.30
    };
    editorSubcategory = "TACU_Police_EdSubCat_O_CT";
};

class TACU_Police_U_O_CT_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    editorPreview = QPATHTOF(ui\Police_U_O_CT_SMG_1.jpg);
    weapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vityaz_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x19AP_Vityaz"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x19AP_Vityaz"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_SMG_2: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vikhr)";
    editorPreview = QPATHTOF(ui\Police_U_O_CT_SMG_2.jpg);
    weapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Vikhr_Grip", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_Breacher: TACU_Police_U_O_CT_Rifleman {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_O_CT_Breacher.jpg);
    weapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_8("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
    respawnMagazines[] = {mag_8("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_3("16Rnd_9x21_Mag"), mag_2("ACE_M84"), "CUP_HandGrenade_RGD5", "SmokeShell"};
};

class TACU_Police_U_O_CT_Marksman: TACU_Police_U_O_CT_Rifleman {
    displayName = "Marksman";
    editorPreview = QPATHTOF(ui\Police_U_O_CT_Marksman.jpg);
    weapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Police_W_Dragunov", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_6("CUP_10Rnd_762x54_SVD_M"), mag_3("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_6("CUP_10Rnd_762x54_SVD_M"), mag_3("16Rnd_9x21_Mag")};
};

// Units - Police (Enforcers)
class TACU_Police_U_O_Enforcer_SMG_1: TACU_Police_U_O_CT_Rifleman {
    displayName = "SMG (Vityaz)";
    editorPreview = QPATHTOF(ui\Police_U_O_Enforcer_SMG_1.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_Beret", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceGreen"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_SLA_Beret", "CUP_G_Oakleys_Drk", "TACU_Police_Vest_PlateCarrier_PoliceGreen"};
    weapons[] = {"CUP_smg_vityaz", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_vityaz", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_9x19AP_Vityaz"), mag_2("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_9x19AP_Vityaz"), mag_2("16Rnd_9x21_Mag")};
    headgearList[] = {
        "CUP_H_SLA_Beret", 0.80,
        "CUP_H_PMC_Cap_Tan", 0.50,
        "CUP_H_PMC_Cap_PRR_Grey", 0.50,
        "CUP_H_PMC_Beanie_Khaki", 0.20,
        "CUP_H_SLA_BeanieGreen", 0.20,
        "CUP_H_PMC_Beanie_Black", 0.20,
    };
    TACU_allowedFacewear[] = {
        "CUP_G_Oakleys_Drk", 0.25,
        "CUP_G_Oakleys_Embr", 0.25,
        "CUP_G_Oakleys_Clr", 0.25,
        "G_Shades_Black", 0.25
    };
    editorSubcategory = "TACU_Police_EdSubCat_O_Enforcer";
};

class TACU_Police_U_O_Enforcer_SMG_2: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Bizon)";
    editorPreview = QPATHTOF(ui\Police_U_O_Enforcer_SMG_2.jpg);
    weapons[] = {"CUP_smg_bizon", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_bizon", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), mag_2("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_4("CUP_64Rnd_9x19_Bizon_M"), mag_2("16Rnd_9x21_Mag")};
};

class TACU_Police_U_O_Enforcer_SMG_3: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "SMG (Vikhr)";
    editorPreview = QPATHTOF(ui\Police_U_O_Enforcer_SMG_3.jpg);
    weapons[] = {"CUP_arifle_SR3M_Vikhr", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_2("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_4("CUP_30Rnd_9x39_SP5_VIKHR_M"), mag_2("16Rnd_9x21_Mag")};
};

class TACU_Police_U_O_Enforcer_Breacher: TACU_Police_U_O_Enforcer_SMG_1 {
    displayName = "Breacher";
    editorPreview = QPATHTOF(ui\Police_U_O_Enforcer_Breacher.jpg);
    weapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_Saiga12K", "hgun_Rook40_F", "Throw", "Put"};
    magazines[] = {mag_4("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_2("16Rnd_9x21_Mag")};
    respawnMagazines[] = {mag_4("CUP_8Rnd_B_Saiga12_74Pellets_M"), mag_2("16Rnd_9x21_Mag")};
};

// Vehicles
class TACU_Police_V_O_BRDM2_BlackRus: CUP_O_BRDM2_RUS {
    faction = "TACU_Police_O";
    side = 0;
    displayName = "BRDM-2 (Police, Black)";
    crew = "TACU_Police_U_O_CT_Rifleman";
    typicalCargo[] = {"TACU_Police_U_O_CT_Rifleman"};
    editorPreview = QPATHTOF(ui\Police_V_O_BRDM2_BlackRus.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_BRDM2_BlackRus_co.paa),
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"
    };
};

class TACU_Police_V_O_Offroad_Black: Offroad_01_unarmed_base_F {
    author = "Kresky";
    faction = "TACU_Police_O";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 0;
    displayName = "Offroad (Police, Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_1";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_2"};
    editorPreview = QPATHTOF(ui\Police_V_O_Offroad_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Offroad_BlackRus_co.paa),
        QPATHTOF(data\Police_V_Offroad_BlackRus_co.paa)
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

class TACU_Police_V_O_Van_Cargo_Black: Van_02_vehicle_base_F {
    author = "Kresky";
    faction = "TACU_Police_O";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 0;
    displayName = "Van (Cargo, Police, Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_2";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_3"};
    editorPreview = QPATHTOF(ui\Police_V_O_Van_Cargo_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_BlackRus_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_BlackRus_co.paa)
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

class TACU_Police_V_O_Van_Transport_Black: Van_02_transport_base_F {
    author = "Kresky";
    faction = "TACU_Police_O";
    scope = 2;
    scopeCurator = 2;
    forceInGarage = 1;
    side = 0;
    displayName = "Van (Transport, Police, Black)";
    crew = "TACU_Police_U_O_Enforcer_SMG_3";
    typicalCargo[] = {"TACU_Police_U_O_Enforcer_SMG_1"};
    editorPreview = QPATHTOF(ui\Police_V_O_Van_Transport_Black.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\Police_V_Van_BlackRus_co.paa),
        "\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
        "\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
        QPATHTOF(data\Police_V_Van_BlackRus_co.paa)
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
