class CfgWeapons {
    // Vests
    class V_PlateCarrier1_blk;

    class TACU_Police_Vest_PlateCarrier_PoliceBlue: V_PlateCarrier1_blk {
        author = ECSTRING(COMPONENT_BEAUTIFIED,Author);
        displayName = "Carrier Lite (Police, Blue)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Police_Vest_PlateCarrier_PoliceBlue_co.paa)};
    };

    // Weapons
    class CUP_arifle_HK416_CQB_Black;
    class CUP_arifle_HK417_20;

    class TACU_Police_W_HK416_CQB: CUP_arifle_HK416_CQB_Black {
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

    class TACU_Police_W_HK417DMR: CUP_arifle_HK417_20 {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "cup_optic_leupoldmk4_cq_t";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "cup_acc_anpeq_15_black";
			};
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bipod_01_f_blk";
            };
		};
    };
};
