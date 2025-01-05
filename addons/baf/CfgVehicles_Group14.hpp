// Group 14 (Tropic)
class TACU_BAF_U_B_Tropic_Scout: TACU_BAF_U_B_Arid_Scout {
    editorSubcategory = "TACU_BAF_EdSubCat_B_Group_14";
    uniformClass = "U_B_CTRG_Soldier_F";
    items[] = {"NVGoggles_INDEP"};
    respawnItems[] = {"NVGoggles_INDEP"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    headgearList[] = {"TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic", 1};
    CBA_facewearList[] = {
        "G_Balaclava_TI_tna_F", 0.25,
        "G_Balaclava_TI_G_tna_F", 0.25,
        "G_Bandanna_oli", 0.25,
        "G_Combat_Goggles_tna_F", 0.25
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Scout);
};

class TACU_BAF_U_B_Tropic_Demolitions: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Demo Specialist";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    canDeactivateMines = 1;
    backpack = "TACU_BAF_B_Demolitions_Fieldpack_Tropic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Demolitions);
};

class TACU_BAF_U_B_Tropic_HeavyGunner: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Heavy Gunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "TACU_BAF_B_Heavygunner_Fieldpack_Tropic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_Stoner99",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_Stoner99",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_2("TACU_Magazine_200Rnd_65_Box"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_2("TACU_Magazine_200Rnd_65_Box"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_HeavyGunner);
};
class TACU_BAF_U_B_Tropic_JTAC: TACU_BAF_U_B_Tropic_Scout {
    displayName = "JTAC";
    uavHacker = 1;
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "B_UavTerminal",
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_JTAC);
};
class TACU_BAF_U_B_Tropic_Marksman: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Marksman";
    role = "Marksman";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK417A2",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK417A2",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_20Rnd_M1A"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Marksman);
};
class TACU_BAF_U_B_Tropic_Medic: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Paramedic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "TACU_BAF_B_Medic_Fieldpack_Tropic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_LightPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Medic);
};
class TACU_BAF_U_B_Tropic_LAT: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_BAF_B_LAT_Fieldpack_Tropic";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "launch_MRAWS_olive_F",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "launch_MRAWS_olive_F",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        "MRAWS_HEAT_F",
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        "MRAWS_HEAT_F",
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_LAT);
};
class TACU_BAF_U_B_Tropic_Shotgun: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Rifleman (Shotgun)";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_AA40",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_AA40",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_3("20Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    respawnMagazines[] = {
        mag_3("20Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_4("8Rnd_12Gauge_AA40_Pellets_lxWS"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Shotgun);
};
class TACU_BAF_U_B_Tropic_TL: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Team Leader";
    icon = "iconManLeader";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_TL);
};

class TACU_BAF_U_B_Tropic_Grenadier: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Grenadier";
    role = "Grenadier";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "TACU_BAF_Vest_HeavyPlateCarrier_Tropic",
        "TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic",
        "G_Balaclava_TI_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5_GL",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5_GL",
        "TACU_BAF_W_Tropic_P99",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8("TACU_Magazine_30Rnd_STANAG"),
        mag_10("1Rnd_HE_Grenade_shell"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Grenadier);
};

class TACU_BAF_U_B_Tropic_Sniper: TACU_BAF_U_B_Tropic_Scout {
    displayName = "Sniper";
    uniformClass = "U_B_FullGhillie_lsh";
    CBA_facewearList[] = {
        "G_Balaclava_TI_G_tna_F", 0.5,
        "G_Balaclava_TI_tna_F", 0.5
    };
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_rgr",
        "G_Balaclava_TI_G_tna_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_Chestrig_rgr",
        "G_Balaclava_TI_G_tna_F"
    };
    weapons[] = {
        "TACU_BAF_W_Tropic_Noreen",
        "TACU_BAF_W_Tropic_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_Noreen",
        "TACU_BAF_W_Tropic_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("10Rnd_338_Mag"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_10("10Rnd_338_Mag"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Sniper);
};

class TACU_BAF_U_B_Tropic_Spotter: TACU_BAF_U_B_Tropic_Sniper {
    displayName = "Spotter";
    weapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    respawnWeapons[] = {
        "TACU_BAF_W_Tropic_HK416A5",
        "TACU_BAF_W_Tropic_P99",
        "Binocular",
        "Throw",
        "Put"
    };
    magazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    respawnMagazines[] = {
        mag_10("TACU_Magazine_30Rnd_STANAG"),
        mag_2("TACU_Magazine_17Rnd_Walther"),
        mag_2("SmokeShell"),
        mag_2("MiniGrenade")
    };
    //EDITORPREVIEW(TACU_BAF_U_B_Tropic_Spotter);
};
