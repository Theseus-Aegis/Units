#define COMPONENT territorial_defence
#define COMPONENT_BEAUTIFIED Territorial Defence
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

#define MACRO_WOODLAND_DEFENCE \
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Russian"}; \
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Woodland"; \
    uniformClass = "CUP_U_O_SLA_MixedCamo"; \
    headgearList[] = { \
        "CUP_H_RUS_6B47", 0.25, \
        "CUP_H_RUS_6B47_headset_goggles", 0.33, \
        "CUP_H_RUS_6B47_headset", 0.33, \
    }; \
    linkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "CUP_V_O_SLA_6B3_4_WDL", \
        "CUP_H_RUS_6B47" \
    }; \
    respawnLinkedItems[] = { \
        DEFAULT_ITEMS_RADIO, \
        "CUP_V_O_SLA_6B3_4_WDL", \
        "CUP_H_RUS_6B47" \
    }

#define MACRO_ARID_TURRETS \
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Turrets_Arid"; \
    faction = "TACU_Territorial_Defence_O"; \
    crew = "TACU_Territorial_Defence_U_O_Crewman_Arid"; \
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Arid"}

#define MACRO_ARID_VEHICLES \
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Cars_Arid"; \
    faction = "TACU_Territorial_Defence_O"; \
    crew = "TACU_Territorial_Defence_U_O_Crewman_Arid"; \
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Arid"}

#define MACRO_WOODLAND_TURRETS \
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Turrets_Woodland"; \
    faction = "TACU_Territorial_Defence_O"; \
    crew = "TACU_Territorial_Defence_U_O_Crewman_Woodland"; \
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Woodland"}

#define MACRO_WOODLAND_VEHICLES \
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Cars_Woodland"; \
    faction = "TACU_Territorial_Defence_O"; \
    crew = "TACU_Territorial_Defence_U_O_Crewman_Woodland"; \
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Woodland"}