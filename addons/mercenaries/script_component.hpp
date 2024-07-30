#define COMPONENT mercenaries
#define COMPONENT_BEAUTIFIED Mercenaries
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

#define MACRO_OPFOR_MEDIUM_GEAR \
    editorSubcategory = "TACU_Mercenaries_EdSubCat_Medium"; \
    linkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_TacVest_brn", \
        "H_Bandanna_cbr" \
    }; \
    respawnLinkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_TacVest_brn", \
        "H_Bandanna_cbr" \
    }

#define MACRO_OPFOR_HIGH_GEAR \
    editorSubcategory = "TACU_Mercenaries_EdSubCat_High"; \
    items[] = {"NVGoggles_INDEP"}; \
    respawnItems[] = {"NVGoggles_INDEP"}; \
    linkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "TACU_Mercenaries_Vest_Carrier_Rig_Coyote", \
        "H_HelmetB_sand" \
    }; \
    respawnLinkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "TACU_Mercenaries_Vest_Carrier_Rig_Coyote", \
        "H_HelmetB_sand" \
    }; \
    headgearList[] = { \
        "H_HelmetB_sand", 0.7, \
        "H_HelmetSpecB_sand", 0.7, \
        "H_HelmetB_light_sand", 0.7, \
        "H_Bandanna_cbr", 0.1, \
        "H_Watchcap_cbr", 0.1, \
        "H_Booniehat_khk_hs", 0.1, \
        "H_Booniehat_khk", 0.1, \
        "H_Booniehat_tan", 0.1, \
        "H_Cap_tan", 0.1, \
        "H_ShemagOpen_tan", 0.1 \
    }

#define MACRO_INDEPENDENT_MEDIUM_GEAR \
    editorSubcategory = "TACU_Mercenaries_EdSubCat_Medium"; \
    linkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_TacVest_oli", \
        "H_Bandanna_khk_hs" \
    }; \
    respawnLinkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_TacVest_oli", \
        "H_Bandanna_khk_hs" \
    }

#define MACRO_INDEPENDENT_HIGH_GEAR \
    editorSubcategory = "TACU_Mercenaries_EdSubCat_High"; \
    items[] = {"NVGoggles_INDEP"}; \
    respawnItems[] = {"NVGoggles_INDEP"}; \
    linkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_PlateCarrier1_rgr_noflag_F", \
        "H_HelmetB" \
    }; \
    respawnLinkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "V_PlateCarrier1_rgr_noflag_F", \
        "H_HelmetB" \
    }; \
    headgearList[] = { \
        "H_HelmetB", 0.7, \
        "H_HelmetSpecB", 0.7, \
        "H_HelmetB_light", 0.7, \
        "H_Bandanna_khk", 0.1, \
        "H_Bandanna_khk_hs", 0.1, \
        "H_Bandanna_sgg", 0.1, \
        "H_Watchcap_camo", 0.1, \
        "H_Watchcap_khk", 0.1, \
        "H_Cap_grn", 0.1, \
        "H_Cap_oli", 0.1, \
        "H_Cap_oli_hs", 0.1, \
        "H_Shemag_olive", 0.1, \
        "H_Shemag_olive_hs", 0.1 \
    }
