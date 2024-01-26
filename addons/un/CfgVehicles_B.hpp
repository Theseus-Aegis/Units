// Autumn Units
class TACU_UN_Autumn_U_B_Rifleman: TACU_Main_U_BLUFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_UN_B";
    editorSubcategory = "TACU_UN_Autumn";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_Euro", "Head_NATO", "Head_Greek", "Head_Enoch"};
    genericNames = "CivMen"; // Mixture of American, African, & Greek
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Autumn";
    items[] = {"ACE_NVG_Gen4_Black"};
    respawnItems[] = {"ACE_NVG_Gen4_Black"};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_PASGT_basic_UN_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "V_lxWS_UN_Vest_Lite_F",
        "lxWS_H_PASGT_basic_UN_F"
    };
    weapons[] = {
        "", // rifle
        "", // pistol
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "", // rifle
        "", // pistol
        "Throw", "Put"
    };
    magazines[] = {
        mag_8(""),
        mag_2(""),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    respawnMagazines[] = {
        mag_8(""),
        mag_2(""),
        mag_2("SmokeShell"),
        mag_2("HandGrenade")
    };
    headgearList[] = {
        "lxWS_H_PASGT_basic_UN_F", 0.5,
        "lxWS_H_PASGT_goggles_UN_F", 0.5
    };
    CBA_facewearList[] = {
        "G_Shades_Black", 0.2,
        "G_Shades_Blue", 0.2,
        "G_Shades_Green", 0.2,
        "G_Squares", 0.2,
        "G_Spectacles_Tinted", 0.2,
        "", 0.6
    };
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Rifleman);
};

class TACU_UN_Autumn_U_B_Demolitions: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Demolitions";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    backpack = "";
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Demolitions);
};

class TACU_UN_Autumn_U_B_Grenadier: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {
        "",
        "",
        "Throw", "Put"
    };
    respawnWeapons[] = {
        "",
        "",
        "Throw", "Put"
    };
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Grenadier);
};

class TACU_UN_Autumn_U_B_Marksman: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Marksman";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnmagazines[] = {};
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Marksman);
};

class TACU_UN_Autumn_U_B_Teamleader: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Teamleader);
};

class TACU_UN_Autumn_U_B_Autorifleman: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Autorifleman);
};

class TACU_UN_Autumn_U_B_Machinegunner: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Machinegunner);
};

class TACU_UN_Autumn_U_B_Medic: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "";
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_Medic);
};

class TACU_UN_Autumn_U_B_AT: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_UN_Autumn_U_B_AT);
};

class TACU_UN_Autumn_U_B_Driver: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Driver";
};

// Desert Units
class TACU_UN_Desert_U_B_Pilot: TACU_UN_Autumn_U_B_Rifleman {
    displayName = "Pilot";
    uniformClass = "U_lxWS_UN_Pilot";
    backpack = "B_Parachute";
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_B",
        "V_lxWS_UN_Vest_Lite_F"
    };
    respawnLinkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "H_PilotHelmetHeli_B",
        "V_lxWS_UN_Vest_Lite_F"
    };
    headgearList[] = {"H_PilotHelmetHeli_B", 1}; // helmet
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Pilot);
};

class TACU_UN_Desert_U_B_Rifleman: TACU_UN_Autumn_U_B_Rifleman {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Rifleman);
};
class TACU_UN_Desert_U_B_Demolitions: TACU_UN_Autumn_U_B_Demolitions {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Demolitions);
};
class TACU_UN_Desert_U_B_Grenadier: TACU_UN_Autumn_U_B_Grenadier {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Grenadier);
};
class TACU_UN_Desert_U_B_Marksman: TACU_UN_Autumn_U_B_Marksman {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Marksman);
};
class TACU_UN_Desert_U_B_Teamleader: TACU_UN_Autumn_U_B_Teamleader {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Teamleader);
};
class TACU_UN_Desert_U_B_Autorifleman: TACU_UN_Autumn_U_B_Autorifleman {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Autorifleman);
};
class TACU_UN_Desert_U_B_Machinegunner: TACU_UN_Autumn_U_B_Machinegunner {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Machinegunner);
};
class TACU_UN_Desert_U_B_Medic: TACU_UN_Autumn_U_B_Medic {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Medic);
};
class TACU_UN_Desert_U_B_AT: TACU_UN_Autumn_U_B_AT {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_AT);
};
class TACU_UN_Desert_U_B_Driver: TACU_UN_Autumn_U_B_Driver {
    editorSubcategory = "TACU_UN_Desert";
    uniformClass = "U_lxWS_UN_Camo2";
    //EDITORPREVIEW(TACU_UN_Desert_U_B_Driver);
};

// Urban Units
class TACU_UN_Urban_U_B_Rifleman: TACU_UN_Autumn_U_B_Rifleman {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Rifleman);
};
class TACU_UN_Urban_U_B_Demolitions: TACU_UN_Autumn_U_B_Demolitions {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Demolitions);
};
class TACU_UN_Urban_U_B_Grenadier: TACU_UN_Autumn_U_B_Grenadier {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Grenadier);
};
class TACU_UN_Urban_U_B_Marksman: TACU_UN_Autumn_U_B_Marksman {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Marksman);
};
class TACU_UN_Urban_U_B_Teamleader: TACU_UN_Autumn_U_B_Teamleader {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Teamleader);
};
class TACU_UN_Urban_U_B_Autorifleman: TACU_UN_Autumn_U_B_Autorifleman {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Autorifleman);
};
class TACU_UN_Urban_U_B_Machinegunner: TACU_UN_Autumn_U_B_Machinegunner {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Machinegunner);
};
class TACU_UN_Urban_U_B_Medic: TACU_UN_Autumn_U_B_Medic {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Medic);
};
class TACU_UN_Urban_U_B_AT: TACU_UN_Autumn_U_B_AT {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_AT);
};
class TACU_UN_Urban_U_B_Driver: TACU_UN_Autumn_U_B_Driver {
    editorSubcategory = "TACU_UN_Urban";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Urban";
    //EDITORPREVIEW(TACU_UN_Urban_U_B_Driver);
};

// Woodland Units
class TACU_UN_Woodland_U_B_Rifleman: TACU_UN_Autumn_U_B_Rifleman {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Rifleman);
};
class TACU_UN_Woodland_U_B_Demolitions: TACU_UN_Autumn_U_B_Demolitions {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Demolitions);
};
class TACU_UN_Woodland_U_B_Grenadier: TACU_UN_Autumn_U_B_Grenadier {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Grenadier);
};
class TACU_UN_Woodland_U_B_Marksman: TACU_UN_Autumn_U_B_Marksman {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Marksman);
};
class TACU_UN_Woodland_U_B_Teamleader: TACU_UN_Autumn_U_B_Teamleader {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Teamleader);
};
class TACU_UN_Woodland_U_B_Autorifleman: TACU_UN_Autumn_U_B_Autorifleman {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Autorifleman);
};
class TACU_UN_Woodland_U_B_Machinegunner: TACU_UN_Autumn_U_B_Machinegunner {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Machinegunner);
};
class TACU_UN_Woodland_U_B_Medic: TACU_UN_Autumn_U_B_Medic {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Medic);
};
class TACU_UN_Woodland_U_B_AT: TACU_UN_Autumn_U_B_AT {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_AT);
};
class TACU_UN_Woodland_U_B_Driver: TACU_UN_Autumn_U_B_Driver {
    editorSubcategory = "TACU_UN_Woodland";
    uniformClass = "TACU_UN_Uniform_Combat_Fatigues_Woodland";
    //EDITORPREVIEW(TACU_UN_Woodland_U_B_Driver);
};
