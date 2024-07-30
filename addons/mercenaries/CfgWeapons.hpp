class CfgWeapons {
    // Opfor
    class arifle_SPAR_01_snd_F;
    class arifle_SPAR_02_snd_F;
    class arifle_SPAR_01_GL_snd_F;
    class LMG_03_F;
    class arifle_SPAR_03_snd_F;
    class hgun_Pistol_heavy_01_F;

    // Low Tier
    class TACU_Mercenaries_W_HK416_Low: arifle_SPAR_01_snd_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK416A5_Low: arifle_SPAR_02_snd_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK416_GL_Low: arifle_SPAR_01_GL_snd_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_M249_Low: LMG_03_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK417_Low: arifle_SPAR_03_snd_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    // Medium Tier
    class TACU_Mercenaries_W_HK416_Medium: TACU_Mercenaries_W_HK416_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Aco);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK416A5_Medium: TACU_Mercenaries_W_HK416A5_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Aco);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK416_GL_Medium: TACU_Mercenaries_W_HK416_GL_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Aco);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_M249_Medium: TACU_Mercenaries_W_M249_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Aco);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_HK417_Medium: TACU_Mercenaries_W_HK417_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Hamr);
            EQUIP_POINTER(acc_flashlight);
        };
    };

    // High Tier
    class TACU_Mercenaries_W_HK416_High: TACU_Mercenaries_W_HK416_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_HK416A5_High: TACU_Mercenaries_W_HK416A5_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_HK416_GL_High: TACU_Mercenaries_W_HK416_GL_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_M249_High: TACU_Mercenaries_W_M249_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_H_MG_blk_F);
        };
    };
    class TACU_Mercenaries_W_HK417_High: TACU_Mercenaries_W_HK417_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_DMS);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_B);
        };
    };
    class TACU_Mercenaries_W_FNX_Sand_High: hgun_Pistol_heavy_01_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_acp);
        };
    };

    // Independents
    class arifle_TRG21_F;
    class arifle_TRG20_F;
    class arifle_TRG21_GL_F;
    class LMG_Mk200_F;
    class srifle_DMR_06_camo_F;
    class hgun_Pistol_heavy_01_green_F;

    // Low-Tier
    class TACU_Mercenaries_W_Tar21_Low: arifle_TRG21_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Ctar21_Low: arifle_TRG20_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Gtar21_Low: arifle_TRG21_GL_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Stoner_Low: LMG_Mk200_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_M14_Low: srifle_DMR_06_camo_F {
        MACRO_WEAPON_DEFAULTS;
    };

    // Medium Tier
    class TACU_Mercenaries_W_Tar21_Medium: TACU_Mercenaries_W_Tar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Ctar21_Medium: TACU_Mercenaries_W_Ctar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Gtar21_Medium: TACU_Mercenaries_W_Gtar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_Stoner_Medium: TACU_Mercenaries_W_Stoner_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_ACO_grn);
            EQUIP_POINTER(acc_flashlight);
        };
    };
    class TACU_Mercenaries_W_M14_Medium: TACU_Mercenaries_W_M14_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_MRCO);
        };
    };

    // High Tier
    class TACU_Mercenaries_W_Tar21_High: TACU_Mercenaries_W_Tar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_Ctar21_High: TACU_Mercenaries_W_Ctar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_Gtar21_High: TACU_Mercenaries_W_Gtar21_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_M);
        };
    };
    class TACU_Mercenaries_W_Stoner_High: TACU_Mercenaries_W_Stoner_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_Holosight_blk_F);
            EQUIP_POINTER(acc_pointer_IR);
            EQUIP_MUZZLE(muzzle_snds_H_MG_blk_F);
        };
    };
    class TACU_Mercenaries_W_M14_High: TACU_Mercenaries_W_M14_Low {
        class LinkedItems {
            EQUIP_OPTIC(optic_SOS);
            EQUIP_MUZZLE(muzzle_snds_B);
        };
    };
    class TACU_Mercenaries_W_FNX_Green_High: hgun_Pistol_heavy_01_green_F {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_MUZZLE(muzzle_snds_acp);
        };
    };
};
