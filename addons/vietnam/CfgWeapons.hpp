class CfgWeapons {
    class CUP_srifle_M40A3;

    // US Weapons
    class TACU_Vietnam_W_M40A3: CUP_srifle_M40A3 {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_khs_old";
			};
		};
    };

    class TACU_Vietnam_W_M40A3_Ghillie: CUP_srifle_M40A3 {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "cup_optic_leupoldmk4_10x40_lrt_woodland";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "cup_mxx_camo";
			};
		};
    };
};
