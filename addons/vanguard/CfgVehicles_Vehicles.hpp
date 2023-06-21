class TACU_Vanguard_V_UH80_Ghosthawk: TACU_GhostHawk_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-80 Ghosthawk";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Vanguard", 1};
};

class TACU_Vanguard_V_O_UH80_Ghosthawk: TACU_Vanguard_V_UH80_Ghosthawk {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_AH9_Pawnee: TACU_AH6_LittleBird_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "AH-9 Pawnee";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Vanguard", 1};
};

class TACU_Vanguard_V_O_AH9_Pawnee: TACU_Vanguard_V_AH9_Pawnee {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Offroad_Armed: TACU_Offroad_Armed_M2_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad (Armed)";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Black", 1};
};

class TACU_Vanguard_V_O_Offroad_Armed: TACU_Vanguard_V_Offroad_Armed {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Green: TACU_Polaris_Unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (Green)";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Green", 1};
};

class TACU_Vanguard_V_O_Dagor_Green: TACU_Vanguard_V_Dagor_Green {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Armed_Green: TACU_Polaris_Armed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (XM312) Green";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Green", 1};
};

class TACU_Vanguard_V_O_Dagor_Armed_Green: TACU_Vanguard_V_Dagor_Armed_Green {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_AFV4_Gorgon: TACU_Pandur_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "AFV-4 Gorgon (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Blufor", 1};
};

class TACU_Vanguard_V_O_AFV4_Gorgon: TACU_Vanguard_V_AFV4_Gorgon {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Hunter: TACU_MATV_Unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Hunter (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Vanguard", 1};
};

class TACU_Vanguard_V_O_Hunter: TACU_Vanguard_V_Hunter {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Tan: TACU_Polaris_Unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Tan", 1};
};

class TACU_Vanguard_V_O_Dagor_Tan: TACU_Vanguard_V_Dagor_Tan {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Armed_Tan: TACU_Polaris_Armed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (XM312) Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    textureList[] = {"Tan", 1};
};

class TACU_Vanguard_V_O_Dagor_Armed_Tan: TACU_Vanguard_V_Dagor_Armed_Tan {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Strider: TACU_Fennek_Unarmed_Base {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Strider";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Specialist_Grenadier"};
    textureList[] = {"Vanguard", 1};
};

class TACU_Vanguard_V_O_Strider: TACU_Vanguard_V_Strider {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Specialist_Grenadier"};
};

class TACU_Vanguard_V_Armed_Qilin: O_T_LSV_02_armed_black_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Qilin (Armed)";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Specialist_Grenadier"};
};

class TACU_Vanguard_V_O_Armed_Qilin: TACU_Vanguard_V_Armed_Qilin {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Specialist_Grenadier"};
};

class TACU_Vanguard_V_Qilin: O_T_LSV_02_unarmed_black_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Qilin";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Specialist_Grenadier"};
};

class TACU_Vanguard_V_O_Qilin: TACU_Vanguard_V_Qilin {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Specialist_Grenadier"};
};
