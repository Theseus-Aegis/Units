class CfgVehicles {
    // Base Classes
    class TACU_Main_U_OPFOR_Soldier_Base;
	class TACU_Main_U_INDEP_Soldier_Base;
  #include "CfgVehicles_Tanoan.hpp"
  #include "CfgVehicles_Russian.hpp"
  #include "CfgVehicles_TanoanHD.hpp"
  #include "CfgVehicles_RussianHD.hpp"
  #include "CfgVehicles_Vehicles.hpp"
  
 //Backpacks
    class B_FieldPack_blk;
	    class TACU_Revolutionaries_Backpack_Mk14: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
         MACRO_ADDMAGAZINE(10Rnd_Mk14_762x51_Mag,8);
        };
	};
	
	   class TACU_Revolutionaries_Backpack_Shotgun: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        { 
          MACRO_ADDMAGAZINE(2Rnd_12Gauge_Pellets,16);
        };
	};
	
	
	   class TACU_Revolutionaries_Backpack_MP5K: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
         MACRO_ADDMAGAZINE(30Rnd_9x21_Mag_SMG_02,8);
        };
	};
	
	
	   class TACU_Revolutionaries_Backpack_CZ550: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_5x_22_LR_17_HMR_M,8);
        };
	};
	
	
	   class TACU_Revolutionaries_Backpack_LeeEnfield: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_10x_303_M,8);
        };
	};
 
 	   class TACU_Revolutionaries_Backpack_M79: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(1Rnd_HE_Grenade_shell,10);
        };
	};
	
		   class TACU_Revolutionaries_Backpack_Bizon: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_64Rnd_9x19_Bizon_M,8);
        };
	};
	
		   class TACU_Revolutionaries_Backpack_UK59: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_50Rnd_UK59_762x54R_Tracer,8);
        };
	};
    
			   class TACU_Revolutionaries_Backpack_FNMinimiSPW: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(200Rnd_556x45_Box_F,5);
        };
	};
	
			   class TACU_Revolutionaries_Backpack_FNFAL: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_20Rnd_762x51_FNFAL_M,8);
        };
	};
	
	
	 class TACU_Revolutionaries_Backpack_CZ805A2: B_FieldPack_blk {
         scope = 1;      
        class TransportMagazines
        {
          MACRO_ADDMAGAZINE(CUP_30Rnd_556x45_G36,8);
        };
	};

	
};