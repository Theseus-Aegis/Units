class CfgWeapons {
    class arifle_AK12U_F;
    class arifle_AK12_F;
    class arifle_AK12_GL_F;
    class arifle_RPK12_F;
    class LMG_Zafir_F;
    class srifle_DMR_05_blk_F;
    class hgun_Pistol_heavy_01_green_F;

    class TACU_Proxy_Russia_W_AK12U: arifle_AK12U_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_arco_ak_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_b);
        };
    };

    class TACU_Proxy_Russia_W_AK15: arifle_AK12_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_arco_ak_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_b);
        };
    };

    class TACU_Proxy_Russia_W_AK15_GL: arifle_AK12_GL_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_arco_ak_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_b);
        };
    };

    class TACU_Proxy_Russia_W_RPK: arifle_RPK12_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_arco_ak_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_b);
        };
    };

    class TACU_Proxy_Russia_W_Negev: LMG_Zafir_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_arco_ak_blk_f);
            EQUIP_POINTER(acc_pointer_ir);
        };
    };

    class TACU_Proxy_Russia_W_Cyrus: srifle_DMR_05_blk_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_khs_blk);
            EQUIP_POINTER(acc_pointer_ir);
            EQUIP_MUZZLE(ace_muzzle_mzls_93mmg);
        };
    };

    class TACU_Proxy_Russia_W_FNX: hgun_Pistol_heavy_01_green_F {
        MACRO_WEAPON_DEFAULTS;
        class linkedItems {
            EQUIP_OPTIC(optic_mrd_black);
        };
    };
};
