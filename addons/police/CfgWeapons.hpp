class CfgWeapons {
    // Vests
    class V_PlateCarrier1_blk;

    class TACU_Police_Vest_PlateCarrier_Police: V_PlateCarrier1_blk {
        author = ECSTRING(Police,Author);
        displayName = "Carrier Lite (Police)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_PlateCarrier_Police_co.paa)};
    };

    // Weapons
    class CUP_arifle_HK416_CQB_Black;

    class TACU_Police_W_HK416_CQB_Geared: CUP_arifle_HK416_CQB_Black {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "cup_optic_eotech553_black";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_top_flashlight_black_l";
			};
		};
    };
};
