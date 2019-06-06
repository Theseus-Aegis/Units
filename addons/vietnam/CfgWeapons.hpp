class CfgWeapons {
    class CUP_srifle_M40A3;
    class CUP_srifle_SVD;

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

    // PAVN Weapons
    class TACU_Vietnam_W_Dragunov: CUP_srifle_SVD {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "cup_optic_pso_1_open";
			};
		};
    };

    class TACU_Vietnam_W_Dragunov_Ghillie: CUP_srifle_SVD {
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "cup_optic_pso_1_open";
			};
            class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "cup_svd_camo_g";
			};
		};
    };
};
