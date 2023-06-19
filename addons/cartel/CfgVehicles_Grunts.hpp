// Grunts, Lowest tier with no armour and SMGs/Handguns.
class TACU_Cartel2_U_O_Grunt_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Grunt (Uzi)";
    faction = "TACU_Cartel_O";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Grunts";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageGRE_F", "Head_Cartel", "NoGlasses"};
    genericNames = "GreekMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_01";
    linkedItems[] = {DEFAULT_ITEMS_RADIO};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO};
    weapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_UZI", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_32Rnd_9x19_UZI"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_32Rnd_9x19_UZI"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_01)
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

class TACU_Cartel2_U_O_Grunt_Rifleman_02: TACU_Cartel2_U_O_Grunt_Rifleman_01 {
    displayName = "Grunt (TEC-9)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_02";
    weapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_TEC9_FA", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_32Rnd_9x19_TEC9"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_02)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_03: TACU_Cartel2_U_O_Grunt_Rifleman_02 {
    displayName = "Grunt (Glock 18)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_03";
    weapons[] = {"tacgt_hgun_Glock18_Black", "Throw", "Put"};
    respawnWeapons[] = {"tacgt_hgun_Glock18_Black", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_17Rnd_9x19_Glock"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_17Rnd_9x19_Glock"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_03)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_04: TACU_Cartel2_U_O_Grunt_Rifleman_03 {
    displayName = "Grunt (Sa. VZ 61)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_04";
    weapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
    magazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("CUP_20Rnd_B_765x17_Ball_M"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_04)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_05: TACU_Cartel2_U_O_Grunt_Rifleman_04 {
    displayName = "Rifleman (MAC-10)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_05";
    weapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
    respawnWeapons[] = {"CUP_smg_Mac10", "Throw", "Put"};
    magazines[] = {mag_7("tacgt_AI_30Rnd_45ACP_MAC10"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_7("tacgt_AI_30Rnd_45ACP_MAC10"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_05)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_06: TACU_Cartel2_U_O_Grunt_Rifleman_05 {
    displayName = "Rifleman (CPW)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_06";
    weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
    magazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_4("tacgt_AI_30Rnd_9x19"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_06)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_07: TACU_Cartel2_U_O_Grunt_Rifleman_06 {
    displayName = "Rifleman (Sawed-Off)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_03";
    weapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F", "Throw", "Put"};
    magazines[] = {mag_9("tacgt_2Rnd_P_000"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_9("tacgt_2Rnd_P_000"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_07)
};

class TACU_Cartel2_U_O_Grunt_Rifleman_08: TACU_Cartel2_U_O_Grunt_Rifleman_07 {
    displayName = "Rifleman (Micro-UZI)";
    uniformClass = "TACU_Uniform_O_W_Cartel_Grunt_06";
    weapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    respawnWeapons[] = {"CUP_hgun_MicroUzi", "Throw", "Put"};
    magazines[] = {mag_5("tacgt_AI_32Rnd_9x19_UZI"), mag_2("HandGrenade")};
    respawnMagazines[] = {mag_5("tacgt_AI_32Rnd_9x19_UZI"), mag_2("HandGrenade")};
    //EDITORPREVIEW(Cartel2_U_O_Grunt_Rifleman_08)
};

// Vehicles
class Offroad_01_civil_base_F;
class C_Offroad_01_F: Offroad_01_civil_base_F {
    class EventHandlers;
};

class TACU_Cartel_V_O_Grunt_Offroad: C_Offroad_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Cartel_O";
    side = 0;
    crew = "TACU_Cartel2_U_O_Grunt_Rifleman_01";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Grunts_Vehicles";
    //EDITORPREVIEW(Cartel_V_O_Grunt_Offroad)

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then {[_this select 0,['Bluecustom',1],['HideDoor1',0,'HideDoor2',0,'HideDoor3',0,'HideBackpacks',1,'HideBumper1',1,'HideBumper2',1,'HideConstruction',0,'hidePolice',1,'HideServices',1,'BeaconsStart',0,'BeaconsServicesStart',0]] call BIS_fnc_initVehicle;};";
    };
};

class Van_02_transport_base_F ;
class TACS_Van_Transport_Base: Van_02_transport_base_F  {
    class EventHandlers;
};
class TACU_Cartel_V_O_Grunt_Van_Transport: TACS_Van_Transport_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    scope = 2;
    scopeCurator = 2;
    faction = "TACU_Cartel_O";
    side = 0;
    crew = "TACU_Cartel2_U_O_Grunt_Rifleman_01";
    editorSubcategory = "TACU_Cartel_EdSubCat_O_Grunts_Vehicles";
    //EDITORPREVIEW(Cartel_V_O_Grunt_Van_Transport)

    class EventHandlers: EventHandlers {
        init = "if (local (_this select 0)) then {[_this select 0,['Black',1],['Door_1_source',0,'Door_2_source',0,'Door_3_source',0,'Door_4_source',0,'Hide_Door_1_source',0,'Hide_Door_2_source',0,'Hide_Door_3_source',0,'Hide_Door_4_source',0,'lights_em_hide',0,'ladder_hide',0,'spare_tyre_holder_hide',0,'spare_tyre_hide',0,'reflective_tape_hide',1,'roof_rack_hide',1,'LED_lights_hide',1,'sidesteps_hide',1,'rearsteps_hide',0,'side_protective_frame_hide',0,'front_protective_frame_hide',1,'beacon_front_hide',1,'beacon_rear_hide',1]] call BIS_fnc_initVehicle;};";
    };
};
