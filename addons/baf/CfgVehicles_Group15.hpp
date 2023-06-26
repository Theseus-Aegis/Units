// Group 15 (Urban)
class TACU_BAF_U_B_Urban_Scout: TACU_BAF_U_B_Arid_Scout {
    editorSubcategory = "TACU_BAF_EdSubCat_B_Group_15";
    uniformClass = "U_B_CTRG_Soldier_urb_1_F";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {"TACU_BAF_Helmet_EnhancedCombatHelmet_Urban", 1};
    CBA_facewearList[] = {
        "G_Balaclava_TI_blk_F", 0.25,
        "G_Balaclava_TI_G_blk_F", 0.25,
        "G_Bandanna_oli", 0.25,
        "G_Combat_Goggles_tna_F", 0.25
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Scout);
};

class TACU_BAF_U_B_Urban_Demolitions: TACU_BAF_U_B_Urban_Scout {
    displayName = "Demo Specialist";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_BAF_B_Demolitions_Fieldpack_Urban";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Demolitions);
};

class TACU_BAF_U_B_Urban_HeavyGunner: TACU_BAF_U_B_Urban_Scout {
    displayName = "Heavy Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_Stoner99",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_Stoner99",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_3("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_3("tacgt_AI_200Rnd_65x39_Belt"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_HeavyGunner);
};
class TACU_BAF_U_B_Urban_JTAC: TACU_BAF_U_B_Urban_Scout {
    displayName = "JTAC";
    uavHacker = 1;
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_JTAC);
};
class TACU_BAF_U_B_Urban_Marksman: TACU_BAF_U_B_Urban_Scout {
    displayName = "Marksman";
    role = "Marksman";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK417A2",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK417A2",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_20Rnd_762x51"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_20Rnd_762x51"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Marksman);
};
class TACU_BAF_U_B_Urban_Medic: TACU_BAF_U_B_Urban_Scout {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_BAF_B_Medic_Fieldpack_Urban";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Medic);
};
class TACU_BAF_U_B_Urban_LAT: TACU_BAF_U_B_Urban_Scout {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_BAF_B_LAT_Fieldpack_Urban";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "launch_MRAWS_green_F",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "launch_MRAWS_green_F",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_LAT);
};
class TACU_BAF_U_B_Urban_Shotgun: TACU_BAF_U_B_Urban_Scout {
    displayName = "Rifleman (Shotgun)";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_AA40",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_AA40",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_2("20Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_2("20Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Shotgun);
};
class TACU_BAF_U_B_Urban_TL: TACU_BAF_U_B_Urban_Scout {
    displayName = "Team Leader";
    icon = "iconManLeader";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_7("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_TL);
};

class TACU_BAF_U_B_Urban_Grenadier: TACU_BAF_U_B_Urban_Scout {
    displayName = "Grenadier";
    role = "Grenadier";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Urban",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Urban",
        "G_Balaclava_TI_blk_F"
    };
    weapons[] = {
        "TACU_BAF_W_Urban_HK416A5_GL",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Urban_HK416A5_GL",
        "TACU_BAF_W_Urban_Glock",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_5("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_5("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_5("tacgt_AI_30Rnd_556x45_STANAG"),
        mag_5("1Rnd_HE_Grenade_shell"),
        mag_2("tacgt_AI_17Rnd_9x19_Glock"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    EDITORPREVIEW(TACU_BAF_U_B_Urban_Grenadier);
};
