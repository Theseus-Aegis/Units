class CfgVehicles {
    class O_G_Pickup_rf;
    class B_Pickup_mmg_rf;
    class O_G_Pickup_hmg_rf;

    // Opfor
    class TACU_African_Militia_V_O_Pickup_Unarmed: O_G_Pickup_rf {
        MACRO_FACTION_VEHICLE_DEFAULTS;
        faction = "TACU_African_Militia_O";
        side = 0;
        crew = "TACU_African_Militia_U_O_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_O_Repair"};
        textureList[] = {"Guerilla_06", 0.5, "Guerilla_09", 0.5};
        animationList[] = {
            "hide_bullbar", 0,
            "hide_fuel_tank", 1,
            "hide_snorkel", 0,
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
    };

    class TACU_African_Militia_V_O_Pickup_HMG: O_G_Pickup_hmg_rf {
        MACRO_FACTION_VEHICLE_DEFAULTS;
        faction = "TACU_African_Militia_O";
        side = 0;
        crew = "TACU_African_Militia_U_O_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_O_Repair"};
        textureList[] = {"Guerilla_06", 0.5, "Guerilla_09", 0.5};
        animationList[] = {
            "Hide_Shield", 0,
            "Hide_Rail", 0,
            "hide_bullbar", 0,
            "hide_snorkel", 0,
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
    };

    class TACU_African_Militia_V_O_Pickup_MMG: B_Pickup_mmg_rf {
        MACRO_FACTION_VEHICLE_DEFAULTS;
        faction = "TACU_African_Militia_O";
        side = 0;
        crew = "TACU_African_Militia_U_O_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_O_Repair"};
        textureList[] = {"Guerilla_06", 0.5, "Guerilla_09", 0.5};
        animationList[] = {
            "hide_trunk_cover", 1,
            "hide_frame_full", 0,
            "hide_bullbar", 0,
            "hide_snorkel", 0,
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
            "hide_frame", 0,
            "hide_sidesteps", 0
        };
    };

    // Independent
    class TACU_African_Militia_V_I_Pickup_Unarmed: TACU_African_Militia_V_O_Pickup_Unarmed {
        side = 2;
        faction = "TACU_African_Militia_I";
        crew = "TACU_African_Militia_U_I_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_I_Repair"};
    };
    class TACU_African_Militia_V_I_Pickup_HMG: TACU_African_Militia_V_O_Pickup_HMG {
        side = 2;
        faction = "TACU_African_Militia_I";
        crew = "TACU_African_Militia_U_I_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_I_Repair"};
    };
    class TACU_African_Militia_V_I_Pickup_MMG: TACU_African_Militia_V_O_Pickup_MMG {
        side = 2;
        faction = "TACU_African_Militia_I";
        crew = "TACU_African_Militia_U_I_Repair";
        typicalCargo[] = {"TACU_African_Militia_U_I_Repair"};
    };
};
