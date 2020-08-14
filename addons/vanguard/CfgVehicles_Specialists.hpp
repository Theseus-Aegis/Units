// Units - Vanguard Specialists
class TACU_Vanguard_U_Specialist_Rifleman: TACU_Main_U_INDEP_Soldier_Base {
    author = "Tyrone";
    displayName = "Rifleman";
    faction = "TACU_Vanguard";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
    genericNames = "NATOMen";
    icon = "iconMan";
    role = "Rifleman";
    sensitivity = 2;
    uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
    backpack = "";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "V_PlateCarrier2_blk", "G_Balaclava_blk", "NVGogglesB_blk_F"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "V_PlateCarrier2_blk", "G_Balaclava_blk", "NVGogglesB_blk_F"};
    Items[] = {mag_5("ACE_fieldDressing")};
    respawnItems[] = {mag_5("ACE_fieldDressing")};
    weapons[] = {"TACU_Vanguard_W_MX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    headgearList[] = {
        "tacs_Helmet_Enc_Ballistic_DarkBlack", 1
    };
    CBA_facewearList[] = {
        "G_Balaclava_blk", 1
    };
    editorSubcategory = "TACU_Vanguard_EdSubCat_Specialists";
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Rifleman.jpg);
};

class TACU_Vanguard_U_O_Specialist_Rifleman: TACU_Vanguard_U_Specialist_Rifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Rifleman_AT: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    weapons[] = {"TACU_Vanguard_W_MX_Black", "launch_NLAW_F", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_Black", "launch_NLAW_F", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Rifleman_AT.jpg);
};

class TACU_Vanguard_U_O_Specialist_Rifleman_AT: TACU_Vanguard_U_Specialist_Rifleman_AT {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Grenadier: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Grenadier";
    weapons[] = {"TACU_Vanguard_W_MX_GL_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_GL_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_3("1Rnd_HE_Grenade_shell"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_3("1Rnd_HE_Grenade_shell"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Grenadier.jpg);
};

class TACU_Vanguard_U_O_Specialist_Grenadier: TACU_Vanguard_U_Specialist_Grenadier {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Marksman: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Marksman";
    role = "Marksman";
    sensitivity = 2.25;
    weapons[] = {"TACU_Vanguard_W_MXM_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MXM_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Marksman.jpg);
};

class TACU_Vanguard_U_O_Specialist_Marksman: TACU_Vanguard_U_Specialist_Marksman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Driver: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Driver";
    weapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Driver.jpg);
};

class TACU_Vanguard_U_O_Specialist_Driver: TACU_Vanguard_U_Specialist_Driver {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_TeamLeader: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {"TACU_Vanguard_W_ARX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_ARX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_green"), "10Rnd_50BW_Mag_F", mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_green"), "10Rnd_50BW_Mag_F", mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_TeamLeader.jpg);
};

class TACU_Vanguard_U_O_Specialist_TeamLeader: TACU_Vanguard_U_Specialist_TeamLeader {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Autorifleman: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"TACU_Vanguard_W_MX_SW_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MX_SW_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_4("100Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    respawnMagazines[] = {mag_4("100Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Autorifleman.jpg);
};

class TACU_Vanguard_U_O_Specialist_Autorifleman: TACU_Vanguard_U_Specialist_Autorifleman {
    side = 0;
    faction = "TACU_Vanguard_O";
};

class TACU_Vanguard_U_Specialist_Medic: TACU_Vanguard_U_Specialist_Rifleman {
    displayName = "Medic";
    icon = "iconManMedic";
    role = "CombatLifeSaver";
    attendant = 1;
    backpack = "G_FieldPack_Medic";
    weapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    respawnWeapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
    magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("SmokeShell"), "HandGrenade"};
    respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("SmokeShell"), "HandGrenade"};
    editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Medic.jpg);
};

class TACU_Vanguard_U_O_Specialist_Medic: TACU_Vanguard_U_Specialist_Medic {
    side = 0;
    faction = "TACU_Vanguard_O";
};
