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
        displayName = "Plate Carrier (MSF, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_PlateCarrier_Coyote_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Green: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        displayName = "Plate Carrier (MSF, Green)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\MSF_Vest_PlateCarrier_Green_co.paa)
        };
    };

    // Weapons
    class hlc_rifle_ACR_carb_black;
    class hlc_rifle_ACR_GL_Carb_black;
    class srifle_DMR_03_F;
    class hlc_rifle_ACR68_carb_black;
    class hlc_rifle_ACR68_GL_Carb_black;
    class hlc_pistol_P226R_40Combat;
    class LMG_03_F;

    class TACU_MSF_W_ACR_Carb_Black: hlc_rifle_ACR_carb_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
		};
    };

    class TACU_MSF_W_ACR_GL_Carb_Black: hlc_rifle_ACR_GL_Carb_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(cup_optic_eotech553_black);
		};
    };

    class TACU_MSF_W_SIG556_DMR: srifle_DMR_03_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_BIPOD(bipod_01_f_blk);
		};
    };

    class TACU_MSF_W_ACR68_Carb_Black: hlc_rifle_ACR68_carb_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
            EQUIP_MUZZLE(hlc_muzzle_300blk_kac);
        };
    };

    class TACU_MSF_W_ACR68_GL_Carb_Black: hlc_rifle_ACR68_GL_Carb_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
            EQUIP_MUZZLE(hlc_muzzle_300blk_kac);
        };
    };

    class TACU_MSF_W_P226R_40Combat: hlc_pistol_P226R_40Combat {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(hlc_optic_docter_cadex);
            EQUIP_POINTER(cup_acc_mlpls_laser);
            EQUIP_MUZZLE(hlc_muzzle_tirant9);
        };
    };

    class TACU_MSF_W_MinimiSPW: LMG_03_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
            EQUIP_MUZZLE(muzzle_snds_h_mg_blk_f);
        };
    };

    class TACU_MSF_W_SIG556_DMR_Elite: srifle_DMR_03_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_BIPOD(bipod_01_f_blk);
            EQUIP_MUZZLE(muzzle_snds_b);
		};
    };
};
