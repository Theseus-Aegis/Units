// Units - Paramilitary
class TACU_Main_U_OPFOR_Soldier_Base;
class TACU_PLR_U_O_Paramilitary_Rifleman_01: TACU_Main_U_OPFOR_Soldier_Base {
    dlc = QUOTE(PREFIX);
    author = "Kresky";
    displayName = "Rifleman (AK-74M)";
    faction = "TACU_PLR_O";
    scope = 2;
    scopeCurator = 2;
    identityTypes[] = {"LanguagePER_F", "Head_TK", "NoGlasses"};
    genericNames = "TakistaniMen";
    icon = "iconMan";
    role = "Rifleman";
    uniformClass = "CUP_U_O_SLA_Desert";
    linkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_RUS_6B27_olive", "milgp_f_face_shield_goggles_RGR", "CUP_V_B_Interceptor_Grenadier_Olive"};
    respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "CUP_H_RUS_6B27_olive", "milgp_f_face_shield_goggles_RGR", "CUP_V_B_Interceptor_Grenadier_Olive"};
    Items[] = {mag_8("ACE_fieldDressing")};
    respawnItems[] = {mag_8("ACE_fieldDressing")};
    weapons[] = {"TACU_PLR_W_AK74M_Kobra_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AK74M_Kobra_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), mag_2("CUP_HandGrenade_RGD5"), "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), mag_2("CUP_HandGrenade_RGD5"), "SmokeShell"};
    headgearList[] = {
        "CUP_H_RUS_6B27_olive", 1
    };
    TACU_allowedFacewear[] = {
        "milgp_f_face_shield_goggles_RGR", 1
    };
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_Rifleman_01.jpg);
    editorSubcategory = "TACU_PLR_EdSubCat_Paramilitary";
};

class TACU_PLR_U_O_Paramilitary_Rifleman_02: TACU_PLR_U_O_Paramilitary_Rifleman_01 {
    displayName = "Rifleman (AK-105)";
    icon = "iconMan";
    role = "Rifleman";
    weapons[] = {"TACU_PLR_W_AK105_railed_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AK105_railed_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), mag_2("CUP_HandGrenade_RGD5"), "SmokeShell"};
    respawnMagazines[] = {mag_6("CUP_30Rnd_545x39_AK74M_M"), mag_2("CUP_HandGrenade_RGD5"), "SmokeShell"};
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_Rifleman_02.jpg);
};

class TACU_PLR_U_O_Paramilitary_Rifleman_AT: TACU_PLR_U_O_Paramilitary_Rifleman_01 {
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "TACU_PLR_B_AT";
    weapons[] = {"TACU_PLR_W_AKS74U_railed_FL", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AKS74U_railed_FL", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74_plum_M")};
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_Rifleman_AT.jpg);
};

class TACU_PLR_U_O_Paramilitary_TeamLeader: TACU_PLR_U_O_Paramilitary_Rifleman_01 {
    displayName = "Team Leader";
    icon = "iconManLeader";
    role = "Rifleman";
    weapons[] = {"TACU_PLR_W_AKS74U_railed_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AKS74U_railed_FL", "Throw", "Put"};
    magazines[] = {mag_6("CUP_30Rnd_545x39_AK74_plum_M"), mag_2("CUP_HandGrenade_RGD5"), mag_2("SmokeShell")};
    respawnMagazines[] = {mag_6("CUP_30Rnd_545x39_AK74_plum_M"), mag_2("CUP_HandGrenade_RGD5"), mag_2("SmokeShell")};
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_TeamLeader.jpg);
};

class TACU_PLR_U_O_Paramilitary_Grenadier: TACU_PLR_U_O_Paramilitary_Rifleman_01 {
    displayName = "Grenadier";
    icon = "iconMan";
    role = "Rifleman";
    weapons[] = {"TACU_PLR_W_AK74M_GL_Kobra_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_AK74M_GL_Kobra_FL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_30Rnd_545x39_AK74M_M"), mag_3("CUP_1Rnd_HE_GP25_M"), mag_2("CUP_1Rnd_SMOKE_GP25_M"), mag_2("CUP_IlumFlareWhite_GP25_M")};
    respawnMagazines[] = {mag_5("CUP_30Rnd_545x39_AK74M_M"), mag_3("CUP_1Rnd_HE_GP25_M"), mag_2("CUP_1Rnd_SMOKE_GP25_M"), mag_2("CUP_IlumFlareWhite_GP25_M")};
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_Grenadier.jpg);
};

class TACU_PLR_U_O_Paramilitary_Autorifleman: TACU_PLR_U_O_Paramilitary_Rifleman_01 {
    displayName = "Autorifleman";
    icon = "iconManMG";
    role = "MachineGunner";
    weapons[] = {"TACU_PLR_W_RPK74M_FL", "Throw", "Put"};
    respawnWeapons[] = {"TACU_PLR_W_RPK74M_FL", "Throw", "Put"};
    magazines[] = {mag_5("CUP_60Rnd_545x39_AK74M_M")};
    respawnMagazines[] = {mag_5("CUP_60Rnd_545x39_AK74M_M")};
    editorPreview = QPATHTOF(ui\PLR_U_O_Paramilitary_Autorifleman.jpg);
};
