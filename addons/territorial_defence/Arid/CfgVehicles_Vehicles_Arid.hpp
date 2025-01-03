class TACU_Territorial_Militia_V_O_Offroad_Unarmed_Arid;
class TACU_Territorial_Defence_V_O_Offroad_Unarmed_Arid: TACU_Territorial_Militia_V_O_Offroad_Unarmed_Arid {
    MACRO_ARID_VEHICLES;
};

class TACU_Territorial_Militia_V_O_Offroad_M2_Arid;
class TACU_Territorial_Defence_V_O_Offroad_M2_Arid: TACU_Territorial_Militia_V_O_Offroad_M2_Arid {
    MACRO_ARID_VEHICLES;
};

class TACU_Territorial_Militia_V_O_Kamaz_Transport_Arid;
class TACU_Territorial_Defence_V_O_Kamaz_Transport_Arid: TACU_Territorial_Militia_V_O_Kamaz_Transport_Arid {
    MACRO_ARID_VEHICLES;
};

class TACU_Territorial_Militia_V_O_Kamaz_ZU23_Arid;
class TACU_Territorial_Defence_V_O_Kamaz_ZU23_Arid: TACU_Territorial_Militia_V_O_Kamaz_ZU23_Arid {
    MACRO_ARID_VEHICLES;
};

class TACU_Territorial_Militia_V_O_GAZ_233011_Arid;
class TACU_Territorial_Defence_V_O_GAZ_233011_Arid: TACU_Territorial_Militia_V_O_GAZ_233011_Arid {
    MACRO_ARID_VEHICLES;
};

class TACU_Territorial_Defence_V_O_GAZ_233144_KORD_Arid: TACU_TIGR_233114_KORD_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_ARID_VEHICLES;
    side = 0;
    MACRO_GAZ_233144_TEXTURES_ARID;
    textureList[] = {"Guerilla_02", 1};
    animationList[] = {
        "hide_turret_shield", 0,
        "hide_kord_shield", 1,
        "hide_RoofCarrier", 0,
        "hide_Gear_1", 1,
        "hide_Gear_2", 1,
        "hide_Gear_3", 1,
        "hide_tow_rope", 0,
        "hide_antenna_group", 1,
        "hide_antenna_large", 1,
        "hide_tools", 0,
        "hide_Hoist", 0,
        "hide_roof_rung", 0,
        "hide_fueltanks", 1,
        "hide_reseve_wheel_mount", 0,
        "hide_ReserveWheel", 0,
        "hide_Front_Bumper", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_GAZ_233144_KORD_Arid);
};

class TACU_Territorial_Defence_V_O_GAZ_233144_PK_Arid: TACU_TIGR_233114_PK_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_ARID_VEHICLES;
    side = 0;
    MACRO_GAZ_233144_TEXTURES_ARID;
    textureList[] = {"Guerilla_02", 1};
    animationList[] = {
        "hide_turret_shield", 0,
        "hide_pkm_shield", 1,
        "hide_RoofCarrier", 0,
        "hide_Gear_1", 1,
        "hide_Gear_2", 1,
        "hide_Gear_3", 1,
        "hide_tow_rope", 0,
        "hide_antenna_group", 1,
        "hide_antenna_large", 1,
        "hide_tools", 0,
        "hide_Hoist", 0,
        "hide_roof_rung", 0,
        "hide_fueltanks", 1,
        "hide_reseve_wheel_mount", 0,
        "hide_ReserveWheel", 0,
        "hide_Front_Bumper", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_GAZ_233144_PK_Arid);
};

class TACU_Territorial_Defence_V_O_RAM_Arid: TACU_Ram1500_Unarmed_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_ARID_VEHICLES;
    side = 0;
    textureList[] = {"Guerilla_09", 1};
    animationList[] = {
        "hide_bullbar", 0,
        "hide_fuel_tank", 1,
        "hide_snorkel", 1,
        "hide_antenna", 1,
        "hide_trunk_cover", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_RAM_Arid);
};
class TACU_Territorial_Defence_V_O_RAM_HMG_Arid: TACU_Ram1500_HMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_ARID_VEHICLES;
    side = 0;
    textureList[] = {"Guerilla_09", 1};
    animationList[] = {
        "Hide_Shield", 1,
        "Hide_Rail", 1,
        "hide_bullbar", 0,
        "hide_snorkel", 1,
        "hide_antenna", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_RAM_HMG_Arid);
};
class TACU_Territorial_Defence_V_O_RAM_MMG_Arid: TACU_Ram1500_MMG_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    MACRO_ARID_VEHICLES;
    side = 0;
    textureList[] = {"Guerilla_09", 1};
    animationList[] = {
        "hide_bullbar", 0,
        "hide_fuel_tank", 1,
        "hide_snorkel", 1,
        "hide_antenna", 1,
        "hide_trunk_cover", 1,
        "hide_trunk_door", 0,
        "trunk_door_open", 0,
        "hide_armor_window_armor_top", 1,
        "window_armor_hatch_L_rot", 0,
        "window_armor_hatch_R_rot", 0,
        "door_F_L_open", 0,
        "door_F_R_open", 0,
        "door_R_L_open", 0,
        "door_R_R_open", 0,
        "hide_rack", 0,
        "hide_rack_spotlights", 0,
        "hide_frame", 0,
        "hide_sidesteps", 0
    };
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_RAM_MMG_Arid);
};

class TACU_Territorial_Defence_V_O_BTR80_Arid: TACU_BTR80_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_APCs_Arid";
    faction = "TACU_Territorial_Defence_O";
    crew = "TACU_Territorial_Defence_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Arid"};
    side = 0;
    textureList[] = {"RU_Green", 1};
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_BTR80);
};
class TACU_Territorial_Defence_V_O_BTR80A_Arid: TACU_BTR80A_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_APCs_Arid";
    faction = "TACU_Territorial_Defence_O";
    crew = "TACU_Territorial_Defence_U_O_Crewman_Arid";
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Crewman_Arid"};
    side = 0;
    textureList[] = {"RU_Green", 1};
    //EDITORPREVIEW(TACU_Territorial_Defence_V_O_BTR80A);
};

class TACU_Territorial_Militia_V_O_Mi8_Arid;
class TACU_Territorial_Defence_V_O_Mi8_Arid: TACU_Territorial_Militia_V_O_Mi8_Arid {
    faction = "TACU_Territorial_Defence_O";
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Helicopters_Arid";
    crew = "TACU_Territorial_Defence_U_O_Pilot_Arid";
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Pilot_Arid"};
};

class TACU_Territorial_Defence_V_O_Mi8_MTV3_Arid: TACU_Mi8_MTV3_Base {
    MACRO_FACTION_VEHICLE_DEFAULTS;
    editorSubcategory = "TACU_Territorial_Defence_EdSubCat_Helicopters_Arid";
    faction = "TACU_Territorial_Defence_O";
    side = 0;
    crew = "TACU_Territorial_Defence_U_O_Pilot_Arid";
    typicalCargo[] = {"TACU_Territorial_Defence_U_O_Pilot_Arid"};
    textureList[] = {"CIV_TAN", 1};
};
