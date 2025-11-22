class CfgWeapons {
    // Helmets
    class H_HelmetSpecB;
    class H_PASGT_basic_olive_F;
    class H_PASGT_neckprot_blue_press_F;

    // Uniforms
    class Uniform_Base;
    class UniformItem;
    class U_C_ArtTShirt_01_v1_F: Uniform_Base {
        class ItemInfo;
    };
    class U_I_C_Soldier_Bandit_2_F: Uniform_Base {
        class ItemInfo;
    };
    class U_O_LCF_noInsignia_hex_lxws: Uniform_Base {
        class ItemInfo;
    };

    // Vests
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class V_PlateCarrier1_blk;
    class V_PlateCarrierIAGL_oli;
    class V_PlateCarrierL_CTRG;
    class V_PlateCarrierH_CTRG;
    class V_PlateCarrier1_rgr_noflag_F;
    class V_PlateCarrier2_blk;
    class V_lxWS_PlateCarrier1_desert;

    // BAF Helmets
    class TACU_BAF_Helmet_EnhancedCombatHelmet_Arid: H_HelmetSpecB {
        scope = 1;
        author = "GilleeDoo, Mike";
        displayName = "Enhanced Combat Helmet (Arid)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_arid_co.paa)};
    };
    class TACU_BAF_Helmet_EnhancedCombatHelmet_Tropic: TACU_BAF_Helmet_EnhancedCombatHelmet_Arid {
        displayName = "Enhanced Combat Helmet (Tropic)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_tropic_co.paa)};
    };
    class TACU_BAF_Helmet_EnhancedCombatHelmet_Urban: TACU_BAF_Helmet_EnhancedCombatHelmet_Arid {
        displayName = "Enhanced Combat Helmet (Urban)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\equip1_baf_urban_co.paa)};
    };

    // BAF Vests
    class TACU_BAF_Vest_LightPlateCarrier_Arid: V_PlateCarrierL_CTRG {
        scope = 1;
        author = "GilleeDoo, Mike";
        displayName = "BAF Plate Carrier Rig Mk.1 (Arid)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_arid_co.paa)};
    };
    class TACU_BAF_Vest_LightPlateCarrier_Tropic: TACU_BAF_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Plate Carrier Rig Mk.1 (Tropic)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_tropic_co.paa)};
    };
    class TACU_BAF_Vest_LightPlateCarrier_Urban: TACU_BAF_Vest_LightPlateCarrier_Arid {
        displayName = "BAF Plate Carrier Rig Mk.1 (Urban)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_urban_co.paa)};
    };
    class TACU_BAF_Vest_HeavyPlateCarrier_Arid: V_PlateCarrierH_CTRG {
        scope = 1;
        author = "GilleeDoo, Mike";
        displayName = "BAF Plate Carrier Rig Mk.2 (Arid)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_arid_co.paa)};
    };
    class TACU_BAF_Vest_HeavyPlateCarrier_Tropic: TACU_BAF_Vest_HeavyPlateCarrier_Arid {
        displayName = "BAF Plate Carrier Rig Mk.2 (Tropic)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_tropic_co.paa)};
    };
    class TACU_BAF_Vest_HeavyPlateCarrier_Urban: TACU_BAF_Vest_HeavyPlateCarrier_Arid {
        displayName = "BAF Plate Carrier Rig Mk.2 (Urban)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_platecarrier_baf_urban_co.paa)};
    };

    // Cartel Uniforms
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_01: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 01";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_01";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_02: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 02";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_02";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_03: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 03";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_03";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_04: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 04";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_04";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_05: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 05";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_05";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Grunt_06: U_C_ArtTShirt_01_v1_F {
        displayName = "Cartel Grunt Uniform 06";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Grunt_06";
            containerClass = "Supply100";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_01: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 01";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_01";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_02: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 02";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_02";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_03: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 03";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_03";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_04: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 04";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_04";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_05: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 05";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_05";
        };
    };
    class TACU_Uniform_O_W_Cartel_Greek_Thug_06: U_I_C_Soldier_Bandit_2_F {
        displayName = "Cartel Thug Uniform 06";
        scope = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Uniform_O_V_Cartel_Greek_Thug_06";
        };
    };

    // Proxy China Uniforms
    class TACU_Proxy_China_Uniform_Combat_Fatigues: U_O_LCF_noInsignia_hex_lxws {
        displayName = "Combat Fatigues (Eastern Asia)";
        scope = 1;
        scopeCurator = 1;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Proxy_China_Unit_Combat_Fatigues";
        };
    };

    // Proxy China Vests
    class TACU_Eastern_Asia_Vest_Carrier_Rig: V_PlateCarrier2_rgr {
        author = "Mike";
        scope = 1;
        displayName = "Carrier Rig (Eastern Asia)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
        model = "\A3\Characters_F\Common\equip_placeholder.p3d";
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
            containerClass = "Supply120";
        };
    };

    // Proxy Russia Uniforms
    class TACU_Proxy_Russia_Uniform_Coveralls: Uniform_Base {
        displayName = "Heli Pilot Coveralls (EE)";
        scope = 1;
        scopeCurator = 1;
        model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
        picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_coveralls_f_ca.paa";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_coveralls_01_co.paa)};

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Proxy_Russia_Unit_Coveralls";
            containerClass = "Supply40";
            mass = 60;
        };
    };
    class TACU_Proxy_Russia_Uniform_Combat_Fatigues: Uniform_Base {
        displayName = "Combat Fatigues (EE)";
        scope = 1;
        scopeCurator = 1;
        picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_f_ca.paa";
        model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer: Uniform_Base {
        displayName = "Combat Fatigues (Officer, EE)";
        scope = 1;
        scopeCurator = 1;
        picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_officer_f_ca.paa";
        model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_officer_01_co.paa)};

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues_Officer";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled: Uniform_Base {
        displayName = "Combat Fatigues Rolled (EE)";
        scope = 1;
        scopeCurator = 1;
        picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_shortsleeve_f_ca.paa";
        model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues_Rolled";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_Proxy_Russia_Uniform_Deserter: Uniform_Base {
        displayName = "Deserter Fatigues (EE)";
        scope = 1;
        scopeCurator = 1;
        picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_l_uniform_01_camo_f_ca.paa";
        model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
        hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Proxy_Russia_Unit_Deserter_Fatigues";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Foreign Legion Vests
    class TACU_Foreign_Legion_Vest_Carrier_Lite_Desert: V_lxWS_PlateCarrier1_desert {
        scope = 1;
        author = "Mike";
        displayName = "Carrier Lite (Desert, No Flag)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\vest_carrier_lite_ffl_co.paa)};
    };

    // Mercenaries Vests
    class TACU_Mercenaries_Vest_Carrier_Rig_Coyote: V_PlateCarrier2_blk {
        scope = 1;
        author = "Mike";
        displayName = "Carrier Rig (Coyote)";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
    };

    // Police Helmets
    class TACU_Police_Helmet_PASGT_Neck_PoliceBlack: H_PASGT_neckprot_blue_press_F {
        scope = 1;
        author = "Emythiel";
        displayName = "Police Helmet (Neck Protection, Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Police_Helmet_PASGT_Neck_PoliceBlack_co.paa)};
    };
    class TACU_Police_Helmet_PASGT_Neck_PoliceGreen: TACU_Police_Helmet_PASGT_Neck_PoliceBlack {
        scope = 1;
        displayName = "Police Helmet (Neck Protection, Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\Police_Helmet_PASGT_Neck_PoliceGreen_co.paa)};
    };

    // Police Uniforms
    class TACU_Police_Uniform_Combat_Black: Uniform_Base {
        author = "Emythiel";
        scope = 1;
        scopeCurator = 1;
        displayName = "Police Combat Uniform (Black)";
        picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Black.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Police_Unit_Combat_Black";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_Police_Uniform_Combat_Blue: TACU_Police_Uniform_Combat_Black {
        displayName = "Police Combat Uniform (Blue)";
        picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Blue.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Police_Unit_Combat_Blue";
        };
    };
    class TACU_Police_Uniform_Combat_Brown: TACU_Police_Uniform_Combat_Blue {
        displayName = "Police Combat Uniform (Brown)";
        picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Brown.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Police_Unit_Combat_Brown";
        };
    };
    class TACU_Police_Uniform_Combat_Green: TACU_Police_Uniform_Combat_Brown {
        displayName = "Police Combat Uniform (Green)";
        picture = QPATHTOF(ui\uniforms\Police_Uniform_Combat_Green.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Police_Unit_Combat_Green";
        };
    };

    // Police Vests
    class TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack: V_PlateCarrierIAGL_oli {
        scope = 1;
        author = "Emythiel";
        displayName = "Heavy Plate Carrier (Police, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceBlack_co.paa),
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceBlack_Parts_co.paa)
        };
    };
    class TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue: TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack {
        displayName = "Heavy Plate Carrier (Police, Blue)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceBlue_co.paa),
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceBlue_Parts_co.paa)
        };
    };
    class TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen: TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue {
        displayName = "Heavy Plate Carrier (Police, Green)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceGreen_co.paa),
            QPATHTOF(data\vests\Police_Vest_HeavyPlateCarrier_PoliceGreen_Parts_co.paa)
        };
    };
    class TACU_Police_Vest_PlateCarrier_PoliceBlack: V_PlateCarrier1_blk {
        author = "Emythiel";
        displayName = "Plate Carrier (Police, Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Police_Vest_PlateCarrier_PoliceBlack_co.paa)};
    };
    class TACU_Police_Vest_PlateCarrier_PoliceBlue: TACU_Police_Vest_PlateCarrier_PoliceBlack {
        displayName = "Plate Carrier (Police, Blue)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Police_Vest_PlateCarrier_PoliceBlue_co.paa)};
    };
    class TACU_Police_Vest_PlateCarrier_PoliceGreen: TACU_Police_Vest_PlateCarrier_PoliceBlue {
        displayName = "Plate Carrier (Police, Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Police_Vest_PlateCarrier_PoliceGreen_co.paa)};
    };

    // Prisoner Uniforms
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Facel, Rebel";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Prisoner Outfit (Orange, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Clean";
            containerClass = "Supply20";
            mass = 40;
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Orange_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_orange_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Orange_Muddy";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Clean: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Clean";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Blue_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Blue, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_blue_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Blue_Muddy";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Clean: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Clean)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Clean";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Dirty: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Dirty)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Dirty";
        };
    };
    class TACU_Assets_Uniform_Prisoner_Outfit_Olive_Muddy: TACU_Assets_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Olive, Muddy)";
        picture = QPATHTOF(ui\prison\assets_uniform_prisoner_outfit_olive_ca.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Assets_Unit_Prisoner_Outfit_Olive_Muddy";
        };
    };

    // Seven Rings Vests
    class TACU_Seven_Rings_Vest_Plate_Carrier_Coyote: V_PlateCarrier2_rgr {
        author = "Mike";
        scope = 1;
        displayName = "Carrier Rig (Coyote)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\sr_platecarrier_east_co.paa)};
        model = "\A3\Characters_F\Common\equip_placeholder.p3d";
        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
            uniformModel = "\A3\Characters_F\Common\equip_placeholder.p3d";
            containerClass = "Supply120";
        };
    };
    class TACU_Seven_Rings_Vest_Plate_Carrier_Green: V_PlateCarrier2_blk {
        scope = 1;
        author = "Mike";
        displayName = "Carrier Rig (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\sr_platecarrier_west_co.paa)};
    };

    // South Africa Helmets
    class TACU_African_South_Helmet_PASGT_Green: H_PASGT_basic_olive_F {
        scope = 1;
        author = "GilleeDoo";
        displayName = "PASGT Helmet (Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\helmets\h_pasgt_olive_co.paa)};
    };

    // South Africa Uniforms
    class TACU_African_South_Uniform_Combat_Fatigues: Uniform_Base {
        author = "Mike";
        scope = 1;
        scopeCurator = 1;
        displayName = "Combat Fatigues (South Africa)";
        picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_South_Africa_Unit_Combat_Fatigues";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_African_South_Uniform_Combat_Fatigues_Rolled: TACU_African_South_Uniform_Combat_Fatigues {
        displayName = "Combat Fatigues Rolled (South Africa)";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_South_Africa_Unit_Combat_Fatigues_Rolled";
        };
    };

    // UN Uniforms
    class TACU_UN_Uniform_Combat_Fatigues_Autumn: Uniform_Base {
        author = "Mike";
        scope = 1;
        scopeCurator = 1;
        displayName = "Combat Fatigues (UN, Autumn)";
        picture = QPATHTOF(ui\uniforms\un_uniform_autumn.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_UN_Unit_Autumn";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class TACU_UN_Uniform_Combat_Fatigues_Urban: TACU_UN_Uniform_Combat_Fatigues_Autumn {
        displayName = "Combat Fatigues (UN, Urban)";
        picture = QPATHTOF(ui\uniforms\un_uniform_urban.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_UN_Unit_Urban";
        };
    };
    class TACU_UN_Uniform_Combat_Fatigues_Woodland: TACU_UN_Uniform_Combat_Fatigues_Autumn {
        displayName = "Combat Fatigues (UN, Woodland)";
        picture = QPATHTOF(ui\uniforms\un_uniform_woodland.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_UN_Unit_Woodland";
        };
    };
    class TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn: TACU_UN_Uniform_Combat_Fatigues_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Autumn)";
        scope = 2;
        scopeCurator = 2;
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Unit_TigerStripe_Autumn";
        };
    };
    class TACU_Uniform_Combat_Fatigues_TigerStripe_Urban: TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Urban)";
        picture = QPATHTOF(ui\uniforms\un_uniform_urban.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Unit_TigerStripe_Urban";
        };
    };
    class TACU_Uniform_Combat_Fatigues_TigerStripe_Woodland: TACU_Uniform_Combat_Fatigues_TigerStripe_Autumn {
        displayName = "Combat Fatigues, Tiger Stripe (Woodland)";
        picture = QPATHTOF(ui\uniforms\un_uniform_woodland.paa);
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_Unit_TigerStripe_Woodland";
        };
    };

    // Vanguard Vests
    class TACU_Vanguard_V_PlateCarrier_Earth: V_PlateCarrier1_rgr_noflag_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "GilleeDoo";
        displayName = "Vanguard Plate Carrier (Earth)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Vanguard_platecarrier_earth_co.paa)};
    };
    class TACU_Vanguard_V_PlateCarrier_Foliage: TACU_Vanguard_V_PlateCarrier_Earth {
        displayName = "Vanguard Plate Carrier (Foliage)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Vanguard_platecarrier_foliage_co.paa)};
    };
    class TACU_Vanguard_V_PlateCarrier_Snow: TACU_Vanguard_V_PlateCarrier_Earth {
        displayName = "Vanguard Plate Carrier (Foliage)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\vests\Vanguard_platecarrier_snow_co.paa)};
    };
};
