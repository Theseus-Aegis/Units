// Group 13 (Arid)
class TACU_BAF_U_B_Arid_Scout: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Scout";
    faction = "TACU_BAF_B";
    editorSubcategory = "TACU_BAF_EdSubCat_B_Group_13";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENGB_F", "Head_NATO", "NoGlasses"};
    genericNames = "TACU_BritishNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "U_B_CTRG_Soldier_Arid_F";
    items[] = {"NVGoggles"};
    respawnItems[] = {"NVGoggles"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"TACU_BAF_Helmet_EnhancedCombatHelmet_Arid", 1};
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 0.25,
        "G_Balaclava_TI_G_blk_F", 0.25,
        "G_Bandanna_tan", 0.25,
        "G_Combat", 0.25
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Scout);
};

class TACU_BAF_U_B_Arid_Demolitions: TACU_BAF_U_B_Arid_Scout {
    displayName = "Demo Specialist";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_BAF_B_Demolitions_Fieldpack_Arid";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_12("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_12("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Demolitions);
};

class TACU_BAF_U_B_Arid_HeavyGunner: TACU_BAF_U_B_Arid_Scout {
    displayName = "Heavy Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_BAF_B_Heavygunner_Fieldpack_Arid";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_Stoner99",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_Stoner99",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_2("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_2("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_HeavyGunner);
};
class TACU_BAF_U_B_Arid_JTAC: TACU_BAF_U_B_Arid_Scout {
    displayName = "JTAC";
    uavHacker = 1;
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_JTAC);
};
class TACU_BAF_U_B_Arid_Marksman: TACU_BAF_U_B_Arid_Scout {
    displayName = "Marksman";
    role = "Marksman";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK417A2",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK417A2",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("tacgt_AI_20Rnd_762x51"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("tacgt_AI_20Rnd_762x51"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Marksman);
};
class TACU_BAF_U_B_Arid_Medic: TACU_BAF_U_B_Arid_Scout {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_BAF_B_Medic_Fieldpack_Arid";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Medic);
};
class TACU_BAF_U_B_Arid_LAT: TACU_BAF_U_B_Arid_Scout {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_BAF_B_LAT_Fieldpack_Arid";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "launch_MRAWS_sand_F",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "launch_MRAWS_sand_F",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_LAT);
};
class TACU_BAF_U_B_Arid_Shotgun: TACU_BAF_U_B_Arid_Scout {
    displayName = "Rifleman (Shotgun)";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_AA40",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_AA40",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_3("20Rnd_12Gauge_AA40_Pellets_Tan_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_Snake_lxWS"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_3("20Rnd_12Gauge_AA40_Pellets_Tan_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_Snake_lxWS"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Shotgun);
};
class TACU_BAF_U_B_Arid_TL: TACU_BAF_U_B_Arid_Scout {
    displayName = "Team Leader";
    icon = "iconManLeader";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_TL);
};

class TACU_BAF_U_B_Arid_Grenadier: TACU_BAF_U_B_Arid_Scout {
    displayName = "Grenadier";
    role = "Grenadier";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Arid",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Arid",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5_GL",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5_GL",
        "TACU_BAF_W_Arid_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Grenadier);
};

class TACU_BAF_U_B_Arid_Sniper: TACU_BAF_U_B_Arid_Scout {
    displayName = "Sniper";
    uniformClass = "U_B_FullGhillie_ard";
    CBA_facewearList[] = {
        "G_Balaclava_TI_G_blk_F", 0.5,
        "G_Balaclava_TI_blk_F", 0.5
    };
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_khk",
        "G_Balaclava_TI_G_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_khk",
        "G_Balaclava_TI_G_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Arid_Noreen",
        "TACU_BAF_W_Arid_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_Noreen",
        "TACU_BAF_W_Arid_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("10Rnd_338_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_10("10Rnd_338_Mag"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Sniper);
};

class TACU_BAF_U_B_Arid_Spotter: TACU_BAF_U_B_Arid_Sniper {
    displayName = "Spotter";
    weapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Arid_HK416A5",
        "TACU_BAF_W_Arid_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_10("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Arid_Spotter);
};

class TACU_BAF_U_B_Pilot: TACU_BAF_U_B_Arid_Scout {
    displayName = "Pilot";
    uniformClass = "tacs_Uniform_HeliPilotCoverall_Black";
    backpack = "B_Parachute";
    engineer = 1;
    role = "Crewman";
    headgearList[] = {"H_PilotHelmetHeli_B", 1};
    CBA_facewearList[] = {};
    items[] = {"NVGoggles_OPFOR"};
    respawnItems[] = {"NVGoggles_OPFOR"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "H_PilotHelmetHeli_B",
        "G_Bandanna_tan"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Arid",
        "H_PilotHelmetHeli_B",
        "G_Bandanna_tan"
    };
    weapons[] = {
        "TACU_BAF_W_MP5SD",
        "TACU_BAF_W_Urban_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_MP5SD",
        "TACU_BAF_W_Urban_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_4("tacgt_AI_30Rnd_9x19_MP5"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_4("tacgt_AI_30Rnd_9x19_MP5"),
        mag_2("tacgt_AI_17Rnd_9x19_Walther"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Pilot);
};
