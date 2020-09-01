class CfgGroups {
    class INDEP {
        class TACU_SevenRings_I {
            name = "Seven Rings";
            #include "CfgGroups_I_Eastern.hpp"
            #include "CfgGroups_I_Western.hpp"
        };
    };

    class EAST {
        class TACU_SevenRings_O {
            name = "Seven Rings";
            #include "CfgGroups_O_Eastern.hpp"
            #include "CfgGroups_O_Western.hpp"
        };
    };
};
