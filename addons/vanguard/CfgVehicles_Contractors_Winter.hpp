// Units - Vanguard Contractors Winter
class TACU_Vanguard_U_Contractor_Winter_Rifleman_01: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman (HK416)";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_White", "CUP_FR_NeckScarf4", "CUP_V_PMC_CIRAS_Winter_TL"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_White", "CUP_FR_NeckScarf4", "CUP_V_PMC_CIRAS_Winter_TL"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag_red"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_red"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_White", 1
    };
    TACU_allowedFacewear[] = {
        "CUP_FR_NeckScarf4", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors_Winter";
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Rifleman_01.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Rifleman_02: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AK12)";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"arifle_AK12_F", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AK12_F", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Rifleman_02.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Rifleman_AT: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Rifleman (AT)";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "launch_MRAWS_green_rail_F", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("CUP_18Rnd_9x19_Phantom"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("CUP_18Rnd_9x19_Phantom"), "MRAWS_HEAT_F", mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Grenadier: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Grenadier";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_556x45_Stanag_green"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag_green"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Grenadier.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Marksman: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Marksman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_03_blk_MOS_Pointer_Bipod_F", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Marksman.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_TeamLeader: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Team Leader";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"TACU_Vanguard_W_MX_Black", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_Black", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("CUP_18Rnd_9x19_Phantom"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_TeamLeader.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Autorifleman: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Autorifleman";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    weapons[] = {"TACU_Vanguard_W_Stoner_Black", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_Stoner_Black", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("CUP_18Rnd_9x19_Phantom")};
    respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("CUP_18Rnd_9x19_Phantom")};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Autorifleman.jpg);
};

class TACU_Vanguard_U_Contractor_Winter_Medic: TACU_Vanguard_U_Contractor_Winter_Rifleman_01 {
    displayName = "Medic";
    uniformClass = "tacs_Uniform_Combat_LS_WS_WP_WB";
    backpack = "tacs_Backpack_Kitbag_Medic_White";
    weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "CUP_hgun_Phantom", "Throw", "Put"};
    magazines[] = {mag_4("30Rnd_556x45_Stanag_red"), mag_2("CUP_18Rnd_9x19_Phantom"), "SmokeShell"};
    respawnMagazines[] = {mag_4("30Rnd_556x45_Stanag_red"), mag_2("CUP_18Rnd_9x19_Phantom"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Winter_Medic.jpg);
};