// Units - Takistan National Army
class TACU_Takistan_U_TNA_Major: TACU_Main_U_INDEP_Soldier_Base {
    author = "TyroneMF";
    displayName = "Major";
    faction = "TACU_TNA_I";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_TK_Officer";
    backpack = "";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Major.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_O_TK_OfficerBelt", "CUP_H_TK_Beret"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_O_TK_OfficerBelt", "CUP_H_TK_Beret"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_4("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_4("CUP_15Rnd_9x19_M9")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Officer";
};

class TACU_Takistan_U_TNA_Lieutenant: TACU_Takistan_U_TNA_Major {
    displayName = "Lieutenant";
    scope = 2;
    scopeCurator = 2;
    uniformClass = "CUP_U_O_TK_Green";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Lieutenant.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_RRV_TL", "CUP_H_TK_Beret"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_RRV_TL", "CUP_H_TK_Beret"};
    weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A2", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9")};
};

class TACU_Takistan_U_TNA_NCO: TACU_Takistan_U_TNA_Lieutenant {
    displayName = "NCO";
    scope = 2;
    scopeCurator = 2;
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_NCO.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags_OD", "CUP_H_Ger_M92_RGR"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags_OD", "CUP_H_Ger_M92_RGR"};
    weapons[] = {"CUP_arifle_M16A2", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_M16A2", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_2("SmokeShell")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Regular";
};

class TACU_Takistan_U_TNA_Rifleman: TACU_Takistan_U_TNA_NCO {
    displayName = "Rifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Rifleman.jpg);
};

class TACU_Takistan_U_TNA_Rifleman_02: TACU_Takistan_U_TNA_NCO {
    displayName = "Rifleman 2";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Rifleman_02.jpg);
    uniformClass = "CUP_U_O_TK_MixedCamo";
};

class TACU_Takistan_U_TNA_Rifleman_03: TACU_Takistan_U_TNA_NCO {
    displayName = "Rifleman 3";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Rifleman_03.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags", "CUP_H_Ger_M92_RGR"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PASGT_no_bags", "CUP_H_Ger_M92_RGR"};
};

class TACU_Takistan_U_TNA_Machinegunner: TACU_Takistan_U_TNA_NCO {
    displayName = "Machine-Gunner";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Machinegunner.jpg);
    backpack = "TACU_Takistan_B_TNA_LMG";
    weapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};
    magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
    respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
};

class TACU_Takistan_U_TNA_Pilot: TACU_Takistan_U_TNA_NCO {
    displayName = "Pilot";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Pilot.jpg);
    uniformClass = "CUP_U_B_USMC_PilotOverall";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PilotVest", "CUP_H_TK_PilotHelmet"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_PilotVest", "CUP_H_TK_PilotHelmet"};
    weapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_5("CUP_15Rnd_9x19_M9")};
    respawnMagazines[] = {mag_5("CUP_15Rnd_9x19_M9")};
};

// Units - Takistan National Army, Commandos.
class TACU_Takistan_U_TNA_Commandos_NCO: TACU_Takistan_U_TNA_Major {
    displayName = "Commando NCO";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_NCO.jpg);
    uniformClass = "Gen3_M81";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    backpack = "CUP_B_Kombat_Radio_Olive";
    weapons[] = {"TACU_Takistan_W_M4A3_Desert", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Takistan_W_M4A3_Desert", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    editorSubcategory = "TACU_Takistan_EdSubCat_Commandos";
};

class TACU_Takistan_U_TNA_Commandos_Breacher: TACU_Takistan_U_TNA_Commandos_NCO {
    displayName = "Commando Breacher";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_Breacher.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Grey", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive2", "CUP_H_OpsCore_Grey", "CUP_NVG_PVS15_black"};
    weapons[] = {"CUP_sgun_M1014_solidstock", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014_solidstock", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_8Rnd_B_Beneli_74Pellets"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("ACE_M84"), mag_4("SmokeShell")};
};

class TACU_Takistan_U_TNA_Commandos_Grenadier: TACU_Takistan_U_TNA_Commandos_NCO {
    displayName = "Commando Grenadier";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_Grenadier.jpg);
    backpack = "CUP_B_Kombat_Olive";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_PMC_CIRAS_Coyote_Grenadier", "CUP_H_OpsCore_Tan", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_PMC_CIRAS_Coyote_Grenadier", "CUP_H_OpsCore_Tan", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_Takistan_W_M4A1_GL"};
    respawnWeapons[] = {"TACU_Takistan_W_M4A1_GL"};
    magazines[] = {mag_8("CUP_1Rnd_HEDP_M203"), mag_8("CUP_30Rnd_556x45_Stanag")};
    respawnMagazines[] = {mag_8("CUP_1Rnd_HEDP_M203"), mag_8("CUP_30Rnd_556x45_Stanag")};
};

class TACU_Takistan_U_TNA_Commandos_Machinegunner: TACU_Takistan_U_TNA_Commandos_NCO {
    displayName = "Commando Machine-Gunner";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_Machinegunner.jpg);
    backpack = "TACU_Takistan_B_TNA_LMG";
    weapons[] = {"CUP_lmg_m249_para", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_m249_para", "Throw", "Put"};
    magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", mag_3("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249", mag_3("HandGrenade"), mag_2("SmokeShell")};
};
    
 class TACU_Takistan_U_TNA_Commandos_Medic: TACU_Takistan_U_TNA_Commandos_NCO {
    displayName = "Commando Medic";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_Medic.jpg);
    backpack = "tacs_Backpack_Kitbag_Medic_Sage";
    attendant = 1;
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive4", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive4", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_Takistan_W_M4A3", "CUP_hgun_M9", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Takistan_W_M4A3", "CUP_hgun_M9", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell")};
};

class TACU_Takistan_U_TNA_Commandos_Rifleman: TACU_Takistan_U_TNA_Commandos_NCO {
    displayName = "Commando Rifleman";
    editorPreview = QPATHTOF(ui\Takistan_U_TNA_Commandos_Rifleman.jpg);
    backpack = "CUP_B_Kombat_Olive";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_V_B_Ciras_Olive", "CUP_H_OpsCore_Spray", "CUP_NVG_PVS15_black"};
    weapons[] = {"TACU_Takistan_W_M4A1", "CUP_hgun_M9", "CUP_launch_M136_Loaded", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Takistan_W_M4A1", "CUP_hgun_M9", "CUP_launch_M136_Loaded", "Throw", "Put"};
    magazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell"), "CUP_M136_M"};
    respawnMagazines[] = {mag_8("CUP_30Rnd_556x45_Stanag"), mag_3("CUP_15Rnd_9x19_M9"), mag_3("HandGrenade"), mag_2("SmokeShell"), "CUP_M136_M"};
};

// Vehicles - TNA
class CUP_B_HMMWV_M2_USMC;
class TACU_Takistan_V_TNA_HMMWV_M2: CUP_B_HMMWV_M2_USMC {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (M2)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_HMMWV_M2.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_co.paa"
    };
};

class CUP_B_M1151_M2_USA;
class TACU_Takistan_V_TNA_M1151_M2: CUP_B_M1151_M2_USA {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M1151 (M2)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_M1151_M2.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_canvas_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_hood_canvas_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_regular_1_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_parts_1_ca.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_gpk_tower_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_wl_01_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_wl_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_wl_co.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa"
    };
};

class CUP_B_M1151_Deploy_NATO_T;
class TACU_Takistan_V_TNA_M1151_M2_Deploy: CUP_B_M1151_Deploy_NATO_T {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M1151 (M2) Deployment";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_M1151_M2_Deploy.jpg);
};

class CUP_B_HMMWV_Unarmed_USMC;
class TACU_Takistan_V_TNA_HMMWV_Unarmed: CUP_B_HMMWV_Unarmed_USMC {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (Unarmed)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_HMMWV_Unarmed.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_co.paa"
    };
};

class CUP_B_HMMWV_Transport_NATO_T;
class TACU_Takistan_V_TNA_HMMWV_Transport: CUP_B_HMMWV_Transport_NATO_T {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "HMMWV (Transport)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_HMMWV_Transport.jpg);
};

class CUP_O_Kamaz_RU;
class TACU_Takistan_V_TNA_Kamaz: CUP_O_Kamaz_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Kamaz 5350";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_Kamaz.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_00.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_01.paa"
    };
};

class CUP_O_Kamaz_Open_RU;
class TACU_Takistan_V_TNA_Kamaz_Open: CUP_O_Kamaz_Open_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Kamaz 5350 (Open)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_Kamaz_Open.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_00.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_01.paa"
    };
};

class CUP_O_Kamaz_Reammo_RU;
class TACU_Takistan_V_TNA_Kamaz_Ammo: CUP_O_Kamaz_Reammo_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Kamaz 5350 (Ammo)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_Kamaz_Ammo.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_00.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_01.paa"
    };
};

class CUP_O_Kamaz_Refuel_RU;
class TACU_Takistan_V_TNA_Kamaz_Fuel: CUP_O_Kamaz_Refuel_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Kamaz 5350 (Fuel)";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_Kamaz_Fuel.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\extra\kamaz_green_00.paa",
        "\CUP\WheeledVehicles\CUP_WheeledVehicles_kamaz\data\kamaz_fuel_chkdz_co.paa"
    };
};

class CUP_I_M113_Med_UN;
class TACU_Takistan_V_TNA_M113_Med: CUP_I_M113_Med_UN {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M113A3 Ambulance";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_M113_Med.jpg);
    hiddenSelectionsTextures[] = {
        "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa",
        "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"
    };
};

class CUP_C_Mi17_Civilian_RU;
class TACU_Takistan_V_TNA_Mi17: CUP_C_Mi17_Civilian_RU {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "Mi17";
    crew = "TACU_Takistan_U_TNA_Pilot";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Pilot"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_Mi17.jpg);
    hiddenSelectionsTextures[] = {
        "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_body_IND_CO.paa",
        "\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa",
        "\a3\data_f\clear_empty.paa",
        "\CUP\AirVehicles\CUP_AirVehicles_Mi8\Data\mi8_decals_CA.paa"
    };
};

// Vehicles - TNA Turrets.
class CUP_B_M2StaticMG_US;
class TACU_Takistan_V_TNA_M2_Static: CUP_B_M2StaticMG_US {
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M2 Machine Gun";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_M2_Static.jpg);
};

class CUP_B_M2StaticMG_MiniTripod_US;
class TACU_Takistan_V_TNA_M2_Mini_Static: CUP_B_M2StaticMG_MiniTripod_US {
    faction = "TACU_TNA_I";
    side = 2;
    displayName = "M2 Machine Gun Minitripod";
    crew = "TACU_Takistan_U_TNA_Rifleman";
    typicalCargo[] = {"TACU_Takistan_U_TNA_Rifleman"};
    editorPreview = QPATHTOF(ui\Takistan_V_TNA_M2_Mini_Static.jpg);
};
