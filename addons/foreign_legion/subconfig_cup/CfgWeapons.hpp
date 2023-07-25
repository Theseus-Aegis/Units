class CfgWeapons {
    class CUP_Famas_F1_Rail;
    class TACU_Foreign_Legion_W_FAMAS_Holo: CUP_Famas_F1_Rail {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_holosight_blk_f);
        };
    };

    class TACU_Foreign_Legion_W_FAMAS_Bravo: CUP_Famas_F1_Rail {
        MACRO_WEAPON_DEFAULTS;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
        };
    };
};
