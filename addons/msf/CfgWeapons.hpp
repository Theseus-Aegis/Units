class CfgWeapons {
    // Uniforms
    class Uniform_Base;
    class UniformItem;

    class TACU_MSF_Uniform_Combat_TigerBlack: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Black)";
        picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerBlack_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerBlack";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerDesert: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Desert)";
        picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerDesert_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerDesert";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerWood: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Wood)";
        picture = QPATHTOF(ui\MSF_Uniform_Combat_TigerWood_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerWood";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    // Vests
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrier1_blk;

    class TACU_MSF_Vest_HeavyPlateCarrier_Black: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Black)";
        picture = QPATHTOF(ui\MSF_Vest_HeavyPlateCarrier_Black_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_HeavyPlateCarrier_Black_co.paa)
        };
    };

    class TACU_MSF_Vest_HeavyPlateCarrier_Coyote: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Coyote)";
        picture = QPATHTOF(ui\MSF_Vest_HeavyPlateCarrier_Coyote_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_HeavyPlateCarrier_Coyote_co.paa)
        };
    };

    class TACU_MSF_Vest_HeavyPlateCarrier_Green: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Green)";
        picture = QPATHTOF(ui\MSF_Vest_HeavyPlateCarrier_Green_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_HeavyPlateCarrier_Green_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Black: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_PlateCarrier_Black_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Coyote: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_PlateCarrier_Coyote_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Green: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Green)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_PlateCarrier_Green_co.paa)
        };
    };

    // Weapons - Regular Units
    class CUP_arifle_HK416_Black;
    class TACU_MSF_W_HK416_Black: CUP_arifle_HK416_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_M203_Black;
    class TACU_MSF_W_HK416_GL_Black: CUP_arifle_HK416_M203_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_CQB_Black;
    class TACU_MSF_W_HK416_CQC_Black: CUP_arifle_HK416_CQB_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_CQB_M203_Black;
    class TACU_MSF_W_HK416_GL_CQC_Black: CUP_arifle_HK416_CQB_M203_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK417_20;
    class TACU_MSF_W_HK417_DMR_Black: CUP_arifle_HK417_20 {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK_M27_VFG;
    class TACU_MSF_W_M27_Grip: CUP_arifle_HK_M27_VFG {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
            EQUIP_POINTER(cup_acc_flashlight);
            EQUIP_BIPOD(bipod_01_f_blk);
		};
    };

    class srifle_LRR_F;
    class TACU_MSF_W_M200_Intervention: srifle_LRR_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_lrps);
        };
    };

    // Weapons - Heavy Units
    class arifle_MSBS65_black_F;
    class TACU_MSF_W_Promet_Black: arifle_MSBS65_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_GL_black_F;
    class TACU_MSF_W_Promet_GL_Black: arifle_MSBS65_GL_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_Mark_black_F;
    class TACU_MSF_W_Promet_DMR_Black: arifle_MSBS65_Mark_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_UBS_black_F;
    class TACU_MSF_W_Promet_SG_Black: arifle_MSBS65_UBS_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class LMG_Mk200_black_F;
    class TACU_MSF_W_Stoner99LMG: LMG_Mk200_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class hgun_Pistol_heavy_01_green_F;
    class TACU_MSF_W_FNX45_Green: hgun_Pistol_heavy_01_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd_black);
            EQUIP_POINTER(cup_acc_mlpls_laser);
        };
    };
    class TACU_MSF_W_FNX45_Stealth_Green: hgun_Pistol_heavy_01_green_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrd_black);
            EQUIP_POINTER(cup_acc_mlpls_laser);
            EQUIP_MUZZLE(muzzle_snds_acp);
        };
    };

    class hlc_rifle_honeybadger;
    class TACU_MSF_W_HoneyBadger: hlc_rifle_honeybadger {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(muzzle_hbadger);
        };
    };

    class hlc_rifle_samr2;
    class TACU_MSF_W_LAR15: hlc_rifle_samr2 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_nightstalker);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(hlc_muzzle_556nato_kac);
            EQUIP_BIPOD(bipod_01_f_blk);
        };
    };

    class SMG_02_F;
    class TACU_MSF_W_Scorpion: SMG_02_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(muzzle_snds_l);
        };
    };
};
