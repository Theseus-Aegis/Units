class C_Hatchback_01_F; //Revolutionaries (Tanoan)
class TACU_Revolutionaries_V_O_Hatchback01: C_Hatchback_01_F { 
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class C_Truck_02_transport_F;
class TACU_Revolutionaries_V_O_Transport01: C_Truck_02_transport_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "KamAZ Transport";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class C_Offroad_01_covered_F;
class TACU_Revolutionaries_V_O_OffroadC01: C_Offroad_01_covered_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class I_C_Offroad_02_LMG_F;
class TACU_Revolutionaries_V_O_Jeep_LMG: I_C_Offroad_02_LMG_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Tanoa";
    side = 0;
    displayName = "Jeep (LMG)";
    crew = "TACU_Revolutionaries_U_O_Tanoan_Rifleman05";
    typicalCargo[] = {"TACU_Revolutionaries_U_O_Tanoan_Rifleman03"};
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class CUP_C_Datsun_4seat; //Revolutionaries (Russian)
class TACU_Revolutionaries_V_O_Datsun_5Seat: CUP_C_Datsun_4seat {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class CUP_C_Golf4_black_Civ;
class TACU_Revolutionaries_V_O_Golf_Black: CUP_C_Golf4_black_Civ {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class CUP_C_Skoda_Blue_CIV;
class TACU_Revolutionaries_V_O_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class CUP_O_Datsun_PK;
class TACU_Revolutionaries_V_O_Fatsun_PK: CUP_O_Datsun_PK {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Fatsun (PK)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
	typicalCargo[] = {"TACU_Revolutionaries_U_O_Russian_Rifleman03"}
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class CUP_C_Ural_Civ_03;
class TACU_Revolutionaries_V_O_Ural01: CUP_C_Ural_Civ_03 {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_O";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_O_Cars_Russian";
    side = 0;
    displayName = "Ural (Worker)";
    crew = "TACU_Revolutionaries_U_O_Russian_Rifleman05";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class TACU_Revolutionaries_V_I_Datsun_5Seat: CUP_C_Datsun_4seat { //Home Defense (Russian)
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Datsun (5 Seats)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class TACU_Revolutionaries_V_I_Golf_Black: CUP_C_Golf4_black_Civ {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Golf (Black)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class TACU_Revolutionaries_V_I_Skoda_Blue: CUP_C_Skoda_Blue_CIV {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Russian";
    side = 2;
    displayName = "Skoda (Blue)";
    crew = "TACU_Revolutionaries_U_I_Russian_Rifleman04";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class C_Offroad_01_F; //Home Defense (Tanoan)
class TACU_Revolutionaries_V_I_OffroadC01: C_Offroad_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Tanoa";
    side = 2;
    displayName = "Offroad";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Rifleman04";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};
class TACU_Revolutionaries_V_I_Hatchback01: C_Hatchback_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Revolutionaries_I";
	editorSubcategory = "TACU_Revolutionaries_EdSubCat_I_Cars_Tanoa";
    side = 2;
    displayName = "Hatchback";
    crew = "TACU_Revolutionaries_U_I_Tanoan_Rifleman04";
    //editorPreview = QPATHTOF(ui\Cartel_V_O_Offroad_Jeep.jpg);
};