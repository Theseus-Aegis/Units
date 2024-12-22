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
