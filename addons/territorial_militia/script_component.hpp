#define COMPONENT territorial_militia
#define COMPONENT_BEAUTIFIED Territorial Militia
#include "\x\tacu\addons\main\script_mod.hpp"
#include "\x\tacu\addons\main\script_macros.hpp"

#define MACRO_WOODLAND_MILITIA \
    identityTypes[] = {"LanguageRUS_F", "Head_Euro", "Head_Russian"}; \
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Woodland"; \
    uniformClass = "CUP_U_O_SLA_MixedCamo"; \
    headgearList[] = { \
        "CUP_H_C_Ushanka_01", 0.25, \
        "CUP_H_C_Ushanka_02", 0.25, \
        "CUP_H_C_Ushanka_03", 0.25, \
        "CUP_H_C_Ushanka_04", 0.25 \
    }

#define MACRO_WOODLAND_TURRETS \
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Turrets_Woodland"; \
    crew = "TACU_Territorial_Militia_U_O_Crewman_Woodland"; \
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Woodland"}

#define MACRO_WOODLAND_VEHICLES \
    editorSubcategory = "TACU_Territorial_Militia_EdSubCat_Cars_Woodland"; \
    crew = "TACU_Territorial_Militia_U_O_Crewman_Woodland"; \
    typicalCargo[] = {"TACU_Territorial_Militia_U_O_Crewman_Woodland"}
