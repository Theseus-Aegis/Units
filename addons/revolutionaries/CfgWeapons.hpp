class CfgWeapons {
    class CUP_arifle_CZ805_A2;
    class TACU_Revolutionaries_W_CZ805A2: CUP_arifle_CZ805_A2 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class LMG_03_F;
    class TACU_Revolutionaries_W_FNMinimiSPW: LMG_03_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };

    class SMG_05_F;
    class TACU_Revolutionaries_W_MP5K: SMG_05_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(acc_flashlight);
        };
    };
};
