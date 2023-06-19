class CfgWeapons {
    #define FIX_CAMO_HIDDENSELECTIONS \
        hiddenSelections[] = {"camo"}; \
        class ItemInfo: ItemInfo { \
            hiddenSelections[] = {"camo"}; \
        };

    // Vests
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier1_rgr_noflag_F: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class TACU_Vanguard_V_PlateCarrier_Earth: V_PlateCarrier1_rgr_noflag_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "GilleeDoo";
        displayName = "Vanguard Plate Carrier (Earth)";
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_platecarrier_earth_co.paa)};
    };
    class TACU_Vanguard_V_PlateCarrier_Foliage: V_PlateCarrier1_rgr_noflag_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "GilleeDoo";
        displayName = "Vanguard Plate Carrier (Foliage)";
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_platecarrier_foliage_co.paa)};
    };
    class TACU_Vanguard_V_PlateCarrier_Snow: V_PlateCarrier1_rgr_noflag_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        author = "GilleeDoo";
        displayName = "Vanguard Plate Carrier (Foliage)";
        FIX_CAMO_HIDDENSELECTIONS
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_platecarrier_snow_co.paa)};
    };

    // Weapons
    class arifle_MXM_Black_F;
    class TACU_Vanguard_W_MXM_Black: arifle_MXM_Black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_dms);
            EQUIP_MUZZLE(ACE_Muzzle_mzls_H);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class arifle_ARX_blk_F;
    class TACU_Vanguard_W_ARX_Black: arifle_ARX_blk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_MUZZLE(ACE_Muzzle_mzls_H);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class arifle_MX_Black_F;
    class TACU_Vanguard_W_MX_Black: arifle_MX_Black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_MUZZLE(ACE_Muzzle_mzls_H);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class arifle_MX_GL_Black_F;
    class TACU_Vanguard_W_MX_GL_Black: arifle_MX_GL_Black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_MUZZLE(ACE_Muzzle_mzls_H);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class arifle_MX_SW_Black_F;
    class TACU_Vanguard_W_MX_SW_Black: arifle_MX_SW_Black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class arifle_MXC_Black_F;
    class TACU_Vanguard_W_MXC_Black: arifle_MXC_Black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_MUZZLE(ACE_Muzzle_mzls_H);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class hgun_Rook40_F;
    class TACU_Vanguard_W_Rook40: hgun_Rook40_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_L);
        };
    };

    class arifle_Mk20_plain_F;
    class TACU_Vanguard_W_F2000_Sand: arifle_Mk20_plain_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
        };
    };

    class arifle_CTAR_ghex_F;
    class TACU_Vanguard_W_CTAR_Green: arifle_CTAR_ghex_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
        };
    };

    class arifle_CTAR_hex_F;
    class TACU_Vanguard_W_CTAR_Sand: arifle_CTAR_hex_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
        };
    };

    class arifle_MX_khk_F;
    class TACU_Vanguard_W_MX_Green: arifle_MX_khk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_hamr_khk_f);
        };
    };

    class LMG_Mk200_black_F;
    class TACU_Vanguard_W_Stoner_Black: LMG_Mk200_black_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
        };
    };

    class arifle_SPAR_01_GL_khk_F;
    class TACU_Vanguard_W_HK416GL_Green: arifle_SPAR_01_GL_khk_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
        };
    };

    class arifle_SPAR_01_GL_snd_F;
    class TACU_Vanguard_W_HK416GL_Sand: arifle_SPAR_01_GL_snd_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_aco);
        };
    };

    class srifle_DMR_03_khaki_F;
    class TACU_Vanguard_W_SIG556_Green: srifle_DMR_03_khaki_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };

    class srifle_DMR_03_tan_F;
    class TACU_Vanguard_W_SIG556_Sand: srifle_DMR_03_tan_F {
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_mrco);
            EQUIP_POINTER(ACE_acc_pointer_green);
        };
    };
};
