// BASE CLASSES

class I_Soldier_F;
class I_Vanguard_base_F : I_Soldier_F
{
    scope = 0;
    scopeCurator = 0;
    faction = "VANGUARD_F";
    vehicleClass = "VANGUARD_B";
    cost = 300000;
    icon = "iconMan";
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Man.jpg";
    identityTypes[] = {
        "LanguageENG_F",
        "Head_NATO",
        "G_NATO_default"};
    editorSubcategory = "Vanguard_Editor_Category_Contractors";
};

class I_Vanguard_Specialist_base_F : I_Vanguard_base_F
{
    editorSubcategory = "Vanguard_Editor_Category_Specialists";
};