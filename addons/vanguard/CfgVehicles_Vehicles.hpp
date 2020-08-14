class TACU_Vanguard_V_UH80_Ghosthawk: B_Heli_Transport_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-80 Ghosthawk";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext01_CO.paa), QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext02_CO.paa)};
    editorPreview = QPATHTOF(ui\Vanguard_V_UH80_Ghosthawk.jpg);
};

class TACU_Vanguard_V_O_UH80_Ghosthawk: TACU_Vanguard_V_UH80_Ghosthawk {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_AH9_Pawnee: B_Heli_Light_01_dynamicLoadout_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "AH-9 Pawnee";
    crew = "TACU_Vanguard_U_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AH9_Pawnee_CO.paa)};
    editorPreview = QPATHTOF(ui\Vanguard_V_AH9_Pawnee.jpg);
};

class TACU_Vanguard_V_O_AH9_Pawnee: TACU_Vanguard_V_AH9_Pawnee {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Pilot";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Offroad_Armed: tacs_Offroad_B_Armed_Black {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad (Armed)";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\Vanguard_V_Offroad_Armed.jpg);
};

class TACU_Vanguard_V_O_Offroad_Armed: TACU_Vanguard_V_Offroad_Armed {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Green: tacs_Polaris_B_Green {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (Green)";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\Vanguard_V_Dagor_Green.jpg);
};

class TACU_Vanguard_V_O_Dagor_Green: TACU_Vanguard_V_Dagor_Green {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Armed_Green: tacs_Polaris_B_Armed_Green {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (XM312) Green";
    crew = "TACU_Vanguard_U_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\Vanguard_V_Dagor_Armed_Green.jpg);
};

class TACU_Vanguard_V_O_Dagor_Armed_Green: TACU_Vanguard_V_Dagor_Armed_Green {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Green_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_AFV4_Gorgon: I_APC_Wheeled_03_cannon_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "AFV-4 Gorgon (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AFV4_Gorgon_CO.paa), "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"};
    editorPreview = QPATHTOF(ui\Vanguard_V_AFV4_Gorgon.jpg);
};

class TACU_Vanguard_V_O_AFV4_Gorgon: TACU_Vanguard_V_AFV4_Gorgon {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Hunter: B_MRAP_01_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Hunter (Sand)";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Hunter_ext01_CO.paa), QPATHTOF(data\Vanguard_V_Hunter_ext02_CO.paa)};
    editorPreview = QPATHTOF(ui\Vanguard_V_Hunter.jpg);
};

class TACU_Vanguard_V_O_Hunter: TACU_Vanguard_V_Hunter {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Tan: tacs_Polaris_B_Tan {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\Vanguard_V_Dagor_Tan.jpg);
};

class TACU_Vanguard_V_O_Dagor_Tan: TACU_Vanguard_V_Dagor_Tan {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Dagor_Armed_Tan: tacs_Polaris_B_Armed_Tan {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Dagor (XM312) Sand";
    crew = "TACU_Vanguard_U_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Contractor_Green_Engineer"};
    editorPreview = QPATHTOF(ui\Vanguard_V_Dagor_Armed_Tan.jpg);
};

class TACU_Vanguard_V_O_Dagor_Armed_Tan: TACU_Vanguard_V_Dagor_Armed_Tan {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Contractor_Sand_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Contractor_Green_Engineer"};
};

class TACU_Vanguard_V_Strider: I_MRAP_03_F {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_Vanguard";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    displayName = "Strider";
    crew = "TACU_Vanguard_U_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_Specialist_Grenadier"};
    hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Strider_CO.paa)};
    editorPreview = QPATHTOF(ui\Vanguard_V_Strider.jpg);
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
    editorPreview = QPATHTOF(ui\Vanguard_V_Armed_Qilin.jpg);
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
    editorPreview = QPATHTOF(ui\Vanguard_V_Qilin.jpg);
};

class TACU_Vanguard_V_O_Qilin: TACU_Vanguard_V_Qilin {
    side = 0;
    faction = "TACU_Vanguard_O";
    crew = "TACU_Vanguard_U_O_Specialist_Driver";
    typicalCargo[] = {"TACU_Vanguard_U_O_Specialist_Grenadier"};
};