class TACU_Proxy_Russia_U_O_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
    author = "Mike";
    displayName = "Rifleman";
    faction = "TACU_Proxy_Russia_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {};
    genericNames = "TACU_RussianNames";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "";
    items[] = {""};
    respawnItems[] = {""};
    linkedItems[] = {
        DEFAULT_ITEMS_RADIO,
        "", // vest
        "", // helmet
    };
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    headgearList[] = {};
    CBA_facewearList[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Rifleman);
};

class TACU_Proxy_Russia_U_O_Demolitions: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Demolitions";
    icon = "iconManEngineer";
    role = "Sapper";
    canDeactivateMines = 1;
    backpack = ""; // to do!
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Demolitions);
};

class TACU_Proxy_Russia_U_O_Engineer: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Engineer";
    icon = "iconManEngineer";
    role = "Sapper";
    engineer = 1;
    backpack = ""; // to do!
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Engineer);
};

class TACU_Proxy_Russia_U_O_Grenadier: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Grenadier";
    role = "Grenadier";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Grenadier);
};

class TACU_Proxy_Russia_U_O_Marksman: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Marksman";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Marksman);
};

class TACU_Proxy_Russia_U_O_Teamleader: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Marksman);
};

class TACU_Proxy_Russia_U_O_Autorifleman: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Autorifleman);
};

class TACU_Proxy_Russia_U_O_Machinegunner: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Machinegunner";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Machinegunner);
};

class TACU_Proxy_Russia_U_O_Medic: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = ""; // to do!
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Medic);
};

class TACU_Proxy_Russia_U_O_AT: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = ""; // to do!
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AT);
};

class TACU_Proxy_Russia_U_O_AP: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Rifleman (AP)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = ""; // to do!
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_AT);
};

class TACU_Proxy_Russia_U_O_Driver: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Driver";
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Driver);
};

class TACU_Proxy_Russia_U_O_Pilot: TACU_Proxy_Russia_U_O_Rifleman {
    displayName = "Pilot";
    backpack = "B_Parachute";
    linkedItems[] = {};
    respawnLinkedItems[] = {};
    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    headgearList[] = {};
    //EDITORPREVIEW(TACU_Proxy_Russia_U_O_Pilot);
};
