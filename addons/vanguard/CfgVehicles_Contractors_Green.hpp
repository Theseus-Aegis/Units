// Units - Vanguard Contractors Green
class TACU_Vanguard_U_Contractor_Green_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (F2000)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "CUP_FR_NeckScarf", "V_PlateCarrier2_rgr_noflag_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetSpecB", "CUP_FR_NeckScarf", "V_PlateCarrier2_rgr_noflag_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "H_HelmetSpecB", 1
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors1";
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Rifleman_01.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_02: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"arifle_AK12_lush_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_lush_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Rifleman_02.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Rifleman_AT: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Rifleman (AT)";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Grenadier: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Grenadier";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_HK416GL_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag_green"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_green"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Grenadier.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Marksman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Marksman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_SIG556_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Marksman.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Driver: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Driver";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Driver.jpg);
};

class TACU_Vanguard_U_Contractor_Green_TeamLeader: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Team Leader";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_MX_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_khaki_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_TeamLeader.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Autorifleman: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Autorifleman";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    weapons[] = {"TACU_Vanguard_W_Stoner_Black", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_Stoner_Black", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Autorifleman.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Medic: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Medic";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "tacs_Backpack_Kitbag_Medic_Sage";
    weapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Medic.jpg);
};

class TACU_Vanguard_U_Contractor_Green_Engineer: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Engineer";
    uniformClass = "tacs_Uniform_Garment_RS_GS_GP_BB";
    backpack = "I_Fieldpack_oli_Repair";
    weapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_CTAR_Green", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Green_Engineer.jpg);
};

class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Green_Rifleman_01 {
    displayName = "Pilot";
    uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
    backpack = "B_Parachute";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
    respawnMagazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_U_Contractor_Pilot.jpg);
};

// Vehicles - Vanguard PMC
class TACU_Vanguard_V_UH80_Ghosthawk: B_Heli_Transport_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "UH-80 Ghosthawk";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext01_CO.paa), QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext02_CO.paa)};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_UH80_Ghosthawk.jpg);
};

class TACU_Vanguard_V_AH9_Pawnee: B_Heli_Light_01_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "AH-9 Pawnee";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AH9_Pawnee_CO.paa)};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_AH9_Pawnee.jpg);
};

class TACU_Vanguard_V_Offroad_Armed: tacs_Offroad_B_Armed_Black {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Offroad (Armed)";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Offroad_Armed.jpg);
};

class TACU_Vanguard_V_Dagor_Green: tacs_Polaris_B_Green {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Polaris Dagor (Green)";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Dagor_Green.jpg);
};

class TACU_Vanguard_V_Dagor_Armed_Green: tacs_Polaris_B_Armed_Green {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Polaris Dagor (XM312) Green";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Dagor_Armed_Green.jpg);
};
class TACU_Vanguard_V_AFV4_Gorgon: I_APC_Wheeled_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "AFV-4 Gorgon (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AFV4_Gorgon_CO.paa), "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_AFV4_Gorgon.jpg);
};

class TACU_Vanguard_V_Hunter: B_MRAP_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Hunter (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Hunter_ext01_CO.paa), QPATHTOF(data\Vanguard_V_Hunter_ext02_CO.paa)};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Hunter.jpg);
};

class TACU_Vanguard_V_Dagor_Tan: tacs_Polaris_B_Tan {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Polaris Dagor Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Dagor_Tan.jpg);
};

class TACU_Vanguard_V_Dagor_Armed_Tan: tacs_Polaris_B_Armed_Tan {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Polaris Dagor (XM312) Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Dagor_Armed_Tan.jpg);
};
class TACU_Vanguard_V_Strider: I_MRAP_03_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    displayName = "Strider";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Strider_CO.paa)};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Strider.jpg);
};

class TACU_Vanguard_V_Armed_Qilin: O_T_LSV_02_armed_black_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Qilin (Armed)";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Armed_Qilin.jpg);
};

class TACU_Vanguard_V_Qilin: O_T_LSV_02_unarmed_black_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Qilin";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\TACU_Vanguard_V_Qilin.jpg);
};