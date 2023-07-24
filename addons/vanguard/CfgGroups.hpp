class CfgGroups {
    class INDEP {
        class TACU_Vanguard {
            name = "Vanguard PMC";
            #include "independent\CfgGroups_Green.hpp"
            #include "independent\CfgGroups_Sand.hpp"
            #include "independent\CfgGroups_Winter.hpp"
            #include "independent\CfgGroups_Specialists.hpp"
        };
    };
    class EAST {
        class TACU_Vanguard {
            name = "Vanguard PMC";
            #include "opfor\CfgGroups_Green.hpp"
            #include "opfor\CfgGroups_Sand.hpp"
            #include "opfor\CfgGroups_Winter.hpp"
            #include "opfor\CfgGroups_Specialists.hpp"
        };
    };
};
