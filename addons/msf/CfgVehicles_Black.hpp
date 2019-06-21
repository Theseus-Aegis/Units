// Units - Crewmen
class TACU_MSF_U_I_Black_Pilot: TACU_MSF_U_I_Desert_Rifleman {
    displayName = "Pilot";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    uniformClass = "TACU_MSF_Uniform_Combat_TigerBlack";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Black_Pilot.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    weapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    respawnWeapons[] = {"hgun_Pistol_heavy_01_F", "Throw", "Put"};
    magazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_4("11Rnd_45ACP_Mag"), mag_2("SmokeShell")};
    headgearList[] = {
        "H_PilotHelmetHeli_B", 1
    };
    editorSubcategory = "TACU_MSF_EdSubCat_Black";
};

class TACU_MSF_U_O_Black_Pilot: TACU_MSF_U_I_Black_Pilot {
    side = 0;
    faction = "TACU_MSF_O";
};

class TACU_MSF_U_I_Black_Crewman: TACU_MSF_U_I_Black_Pilot {
    displayName = "Crewman";
    //editorPreview = QPATHTOF(ui\MSF_U_I_Desert_Crewman.jpg);
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetCrew_B", "G_Balaclava_TI_blk_F", "CUP_V_PMC_CIRAS_Black_Veh"};
    headgearList[] = {
        "H_HelmetCrew_B", 1
    };
};

class TACU_MSF_U_O_Black_Crewman: TACU_MSF_U_I_Black_Crewman {
    side = 0;
    faction = "TACU_MSF_O";
};

// Vehicles
class TACU_MSF_V_I_Mi24: CUP_I_Mi24_D_Dynamic_ION {
    MACRO_CLEAR_VEHICLE_CARGO
    faction = "TACU_MSF_I";
    side = 2;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_I_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_I_Black_Pilot"};
    //editorPreview = QPATHTOF(ui\MSF_V_I_Mi24.jpg);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\MSF_V_Mi24_Hind_01_co.paa),
        QPATHTOF(data\MSF_V_Mi24_Hind_02_co.paa)
    };
};

class TACU_MSF_V_O_Mi24: TACU_MSF_V_I_Mi24 {
    faction = "TACU_MSF_O";
    side = 0;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
