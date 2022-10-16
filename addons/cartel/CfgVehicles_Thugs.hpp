class TACU_Cartel2_U_O_Thug_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Thug (P90)";
    faction = "TACU_Cartel_O";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Thugs";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_01.jpg);
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"SMG_03C_black", "Throw", "Put"};
    respawnWeapons[] = {"SMG_03C_black", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_50Rnd_57x28_Ball"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_50Rnd_57x28_Ball"), mag_2("HandGrenade")};
    headgearList[] = {
        "H_Cap_blk", 0.33,
        "H_Cap_oli", 0.33,
        "H_ShemagOpen_tan", 0.33,
        "H_Shemag_olive", 0.33,
        "H_Bandanna_gry", 0.33,
        "H_Bandanna_blu", 0.33
    };
    CBA_facewearList[] = {
        "G_Aviator", 1,
        "G_Bandanna_beast", 1,
        "G_Bandanna_blk", 1,
        "G_Bandanna_shades", 1,
        "G_Bandanna_sport", 1,
        "G_Sport_Blackred", 1,
        "G_Balaclava_blk", 1
    };
};
class TACU_Cartel2_U_O_Thug_Rifleman_02: TACU_Cartel2_U_O_Thug_Rifleman_01 {
    displayName = "Thug (MP5)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_02.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_02";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"CUP_smg_MP5A5_Rail_VFG", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP5A5_Rail_VFG", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_9x19_EPR_MP5"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_9x19_EPR_MP5"), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_03: TACU_Cartel2_U_O_Thug_Rifleman_02 {
    displayName = "Thug (AKS-74U)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_03.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_03";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"arifle_AKS_F", "Throw", "Put"};
    respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_545x39_EPR_Black"), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_04: TACU_Cartel2_U_O_Thug_Rifleman_03 {
    displayName = "Thug (M79/MAC-10)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_04.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_04";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"CUP_glaunch_M79", "CUP_hgun_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"CUP_glaunch_M79", "CUP_hgun_Mac10", "Throw", "Put"};
    magazines[] = {mag_7("1Rnd_HE_Grenade_shell"), mag_6(CUP_30Rnd_45ACP_MAC10_M), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("1Rnd_HE_Grenade_shell"), mag_6(CUP_30Rnd_45ACP_MAC10_M), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_05: TACU_Cartel2_U_O_Thug_Rifleman_04 {
    displayName = "Thug (M1014)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_05.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_05";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    respawnWeapons[] = {"CUP_sgun_M1014_solidstock", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_8Rnd_P_000"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_8Rnd_P_000"), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_06: TACU_Cartel2_U_O_Thug_Rifleman_05 {
    displayName = "Thug (MP7)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_06.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_06";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"CUP_smg_MP7", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_MP7", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_40Rnd_46x30_EPR"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_40Rnd_46x30_EPR"), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_07: TACU_Cartel2_U_O_Thug_Rifleman_06 {
    displayName = "Thug (Vikhr)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_07.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_03";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"CUP_arifle_SR3M_Vikhr", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_SR3M_Vikhr", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_9x39_EPR"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_9x39_EPR"), mag_2("HandGrenade")};
};
class TACU_Cartel2_U_O_Thug_Rifleman_08: TACU_Cartel2_U_O_Thug_Rifleman_07 {
    displayName = "Thug (Scorpion Evo)";
    editorPreview = QPATHTOF(ui\Cartel2_U_O_Thug_Rifleman_08.jpg);
    uniformClass = "TACU_Uniform_O_W_Cartel_Thug_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_TacVest_blk"};
    weapons[] = {"SMG_02_F", "Throw", "Put"};
    respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_30Rnd_9x19_AP"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_30Rnd_9x19_AP"), mag_2("HandGrenade")};
};

// Vehicles
class TACS_Offroad_Base;
class TACS_Offroad_I_Black: TACS_Offroad_Base {
    class EventHandlers;
};
class TACS_Cartel_V_O_Thug_Offroad: TACS_Offroad_I_Black {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Cartel_O";
    side = 0;
    crew = "TACU_Cartel2_U_O_Thug_Rifleman_01";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Thugs_Vehicles";
    editorPreview = QPATHTOF(ui\TACS_Cartel_V_O_Thug_Offroad.jpg);

    class PlateInfos {
        color[] = {0, 0, 0, 0.75};
        name = "spz";
    };

    class EventHandlers: EventHandlers {
        init = "if  (local (_this select 0)) then {[_this select 0,['Black',1],['HideDoor1',0,'HideDoor2',0,'HideDoor3',0,'HideBackpacks',1,'HideBumper1',1,'HideBumper2',1,'HideConstruction',0,'hidePolice',1,'HideServices',1,'BeaconsStart',0,'BeaconsServicesStart',0]] call BIS_fnc_initVehicle;};";
    };
};

class TACS_Offroad_Armed_Base;
class TACS_Offroad_I_Armed_Black: TACS_Offroad_Armed_Base {
    class EventHandlers;
};
class TACU_Cartel_V_O_Thug_Offroad_Armed: TACS_Offroad_I_Armed_Black {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Cartel_O";
    side = 0;
    crew = "TACU_Cartel2_U_O_Thug_Rifleman_01";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Thugs_Vehicles";
    editorPreview = QPATHTOF(ui\Cartel_V_O_Thug_Offroad_Armed.jpg);

    class PlateInfos {
        color[] = {0, 0, 0, 0.75};
        name = "spz";
    };

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then {[_this select 0,['Black',1],['Hide_Shield',0,'Hide_Rail',1,'HideDoor1',0,'HideDoor2',0,'HideDoor3',0,'HideBackpacks',1,'HideBumper1',1,'HideBumper2',0,'HideConstruction',0]] call BIS_fnc_initVehicle;};";
    };
};

class TACU_Cartel_V_O_Thug_Van_Transport: TACU_Cartel_V_O_Grunt_Van_Transport {
    crew = "TACU_Cartel2_U_O_Thug_Rifleman_01";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Thugs_Vehicles";
};

