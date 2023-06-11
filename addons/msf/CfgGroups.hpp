class CfgGroups {
    class INDEP {
        class TACU_MSF_I {
            name = "Militaires Sans Frontières";
            #include "CfgGroups_Indep_DDogs.hpp"
            #include "CfgGroups_Indep_Foxhound.hpp"
            #include "CfgGroups_Indep_Regular.hpp"
            #include "CfgGroups_Indep_XOF.hpp"
        };
    };

    class EAST {
        class TACU_MSF_O {
            name = "Militaires Sans Frontières";
            #include "CfgGroups_Opfor_DDogs.hpp"
            #include "CfgGroups_Opfor_Foxhound.hpp"
            #include "CfgGroups_Opfor_Regular.hpp"
            #include "CfgGroups_Opfor_XOF.hpp"
        };
    };
};
