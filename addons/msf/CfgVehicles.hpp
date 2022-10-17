class CfgVehicles {
    // Ground Items (Helmets)
    class Headgear_Base_F;
    class TACU_MSF_Item_Helmet_Scarf_Green: Headgear_Base_F {
        author = "Facel";
        scope = 2;
        scopeCurator = 2;
        displayName = "Shoulder Scarf (Green)";
        vehicleClass = "ItemsHeadgear";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Helmet_Scarf_Green,1);
        };
    };
    class TACU_MSF_Item_Helmet_Scarf_Khaki: TACU_MSF_Item_Helmet_Scarf_Green {
        displayName = "Shoulder Scarf (Khaki)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Helmet_Scarf_Khaki,1);
        };
    };
    class TACU_MSF_Item_Helmet_Scarf_Black: TACU_MSF_Item_Helmet_Scarf_Khaki {
        displayName = "Shoulder Scarf (Black)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Helmet_Scarf_Black,1);
        };
    };
    class TACU_MSF_Item_Helmet_Scarf_Red: TACU_MSF_Item_Helmet_Scarf_Black {
        displayName = "Shoulder Scarf (Red)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Helmet_Scarf_Red,1);
        };
    };

    // Ground Items (Uniforms)
    class Item_Base_F;
    class TACU_MSF_Item_Uniform_CBRN_Black: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky, POLPOX";
        displayName = "CBRN Suit (Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_CBRN_Black,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_TigerBlack: TACU_MSF_Item_Uniform_CBRN_Black
        displayName = "Combat Uniform (Tiger Black)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerBlack,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_TigerDesert: TACU_MSF_Item_Uniform_Combat_TigerBlack {
        displayName = "Combat Uniform (Tiger Desert)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerDesert,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_TigerWood: TACU_MSF_Item_Uniform_Combat_TigerDesert {
        displayName = "Combat Uniform (Tiger Wood)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_TigerWood,1);
        };
    };

    // Ground Items (MGSR Combat Fatigues)
    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Black: Item_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Facel";
        displayName = "MSF Combat Fatigues (Black, Long Sleeves)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsUniforms";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Black,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Black: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Black {
        displayName = "MSF Combat Fatigues (Black, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Black,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Citrullus: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Black {
        displayName = "MSF Combat Fatigues (Citrullus, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Citrullus,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Citrullus: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Citrullus {
        displayName = "MSF Combat Fatigues (Citrullus, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Citrullus,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_DDPM: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Citrullus {
        displayName = "MSF Combat Fatigues (DDPM, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_DDPM,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_DDPM: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_DDPM {
        displayName = "MSF Combat Fatigues (DDPM, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_DDPM,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Desert_Fox: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_DDPM {
        displayName = "MSF Combat Fatigues (Desert Fox, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Fox,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Desert_Fox: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Desert_Fox {
        displayName = "MSF Combat Fatigues (Desert Fox, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Fox,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Desert_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Desert_Fox {
        displayName = "MSF Combat Fatigues (Desert Tiger, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Tiger,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Desert_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Desert_Tiger {
        displayName = "MSF Combat Fatigues (Desert Tiger, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Tiger,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_DPM: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Desert_Tiger {
        displayName = "MSF Combat Fatigues (DPM, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_DPM,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_DPM: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_DPM {
        displayName = "MSF Combat Fatigues (DPM, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_DPM,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_German_Flecktarn: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_DPM {
        displayName = "MSF Combat Fatigues (German Flecktarn, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_German_Flecktarn,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_German_Flecktarn: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_German_Flecktarn {
        displayName = "MSF Combat Fatigues (German Flecktarn, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_German_Flecktarn,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Horsky: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_German_Flecktarn {
        displayName = "MSF Combat Fatigues (Horsky, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Horsky,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Horsky: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Horsky {
        displayName = "MSF Combat Fatigues (Horsky, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Horsky,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Jungle_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Horsky {
        displayName = "MSF Combat Fatigues (Jungle Tiger, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Jungle_Tiger,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Jungle_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Jungle_Tiger {
        displayName = "MSF Combat Fatigues (Jungle Tiger, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Jungle_Tiger,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Khaki: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Jungle_Tiger {
        displayName = "MSF Combat Fatigues (Khaki, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Khaki,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Khaki: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Khaki {
        displayName = "MSF Combat Fatigues (Khaki, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Khaki,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Letni: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Khaki {
        displayName = "MSF Combat Fatigues (Letni, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Letni,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Letni: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Letni {
        displayName = "MSF Combat Fatigues (Letni, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Letni,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Multicam: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Letni {
        displayName = "MSF Combat Fatigues (Multicam, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Multicam,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Multicam: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Multicam {
        displayName = "MSF Combat Fatigues (Multicam, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Multicam,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Olive: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Multicam {
        displayName = "MSF Combat Fatigues (Olive, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Olive,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Olive: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Olive {
        displayName = "MSF Combat Fatigues (Olive, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Olive,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Rhodesian_Bushstroke: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Olive {
        displayName = "MSF Combat Fatigues (Rhodesian Bushstroke, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Rhodesian_Bushstroke,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Rhodesian_Bushstroke: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Rhodesian_Bushstroke {
        displayName = "MSF Combat Fatigues (Rhodesian Bushstroke, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Rhodesian_Bushstroke,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Type3_Flecktarn: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Rhodesian_Bushstroke {
        displayName = "MSF Combat Fatigues (Type3 Flecktarn, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Type3_Flecktarn,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Type3_Flecktarn: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Type3_Flecktarn {
        displayName = "MSF Combat Fatigues (Type3 Flecktarn, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Type3_Flecktarn,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Urban_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Type3_Flecktarn {
        displayName = "MSF Combat Fatigues (Urban Tiger, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Urban_Tiger,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Urban_Tiger: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Urban_Tiger {
        displayName = "MSF Combat Fatigues (Urban Tiger, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Urban_Tiger,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Wetworks: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Urban_Tiger {
        displayName = "MSF Combat Fatigues (Wetworks, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Wetworks,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Wetworks: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Wetworks {
        displayName = "MSF Combat Fatigues (Wetworks, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Wetworks,1);
        };
    };

    class TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Woodland: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Wetworks {
        displayName = "MSF Combat Fatigues (Woodland, Long Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_LS_Woodland,1);
        };
    };
    class TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Woodland: TACU_MSF_Item_Uniform_Combat_Fatigues_LS_Woodland {
        displayName = "MSF Combat Fatigues (Woodland, Rolled Sleeves)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Combat_Fatigues_RS_Woodland,1);
        };
    };

    // Ground Items (MGSR Prisoner Outfits)
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Clean: TACU_MSF_Item_Uniform_Combat_Fatigues_RS_Woodland {
        displayName = "Prisoner Outfit (Orange, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Dirty: TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Clean {
        displayName = "Prisoner Outfit (Orange, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Orange_Dirty,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Muddy: TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Dirty {
        displayName = "Prisoner Outfit (Orange, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Orange_Muddy,1);
        };
    };

    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Clean: TACU_MSF_Item_Uniform_Prisoner_Outfit_Orange_Muddy {
        displayName = "Prisoner Outfit (Blue, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Blue_Clean,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Dirty: TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Clean {
        displayName = "Prisoner Outfit (Blue, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Blue_Dirty,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Muddy: TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Dirty {
        displayName = "Prisoner Outfit (Blue, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Blue_Muddy,1);
        };
    };

    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Olive_Clean: TACU_MSF_Item_Uniform_Prisoner_Outfit_Blue_Muddy {
        displayName = "Prisoner Outfit (Olive, Clean)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Olive_Clean,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Olive_Dirty: TACU_MSF_Item_Uniform_Prisoner_Outfit_Olive_Clean {
        displayName = "Prisoner Outfit (Olive, Dirty)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Olive_Dirty,1);
        };
    };
    class TACU_MSF_Item_Uniform_Prisoner_Outfit_Olive_Muddy: TACU_MSF_Item_Uniform_Prisoner_Outfit_Olive_Dirty {
        displayName = "Prisoner Outfit (Olive, Muddy)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Uniform_Prisoner_Outfit_Olive_Muddy,1);
        };
    };

    // Ground Items (Vests)
    class Vest_Base_F;
    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Black: Vest_Base_F {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Black)";
        scope = 2;
        scopeCurator = 2;
        vehicleClass = "ItemsVests";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Black,1);
        };
    };

    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Coyote: TACU_MSF_Item_Vest_HeavyPlateCarrier_Black {
        displayName = "Heavy Plate Carrier (MSF, Coyote)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Coyote,1);
        };
    };

    class TACU_MSF_Item_Vest_HeavyPlateCarrier_Green: TACU_MSF_Item_Vest_HeavyPlateCarrier_Coyote {
        displayName = "Heavy Plate Carrier (MSF, Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_HeavyPlateCarrier_Green,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Black: TACU_MSF_Item_Vest_HeavyPlateCarrier_Green {
        displayName = "Plate Carrier (MSF, Black)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Black,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Coyote: TACU_MSF_Item_Vest_PlateCarrier_Black {
        displayName = "Plate Carrier (MSF, Coyote)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Coyote,1);
        };
    };

    class TACU_MSF_Item_Vest_PlateCarrier_Green: TACU_MSF_Item_Vest_PlateCarrier_Coyote {
        displayName = "Plate Carrier (MSF, Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_PlateCarrier_Green,1);
        };
    };

    // Ground Items (MGSR Vests)
    class TACU_MSF_Item_Vest_ChestRig_Green: TACU_MSF_Item_Vest_PlateCarrier_Green {
        displayName = "MSF Chest Rig (Green)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_ChestRig_Green,1);
        };
    };

    class TACU_MSF_Item_Vest_ChestRig_Black: TACU_MSF_Item_Vest_ChestRig_Green {
        displayName = "MSF Chest Rig (Black)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_ChestRig_Black,1);
        };
    };

    class TACU_MSF_Item_Vest_ChestRig_Khaki: TACU_MSF_Item_Vest_ChestRig_Black {
        displayName = "MSF Chest Rig (Khaki)";
        class TransportItems {
            MACRO_ADDITEM(TACU_MSF_Vest_ChestRig_Khaki,1);
        };
    };

    // Uniforms
    class B_CBRN_Man_Oversuit_01_MTP_F;
    class TACU_MSF_Unit_CBRN_Black: B_CBRN_Man_Oversuit_01_MTP_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Kresky, POLPOX";
        uniformClass = "TACU_MSF_Uniform_CBRN_Black";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_cbrn_black_co.paa)};
    };

    class tacs_Unit_Combat_LS_Base;
    class TACU_MSF_Unit_Combat_TigerBlack: tacs_Unit_Combat_LS_Base {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_tigerblack_co.paa)};
    };
    class TACU_MSF_Unit_Combat_TigerDesert: TACU_MSF_Unit_Combat_TigerBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerDesert";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_tigerdesert_co.paa)};
    };
    class TACU_MSF_Unit_Combat_TigerWood: TACU_MSF_Unit_Combat_TigerBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Pomigit, Kresky";
        uniformClass = "TACU_MSF_Uniform_Combat_TigerWood";
        modelSides[] = {6};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_tigerwood_co.paa)};
    };

    // Uniforms (MGSR Combat Fatigues)
    class I_Soldier_base_F;
    class TACU_MSF_Unit_Combat_Fatigues_LS_Black: I_Soldier_base_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Facel";
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Black";
        modelSides[] = {6};
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelections[] = {"camo", "insignia", "clan"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_black_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues.rvmat)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Black: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Black";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_black_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Citrullus: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Citrullus";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_citrullus_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Citrullus: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Citrullus";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_citrullus_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_DDPM: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_DDPM";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_ddpm_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_DDPM: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_DDPM";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_ddpm_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Desert_Fox: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Fox";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_desert_fox_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Desert_Fox: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Fox";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_desert_fox_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Desert_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_desert_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Desert_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_desert_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_DPM: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_DPM";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_dpm_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_DPM: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_DPM";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_dpm_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_German_Flecktarn: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_German_Flecktarn";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_german_flecktarn_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_German_Flecktarn: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_German_Flecktarn";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_german_flecktarn_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Horsky: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Horsky";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_horsky_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Horsky: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Horsky";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_horsky_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Jungle_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Jungle_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_jungle_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Jungle_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Jungle_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_jungle_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Khaki: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Khaki";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_khaki_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Khaki: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Khaki";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_khaki_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Letni: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Letni";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_letni_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Letni: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Letni";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_letni_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Multicam: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Multicam";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_multicam_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Multicam: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Multicam";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_multicam_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Olive: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Olive";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_olive_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Olive: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Olive";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_olive_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Rhodesian_Bushstroke: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Rhodesian_Bushstroke";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_rhodesian_bushstroke_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Rhodesian_Bushstroke: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Rhodesian_Bushstroke";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_rhodesian_bushstroke_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Type3_Flecktarn: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Type3_Flecktarn";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_type3_flecktarn_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Type3_Flecktarn: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Type3_Flecktarn";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_type3_flecktarn_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Urban_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Urban_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_urban_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Urban_Tiger: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Urban_Tiger";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_urban_tiger_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Wetworks: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Wetworks";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_wetworks_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Wetworks: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Wetworks";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_wetworks_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_LS_Woodland: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_LS_Woodland";
        model = QPATHTOF(msf_uniform_combat_fatigues_ls.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_woodland_co.paa)};
    };

    class TACU_MSF_Unit_Combat_Fatigues_RS_Woodland: TACU_MSF_Unit_Combat_Fatigues_LS_Black {
        uniformClass = "TACU_MSF_Uniform_Combat_Fatigues_RS_Woodland";
        model = QPATHTOF(msf_uniform_combat_fatigues_rs.p3d);
        hiddenSelectionsTextures[] = {QPATHTOF(data\fatigues\msf_uniform_combat_fatigues_woodland_co.paa)};
    };

    // Uniforms (MGSR Prisoner Outfits)
    class C_man_1;
    class TACU_MSF_Unit_Prisoner_Outfit_Orange_Clean: C_man_1 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "Facel, Rebel";
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean";
        modelSides[] = {6};
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_orange_clean_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_orange.rvmat)};
        class Wounds {
            tex[] = {};
            mat[] = {
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_orange.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_orange_wound_01.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_orange_wound_02.rvmat",

                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_blue.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_blue_wound_01.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_blue_wound_02.rvmat",

                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_olive.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_olive_wound_01.rvmat",
                "x\tacu\addons\msf\data\prison\msf_uniform_prisoner_outfit_olive_wound_02.rvmat",

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
    class TACU_MSF_Unit_Prisoner_Outfit_Orange_Dirty: TACU_MSF_Unit_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Orange_Dirty";
        modelSides[] = {6};
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelections[] = {"camo", "ins1", "ins2", "ins3", "ins4", "ins5"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_orange_dirty_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_orange.rvmat)};
    };
    class TACU_MSF_Unit_Prisoner_Outfit_Orange_Muddy: TACU_MSF_Unit_Prisoner_Outfit_Orange_Dirty {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Orange_Muddy";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_orange_muddy_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
    };

    class TACU_MSF_Unit_Prisoner_Outfit_Blue_Clean: TACU_MSF_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Blue_Clean";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue_clean_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue.rvmat)};
    };
    class TACU_MSF_Unit_Prisoner_Outfit_Blue_Dirty: TACU_MSF_Unit_Prisoner_Outfit_Blue_Clean {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Blue_Dirty";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue_dirty_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue.rvmat)};
    };
    class TACU_MSF_Unit_Prisoner_Outfit_Blue_Muddy: TACU_MSF_Unit_Prisoner_Outfit_Blue_Dirty {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Blue_Muddy";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue_muddy_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_blue.rvmat)};
    };

    class TACU_MSF_Unit_Prisoner_Outfit_Olive_Clean: TACU_MSF_Unit_Prisoner_Outfit_Orange_Clean {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Olive_Clean";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive_clean_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive.rvmat)};
    };
    class TACU_MSF_Unit_Prisoner_Outfit_Olive_Dirty: TACU_MSF_Unit_Prisoner_Outfit_Olive_Clean {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Olive_Dirty";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive_dirty_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive.rvmat)};
    };
    class TACU_MSF_Unit_Prisoner_Outfit_Olive_Muddy: TACU_MSF_Unit_Prisoner_Outfit_Olive_Dirty {
        uniformClass = "TACU_MSF_Uniform_Prisoner_Outfit_Olive_Muddy";
        model = QPATHTOF(msf_uniform_prisoner_outfit.p3d);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive_muddy_co.paa),
            QPATHTOF(data\prison\ins\9.paa),
            QPATHTOF(data\prison\ins\4.paa),
            QPATHTOF(data\prison\ins\7.paa),
            QPATHTOF(data\prison\ins\0.paa),
            QPATHTOF(data\prison\ins\2.paa)
        };
        hiddenSelectionsMaterials[] = {QPATHTOF(data\prison\msf_uniform_prisoner_outfit_olive.rvmat)};
    };

    // Backpacks
    class Bag_Base;
    class TACU_MSF_B_Poncho_Wet: Bag_Base {
        dlc = QUOTE(PREFIX);
        scope = 2;
        scopeCurator = 2;
        author = "Rebel, Facel";
        displayName = "Rain Poncho (Wet)";
        model = QPATHTOF(msf_b_poncho.p3d);
        picture = QPATHTOF(ui\poncho\msf_b_poncho_ca.paa);
        maximumLoad = 60;
        mass = 30;
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\poncho\msf_b_poncho_co.paa)};
        hiddenSelectionsMaterials[] = {QPATHTOF(data\poncho\msf_b_poncho.rvmat)};
    };
    class TACU_MSF_B_Poncho_Dry: TACU_MSF_B_Poncho_Wet {
        displayName = "Rain Poncho (Dry)";
        hiddenSelectionsMaterials[] = {QPATHTOF(data\poncho\MSF_B_Poncho_dry.rvmat)};
    };

    class B_ViperLightHarness_blk_F;
    class TACU_MSF_B_AT_Black: B_ViperLightHarness_blk_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(MRAWS_HEAT_F,4);
        };
    };

    class tacs_Backpack_ViperLightHarness_Coyote;
    class TACU_MSF_B_AT_Coyote: tacs_Backpack_ViperLightHarness_Coyote {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(MRAWS_HEAT_F,4);
        };
    };

    class tacs_Backpack_ViperLightHarness_Green;
    class TACU_MSF_B_AT_Green: tacs_Backpack_ViperLightHarness_Green {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(MRAWS_HEAT_F,4);
        };
    };

    class B_FieldPack_blk;
    class TACU_MSF_B_MMG_Black: B_FieldPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class B_FieldPack_cbr;
    class TACU_MSF_B_MMG_Coyote: B_FieldPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class B_FieldPack_green_F;
    class TACU_MSF_B_MMG_Green: B_FieldPack_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(130Rnd_338_Mag,3);
        };
    };

    class tacs_Backpack_Carryall_DarkBlack;
    class TACU_MSF_B_HAT_Black: tacs_Backpack_Carryall_DarkBlack {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_Carryall_cbr;
    class TACU_MSF_B_HAT_Coyote: B_Carryall_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_Carryall_green_F;
    class TACU_MSF_B_HAT_Green: B_Carryall_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(CUP_Javelin_M,2);
        };
    };

    class B_AssaultPack_blk;
    class TACU_MSF_B_Engineer_Black: B_AssaultPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };
    class TACU_MSF_B_Medic_Black: B_AssaultPack_blk {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    class B_AssaultPack_cbr;
    class TACU_MSF_B_Engineer_Coyote: B_AssaultPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };
    class TACU_MSF_B_Medic_Coyote: B_AssaultPack_cbr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    class B_AssaultPack_rgr;
    class TACU_MSF_B_Engineer_Green: B_AssaultPack_rgr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportMagazines {
            MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,2);
        };
        class TransportItems {
            MACRO_ADDITEM(ACE_DefusalKit,1);
            MACRO_ADDITEM(ACE_M26_Clacker,1);
            MACRO_ADDITEM(ACE_wirecutter,1);
            MACRO_ADDITEM(ToolKit,1);
        };
    };
    class TACU_MSF_B_Medic_Green: B_AssaultPack_rgr {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class TransportItems {
            MACRO_ADDITEM(ACE_surgicalKit,1);
            MACRO_ADDITEM(ACE_personalAidKit,1);
            MACRO_ADDITEM(ACE_tourniquet,8);
            MACRO_ADDITEM(ACE_morphine,10);
            MACRO_ADDITEM(ACE_epinephrine,10);
            MACRO_ADDITEM(ACE_salineIV_500,4);
            MACRO_ADDITEM(ACE_fieldDressing,40);
            MACRO_ADDITEM(ACE_elasticBandage,10);
            MACRO_ADDITEM(ACE_quikclot,10);
            MACRO_ADDITEM(ACE_packingBandage,10);
        };
    };

    // Units and Vehicles
    #include "CfgVehicles_DDogs_Black.hpp"
    #include "CfgVehicles_DDogs_Desert.hpp"
    #include "CfgVehicles_DDogs_Wood.hpp"
    #include "CfgVehicles_Foxhound.hpp"
    #include "CfgVehicles_Regular_Black.hpp"
    #include "CfgVehicles_Regular_Desert.hpp"
    #include "CfgVehicles_Regular_Wood.hpp"
    #include "CfgVehicles_Vehicles_Black.hpp"
    #include "CfgVehicles_Vehicles_Desert.hpp"
    #include "CfgVehicles_Vehicles_Wood.hpp"
    #include "CfgVehicles_XOF.hpp"
};

class Extended_Init_Eventhandlers {
    class TACU_MSF_U_I_Regular_Black_Rifleman_01 {
        class TACU_MSF_insignia_MSF_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_MSF_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
    class TACU_MSF_U_I_DDogs_Black_Rifleman_01 {
        class TACU_MSF_insignia_DDogs_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_DDogs_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
    class TACU_MSF_U_I_Foxhound_Rifleman_01 {
        class TACU_MSF_insignia_Foxhound_init {
            init = "if (local (_this select 0)) then {[(_this select 0), ""TACU_MSF_Insignia_Foxhound_Text""] call BIS_fnc_setUnitInsignia;};";
        };
    };
};
