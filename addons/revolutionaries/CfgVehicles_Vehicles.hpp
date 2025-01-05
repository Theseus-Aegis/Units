// Tanoan Vehicles - Independent
class TACU_Revolutionaries_V_I_Offroad: TACU_Offroad_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Tanoan_Pistoleer01"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    textureList[] = {
        "Red", 0.33,
        "Blue", 0.33,
        "Black", 0.33
    };
    //EDITORPREVIEW(TACU_Revolutionaries_V_I_Offroad);
};

class TACU_Revolutionaries_V_I_Hatchback: C_Hatchback_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_I";
    side = 2;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_I_Tanoan_Pistoleer02"};
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    //EDITORPREVIEW(TACU_Revolutionaries_V_I_Hatchback);
};

// Tanoan Vehicles - Opfor
class TACU_Revolutionaries_V_O_Hatchback: C_Hatchback_01_F {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    //EDITORPREVIEW(TACU_Revolutionaries_V_O_Hatchback);
};

class TACU_Revolutionaries_V_O_KamAZ: TACU_Kamaz_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer02"};
    textureList[] = {"Orange", 0.5, "Blue", 0.5};
    //EDITORPREVIEW(TACU_Revolutionaries_V_O_KamAZ);
};

class TACU_Revolutionaries_V_O_Offroad: TACU_Offroad_Covered_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer01";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    textureList[] = {"Black", 1};
    //EDITORPREVIEW(TACU_Revolutionaries_V_O_Offroad);
};

class TACU_Revolutionaries_V_O_Van: TACU_Cargo_Van_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer01"};
    textureList[] = {
        "Black", 0.33,
        "Red", 0.33,
        "Green", 0.33
    };
    //EDITORPREVIEW(TACU_Revolutionaries_V_O_Van);
};

class TACU_Revolutionaries_V_O_Jeep_LMG: TACU_Jeep_Wrangler_LMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    faction = "TACU_Revolutionaries_O";
    editorSubcategory = "TACU_Revolutionaries_EdSubCat_Cars_Tanoa";
    side = 0;
    crew = "TACU_Revolutionaries_U_O_Tanoan_Pistoleer02";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Pistoleer02"};
    textureList[] = {"Green", 1};
    //EDITORPREVIEW(TACU_Revolutionaries_V_O_Jeep_LMG);
};
