class CfgWeapons {
    // Helmets
    class H_PASGT_neckprot_blue_press_F;

    class TACU_Police_Helmet_PASGT_Neck_PoliceBlack: H_PASGT_neckprot_blue_press_F {
        author = "Kresky";
        displayName = "Police Helmet (Neck Protection, Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Helmet_PASGT_Neck_PoliceBlack_co.paa)};
    };

    class TACU_Police_Helmet_PASGT_Neck_PoliceGreen: H_PASGT_neckprot_blue_press_F {
        author = "Kresky";
        displayName = "Police Helmet (Neck Protection, Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Helmet_PASGT_Neck_PoliceGreen_co.paa)};
    };

    // Uniforms
    class Uniform_Base;
    class UniformItem;

    class TACU_Police_Uniform_Combat_Black: Uniform_Base {
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Police Combat Uniform (Black)";
        picture = QPATHTOF(ui\Police_Uniform_Combat_Black.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Police_Unit_Combat_Black";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class TACU_Police_Uniform_Combat_Blue: Uniform_Base {
        author = "Kresky";
        scope = 2;
        displayName = "Police Combat Uniform (Blue)";
        picture = QPATHTOF(ui\Police_Uniform_Combat_Blue.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Police_Unit_Combat_Blue";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class TACU_Police_Uniform_Combat_Brown: Uniform_Base {
        author = "Kresky";
        scope = 2;
        displayName = "Police Combat Uniform (Brown)";
        picture = QPATHTOF(ui\Police_Uniform_Combat_Brown.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Police_Unit_Combat_Brown";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class TACU_Police_Uniform_Combat_Green: Uniform_Base {
        author = "Kresky";
        scope = 2;
        displayName = "Police Combat Uniform (Green)";
        picture = QPATHTOF(ui\Police_Uniform_Combat_Green.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_Police_Unit_Combat_Green";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    // Vests
    class V_PlateCarrier1_blk;
    class V_PlateCarrierIAGL_oli;

    class TACU_Police_Vest_HeavyPlateCarrier_PoliceBlack: V_PlateCarrierIAGL_oli {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceBlack_co.paa), QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceBlack_Parts_co.paa)};
    };

    class TACU_Police_Vest_HeavyPlateCarrier_PoliceBlue: V_PlateCarrierIAGL_oli {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Blue)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceBlue_co.paa), QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceBlue_Parts_co.paa)};
    };

    class TACU_Police_Vest_HeavyPlateCarrier_PoliceGreen: V_PlateCarrierIAGL_oli {
        author = "Kresky";
        displayName = "Heavy Plate Carrier (Police, Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceGreen_co.paa), QPATHTOF(data\Police_Vest_HeavyPlateCarrier_PoliceGreen_Parts_co.paa)};
    };

    class TACU_Police_Vest_PlateCarrier_PoliceBlack: V_PlateCarrier1_blk {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_PlateCarrier_PoliceBlack_co.paa)};
    };

    class TACU_Police_Vest_PlateCarrier_PoliceBlue: V_PlateCarrier1_blk {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Blue)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_PlateCarrier_PoliceBlue_co.paa)};
    };

    class TACU_Police_Vest_PlateCarrier_PoliceGreen: V_PlateCarrier1_blk {
        author = "Kresky";
        displayName = "Plate Carrier (Police, Green)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_PlateCarrier_PoliceGreen_co.paa)};
    };

    // Weapons
    class CUP_arifle_HK416_CQB_Black;
    class CUP_arifle_HK417_20;
    class CUP_arifle_SR3M_Vikhr_VFG;
    class CUP_smg_vityaz_vfg;
    class CUP_srifle_SVD;
    class hlc_rifle_SG550Sniper_RIS;
    class hlc_rifle_SG551LB_TAC;

    class TACU_Police_W_Dragunov: CUP_srifle_SVD {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_pso_1_1_open);
        };
    };

    class TACU_Police_W_HK416_CQB: CUP_arifle_HK416_CQB_Black {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_anpeq_15_top_flashlight_black_l);
        };
    };

    class TACU_Police_W_HK417_DMR: CUP_arifle_HK417_20 {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_leupoldmk4_cq_t);
            EQUIP_POINTER(cup_acc_anpeq_15_black);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class TACU_Police_W_SG5501_DMR_Rail: hlc_rifle_SG550Sniper_RIS {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(hlc_optic_zf95base);
        };
    };

    class TACU_Police_W_SG551LB_TAC: hlc_rifle_SG551LB_TAC {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(cup_acc_anpeq_15_top_flashlight_black_l);
        };
    };

    class TACU_Police_W_Vikhr_Grip: CUP_arifle_SR3M_Vikhr_VFG {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_kobra);
            EQUIP_POINTER(cup_acc_anpeq_15_flashlight_black_l);
            EQUIP_MUZZLE(cup_muzzle_snds_sr3m);
        };
    };

    class TACU_Police_W_Vityaz_Grip: CUP_smg_vityaz_vfg {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_kobra);
            EQUIP_POINTER(cup_acc_anpeq_15_flashlight_black_l);
            EQUIP_MUZZLE(cup_muzzle_bizon);
        };
    };
};
