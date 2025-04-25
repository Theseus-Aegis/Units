class CfgVehicles {
    // Helmet, Item & Vest Base
    class Headgear_Base_F;
    class Item_Base_F;
    class Vest_Base_F;

    // Backpack Base
    class B_FieldPack_Base;

    // Uniform Base
    class B_UN_crew_lxWS;
    class C_man_1;
    class C_Uniform_ArtTShirt_01_v1_F;
    class I_C_Soldier_Bandit_2_F;
    class I_E_Uniform_01_coveralls_F;
    class I_E_Uniform_01_F;
    class I_E_Uniform_01_officer_F;
    class I_E_Uniform_01_shortsleeve_F;
    class I_G_Soldier_LAT_F;
    class I_L_Uniform_01_camo_F;
    class I_Soldier_02_F;
    class I_soldier_F;
    class O_A_Soldier_lxWS;

    // BAF Backpacks
    class TACU_Assets_Fieldpack_Arid: B_FieldPack_Base {
        scope = 2;
        author = "GilleeDoo";
        displayName = "Field Pack (Arid)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\backpack_fieldpack_baf_arid_co.paa)};
    };
    class TACU_Assets_Fieldpack_Tropic: B_FieldPack_Base {
        scope = 2;
        author = "GilleeDoo";
        displayName = "Field Pack (Tropic)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\backpack_fieldpack_baf_tropic_co.paa)};
    };
    class TACU_Assets_Fieldpack_Urban: B_FieldPack_Base {
        scope = 2;
        author = "GilleeDoo";
        displayName = "Field Pack (Urban)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\backpacks\backpack_fieldpack_baf_urban_co.paa)};
    };

    // BAF Helmets
    class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid: Headgear_Base_F {
        author = "GilleeDoo, Mike";
        displayName = "Enhanced Combat Helmet (Arid)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Arid,1);
        };
    };
    class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Tropic: TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid {
        displayName = "Enhanced Combat Helmet (Tropic)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic,1);
        };
    };
    class TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Urban: TACU_BAF_Item_Helmet_EnhancedCombatHelmet_Arid {
        displayName = "Enhanced Combat Helmet (Urban)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Helmet_EnhancedCombatHelmet_Urban,1);
        };
    };

    // BAF Vests
    class TACU_BAF_Item_Vest_LightPlateCarrier_Arid: Vest_Base_F {
        author = "GilleeDoo, Mike";
        displayName = "BAF Light Plate Carrier Rig Mk.1 (Arid)";
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 0;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Arid,1);
        };
    };
    class TACU_BAF_Item_Vest_LightPlateCarrier_Tropic: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Light Plate Carrier Rig Mk.1 (Tropic)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Tropic,1);
        };
    };
    class TACU_BAF_Item_Vest_LightPlateCarrier_Urban: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Light Plate Carrier Rig Mk.1 (Urban)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_LightPlateCarrier_Urban,1);
        };
    };

    class TACU_BAF_Item_Vest_HeavyPlateCarrier_Arid: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Arid)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Arid,1);
        };
    };
    class TACU_BAF_Item_Vest_HeavyPlateCarrier_Tropic: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Tropic)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Tropic,1);
        };
    };
    class TACU_BAF_Item_Vest_HeavyPlateCarrier_Urban: TACU_BAF_Item_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Heavy Plate Carrier Rig Mk.2 (Urban)";
        class TransportItems {
            MACRO_ADDITEM(TACU_BAF_Vest_HeavyPlateCarrier_Urban,1);
        };
    };

    // Cartel Grunt Uniforms
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_01: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_01";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_01_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_02: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_02_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_03: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_03";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_03_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_04: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_04";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_04_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_05: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_05";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_05_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Grunt_06: C_Uniform_ArtTShirt_01_v1_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Grunt_06";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_grunt_06_co.paa)};
    };

    // Cartel Thug Uniforms
    class TACU_Uniform_O_V_Cartel_Greek_Thug_01: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_01";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_01_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Thug_02: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_02";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_02_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Thug_03: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_03";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_03_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Thug_04: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_04";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_04_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Thug_05: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_05";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_05_co.paa)};
    };
    class TACU_Uniform_O_V_Cartel_Greek_Thug_06: I_C_Soldier_Bandit_2_F {
        scope = 1;
        scopeArsenal = 0;
        author = "GilleeDoo, Mike";
        uniformClass = "TACU_Uniform_O_W_Cartel_Greek_Thug_06";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\tacu_uniform_cartel_thug_06_co.paa)};
    };

    // Proxy China Uniforms
    class TACU_Proxy_China_Item_Uniform_Combat_Fatigues: Item_Base_F {
        author = "Mike";
        displayName = "Combat Fatigues (Eastern Asia)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_China_Uniform_Combat_Fatigues,1);
        };
    };
    class TACU_Proxy_China_Unit_Combat_Fatigues: O_A_Soldier_lxWS {
        scope = 1;
        uniformClass = "TACU_Proxy_China_Uniform_Combat_Fatigues";
        hiddenSelectionsTextures[] = {
            "lxWS\characters_1_f_lxws\uniform\data\lxws_gloves_brown_co.paa",
            QPATHTOF(data\uniforms\proxy_china_combatfatigues_noinsignia_hex_co.paa),
            QPATHTOF(data\uniforms\proxy_china_clothing_co.paa),
            "" // Insignia
        };
        modelSides[] = {6};
    };

    // Proxy Russia Uniforms
    class TACU_Proxy_Russia_Item_Uniform_Coveralls: Item_Base_F {
        author = "Mike";
        displayName = "Heli Pilot Coveralls (EE)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Coveralls,1);
        };
    };
    class TACU_Proxy_Russia_Unit_Coveralls: I_E_Uniform_01_coveralls_F {
        author = "GilleeDoo";
        scope = 1;
        uniformClass = "TACU_Proxy_Russia_Uniform_Coveralls";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\proxy_russia_coveralls_01_co.paa),
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
            "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
        };
        modelSides[] = {6};
    };
    class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues: Item_Base_F {
        author = "Mike";
        displayName = "Combat Fatigues (EE)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues,1);
        };
    };
    class TACU_Proxy_Russia_Unit_Combat_Fatigues: I_E_Uniform_01_F {
        scope = 1;
        uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
            "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
        };
        modelSides[] = {6};
    };
    class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues_Officer: Item_Base_F {
        author = "Mike";
        displayName = "Combat Fatigues (Officer, EE)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer,1);
        };
    };
    class TACU_Proxy_Russia_Unit_Combat_Fatigues_Officer: I_E_Uniform_01_officer_F {
        scope = 1;
        uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\proxy_russia_officer_01_co.paa),
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa),
        };
        modelSides[] = {6};
    };
    class TACU_Proxy_Russia_Item_Uniform_Combat_Fatigues_Rolled: Item_Base_F {
        author = "Mike";
        displayName = "Combat Fatigues Rolled (EE)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled,1);
        };
    };
    class TACU_Proxy_Russia_Unit_Combat_Fatigues_Rolled: I_E_Uniform_01_shortsleeve_F {
        scope = 1;
        uniformClass = "TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_pants_co.paa)
        };
        modelSides[] = {6};
    };
    class TACU_Proxy_Russia_Item_Uniform_Deserter_Fatigues: Item_Base_F {
        author = "Mike";
        displayName = "Deserter Fatigues (EE)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Proxy_Russia_Uniform_Deserter,1);
        };
    };
    class TACU_Proxy_Russia_Unit_Deserter_Fatigues: I_L_Uniform_01_camo_F {
        scope = 1;
        uniformClass = "TACU_Proxy_Russia_Uniform_Deserter";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa),
            QPATHTOF(data\uniforms\proxy_russia_uniform_01_camo_co.paa),
            "a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_camo_co.paa"
        };
        modelSides[] = {6};
    };

    // Foreign Legion Vests
    class TACU_Foreign_Legion_Item_Vest_Carrier_Lite_Desert: Vest_Base_F {
        author = "Mike";
        displayName = "Carrier Lite (Desert, No Flag)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Foreign_Legion_Vest_Carrier_Lite_Desert,1);
        };
    };

    // Police Helmets
    class TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack: Headgear_Base_F {
        author = "Emythiel";
        displayName = "Police Helmet (Neck Protection, Black)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Helmet_PASGT_Neck_PoliceBlack,1);
        };
    };
    class TACU_Police_Item_Helmet_PASGT_Neck_PoliceGreen: TACU_Police_Item_Helmet_PASGT_Neck_PoliceBlack {
        displayName = "Police Helmet (Neck Protection, Green)";
        class TransportItems {
            MACRO_ADDITEM(ACU_Police_Helmet_PASGT_Neck_PoliceGreen,1);
        };
    };

    // Police Uniforms
    class TACU_Police_Item_Uniform_Combat_Black: Item_Base_F {
        author = "Emythiel";
        displayName = "Police Combat Uniform (Black)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Black,1);
        };
    };
    class TACU_Police_Item_Uniform_Combat_Blue: TACU_Police_Item_Uniform_Combat_Black {
        displayName = "Police Combat Uniform (Blue)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Blue,1);
        };
    };
    class TACU_Police_Item_Uniform_Combat_Brown: TACU_Police_Item_Uniform_Combat_Blue {
        displayName = "Police Combat Uniform (Brown)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Brown,1);
        };
    };
    class TACU_Police_Item_Uniform_Combat_Green: TACU_Police_Item_Uniform_Combat_Brown {
        displayName = "Police Combat Uniform (Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Uniform_Combat_Green,1);
        };
    };
    class TACU_Police_Unit_Combat_Black: I_G_Soldier_LAT_F {
        author = "Emythiel";
        scope = 1;
        uniformClass = "TACU_Police_Uniform_Combat_Black";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_black_co.paa)};
        modelSides[] = {6};
    };
    class TACU_Police_Unit_Combat_Blue: TACU_Police_Unit_Combat_Black {
        uniformClass = "TACU_Police_Uniform_Combat_Blue";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_blue_co.paa)};
    };
    class TACU_Police_Unit_Combat_Brown: TACU_Police_Unit_Combat_Black {
        uniformClass = "TACU_Police_Uniform_Combat_Brown";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_brown_co.paa)};
    };
    class TACU_Police_Unit_Combat_Green: TACU_Police_Unit_Combat_Black {
        uniformClass = "TACU_Police_Uniform_Combat_Green";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\police_uniform_combat_green_co.paa)};
    };

    // Police Vests
    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack: Vest_Base_F {
        author = "Emythiel";
        displayName = "Heavy Plate Carrier (Police, Black)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack,1);
        };
    };
    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue: TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlack {
        displayName = "Heavy Plate Carrier (Police, Blue)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue,1);
        };
    };
    class TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceGreen: TACU_Police_Item_Vest_HeavyPlateCarrier_PoliceBlue {
        displayName = "Heavy Plate Carrier (Police, Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen,1);
        };
    };
    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlack: Vest_Base_F {
        author = "Emythiel";
        displayName = "Plate Carrier (Police, Black)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceBlack,1);
        };
    };
    class TACU_Police_Item_Vest_PlateCarrier_PoliceBlue: TACU_Police_Item_Vest_PlateCarrier_PoliceBlack {
        displayName = "Plate Carrier (Police, Blue)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceBlue,1);
        };
    };
    class TACU_Police_Item_Vest_PlateCarrier_PoliceGreen: TACU_Police_Item_Vest_PlateCarrier_PoliceBlue {
        displayName = "Plate Carrier (Police, Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Police_Vest_PlateCarrier_PoliceGreen,1);
        };
    };

    // Prisoner Uniforms
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Facel";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        displayName = "Prisoner Outfit (Orange, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Dirty: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Muddy: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Clean: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Dirty: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Blue_Muddy: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Clean: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Dirty: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty,1);
        };
    };
    class TACU_Assets_Item_Uniform_Prisoner_Outfit_Olive_Muddy: TACU_Assets_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy,1);
        };
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean: C_man_1 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Facel, Rebel";
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean";
        modelSides[] = {6};
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_clean_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange.rvmat)};
        class Wounds {
            tex[] = {};
            mat[] = {
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_orange.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_orange_wound_01.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_orange_wound_02.rvmat",

                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_blue.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_blue_wound_01.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_blue_wound_02.rvmat",

                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_olive.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_olive_wound_01.rvmat",
                "x\tacu\addons\assets_wearables\data\prison\assets_uniform_prisoner_outfit_olive_wound_02.rvmat",

                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",

                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
            };
        };
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Orange_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty";
        modelSides[] = {6};
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_dirty_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Orange_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_orange_muddy_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Blue_Clean: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_clean_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Blue_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_dirty_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Blue_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue_muddy_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_blue.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Olive_Clean: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_clean_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Olive_Dirty: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_dirty_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
    };
    class TACU_Assets_Unit_Prisoner_Outfit_Olive_Muddy: TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy";
        model = QPATHTOF(models\assets_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive_muddy_co.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\8.paa),
            QPATHTOF(data\prison\ins\5.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\assets_uniform_prisoner_outfit_olive.rvmat)};
    };

    // South Africa Helmets
    class TACU_South_Africa_Item_Helmet_PASGT_Green: Headgear_Base_F {
        author = "GilleeDoo";
        displayName = "PASGT Helmet (Green)";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(TACU_African_South_Helmet_PASGT_Green,1);
        };
    };

    // South Africa Uniforms
    class TACU_South_Africa_Unit_Combat_Fatigues: I_soldier_F {
        author = "Mike";
        scope = 1;
        uniformClass = "TACU_African_South_Uniform_Combat_Fatigues";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
        modelSides[] = {6};
    };
    class TACU_South_Africa_Unit_Combat_Fatigues_Rolled: I_Soldier_02_F {
        author = "Mike";
        scope = 1;
        uniformClass = "TACU_African_South_Uniform_Combat_Fatigues";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_2_co.paa"};
        modelSides[] = {6};
    };

    // UN Uniforms
    class TACU_Assets_Item_Uniform_UN_Autumn: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Mike";
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsUniforms";
        displayName = "UN Uniform (Autumn)";
        class TransportItems {
            MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Autumn,1);
        };
    };
    class TACU_Assets_Item_Uniform_UN_Urban: TACU_Assets_Item_Uniform_UN_Autumn {
        displayName = "UN Uniform (Urban)";
        class TransportItems {
            MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Urban,1);
        };
    };
    class TACU_Assets_Item_Uniform_UN_Woodland: TACU_Assets_Item_Uniform_UN_Autumn {
        displayName = "UN Uniform (Woodland)";
        class TransportItems {
            MACRO_ADDITEM(TACU_UN_Uniform_Combat_Fatigues_Woodland,1);
        };
    };
    class TACU_UN_Unit_Autumn: B_UN_crew_lxWS {
        author = "Mike";
        scope = 1;
        uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Autumn";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_autumn_co.paa),
            "\lxws\data_f_lxws\img\insignia\un_ca.paa"
        };
        modelSides[] = {6};
    };
    class TACU_UN_Unit_Urban: TACU_UN_Unit_Autumn {
        uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_urban_co.paa),
            "\lxws\data_f_lxws\img\insignia\un_ca.paa"
        };
    };
    class TACU_UN_Unit_Woodland: TACU_UN_Unit_Autumn {
        uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_woodland_co.paa),
            "\lxws\data_f_lxws\img\insignia\un_ca.paa"
        };
    };
    class TACU_Assets_Item_Uniform_TigerStripe_Autumn: TACU_Assets_Item_Uniform_UN_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Autumn)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn,1);
        };
    };
    class TACU_Assets_Item_Uniform_TigerStripe_Urban: TACU_Assets_Item_Uniform_UN_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Urban)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Urban,1);
        };
    };
    class TACU_Assets_Item_Uniform_TigerStripe_Woodland: TACU_Assets_Item_Uniform_UN_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Woodland)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland,1);
        };
    };
    class TACU_Unit_TigerStripe_Autumn: TACU_UN_Unit_Autumn {
        uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_autumn_co.paa),
            ""
        };
    };
    class TACU_Unit_TigerStripe_Urban: TACU_Unit_TigerStripe_Autumn {
        uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Urban";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_urban_co.paa),
            ""
        };
    };
    class TACU_Unit_TigerStripe_Woodland: TACU_Unit_TigerStripe_Autumn {
        uniformClass = "TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\uniforms\un_soldier_camo_woodland_co.paa),
            ""
        };
    };

    // Vanguard Vests
    class TACU_Vanguard_Item_Vest_PlateCarrier_Earth: Vest_Base_F {
        scope = 1;
        scopeCurator = 1;
        vehicleClass = "ItemsVests";
        author = "Mike";
        displayName = "Vanguard Plate Carrier (Earth)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Earth,1);
        };
    };
    class TACU_Vanguard_Item_Vest_PlateCarrier_Foliage: TACU_Vanguard_Item_Vest_PlateCarrier_Earth {
        author = "Mike";
        displayName = "Vanguard Plate Carrier (Foliage)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Foliage,1);
        };
    };
    class TACU_Vanguard_Item_Vest_PlateCarrier_Snow: TACU_Vanguard_Item_Vest_PlateCarrier_Earth {
        author = "Mike";
        displayName = "Vanguard Plate Carrier (Snow)";
        class TransportItems {
            MACRO_ADDITEM(TACU_Vanguard_V_PlateCarrier_Snow,1);
        };
    };
};
