class CfgVehicles {
    // Base Classes
    class SoldierGB;
    class B_Heli_Transport_01_F;
    class B_Heli_Light_01_dynamicLoadout_F;
    class tacs_Offroad_B_Armed_Black;
    class B_MRAP_01_F;
    class I_APC_Wheeled_03_cannon_F;
    class I_MRAP_03_F;
    class B_T_LSV_01_unarmed_black_F;
    class O_T_LSV_02_armed_black_F;

    // Units - Vanguard Contractors

    class TACU_Vanguard_U_Soldier_Base: SoldierGB {
        author = ECSTRING(Vanguard,Author);
        displayName = "Vanguard PMC Base Soldier";
        faction = "TACU_Vanguard";
        scope = 1;
        scopeCurator = 1;
        side = 2;
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        identityTypes[] = {"LanguageENG_F", "Head_NATO", "G_NATO_default"};
        genericNames = "NATOMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
    };

    class TACU_Vanguard_U_Contractor_Rifleman_01: TACU_Vanguard_U_Soldier_Base {
        displayName = "Rifleman (F2000)";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_HelmetB_light_black", "tacs_Vest_PlateCarrier_Green"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorSubcategory = "TACU_Vanguard_EdSubCat_Contractors";
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_01.jpg);
    };

    class TACU_Vanguard_U_Contractor_Rifleman_02: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Rifleman (AK12)";
        uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
        weapons[] = {"arifle_AK12_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_02.jpg);
    };

    class TACU_Vanguard_U_Contractor_Rifleman_AT: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Rifleman (AT)";
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        weapons[] = {"arifle_CTAR_blk_ACO_F", "hgun_Pistol_heavy_01_F", "launch_NLAW_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_F", "hgun_Pistol_heavy_01_F", "launch_NLAW_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Rifleman_AT.jpg);
    };

    class TACU_Vanguard_U_Contractor_Grenadier: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Grenadier";
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        weapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_556x45_Stanag"), mag_3("1Rnd_HE_Grenade_shell"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Grenadier.jpg);
    };

    class TACU_Vanguard_U_Contractor_Marksman: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Marksman";
        uniformClass = "tacs_Uniform_Combat_LS_CPS_BP_BB";
        weapons[] = {"srifle_EBR_MRCO_LP_BI_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"srifle_EBR_MRCO_LP_BI_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("20Rnd_762x51_Mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Marksman.jpg);
    };

    class TACU_Vanguard_U_Contractor_Driver: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Driver";
        uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
        weapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"SMG_02_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        respawnMagazines[] = {mag_4("30Rnd_9x21_Mag_SMG_02"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Driver.jpg);
    };

    class TACU_Vanguard_U_Contractor_TeamLeader: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Team Leader";
        uniformClass = "tacs_Uniform_Combat_LS_CDBS_GP_TB";
        weapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_MX_Hamr_pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_mag"), mag_2("11Rnd_45ACP_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Teamleader.jpg);
    };

    class TACU_Vanguard_U_Contractor_Autorifleman: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Autorifleman";
        uniformClass = "tacs_Uniform_Combat_RS_CLBS_GP_BB";
        weapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"LMG_Mk200_MRCO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
        respawnMagazines[] = {mag_2("200Rnd_65x39_cased_Box"), mag_2("11Rnd_45ACP_Mag")};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Autorifleman.jpg);
    };

    class TACU_Vanguard_U_Contractor_Medic: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Medic";
        uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
        backpack = "B_AssaultPack_rgr_Medic";
        weapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        respawnMagazines[] = {mag_4("30Rnd_556x45_Stanag"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Medic.jpg);
    };

    class TACU_Vanguard_U_Contractor_Engineer: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Engineer";
        uniformClass = "tacs_Uniform_Combat_LS_CLBS_GP_BB";
        backpack = "B_AssaultPack_rgr_Repair";
        weapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_Pointer_F", "hgun_Pistol_heavy_01_F", "Throw", "Put"};
        magazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        respawnMagazines[] = {mag_4("30Rnd_580x42_Mag_F"), mag_2("11Rnd_45ACP_Mag"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Engineer.jpg);
    };

    class TACU_Vanguard_U_Contractor_Pilot: TACU_Vanguard_U_Contractor_Rifleman_01 {
        displayName = "Pilot";
        uniformClass = "tacs_Uniform_Garment_LS_TS_TP_TB";
        backpack = "B_Parachute";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_PilotHelmetHeli_B"};
        weapons[] = {"SMG_02_F", "Throw", "Put"};
        respawnWeapons[] = {"SMG_02_F", "Throw", "Put"};
        magazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
        respawnMagazines[] = {mag_2("30Rnd_9x21_Mag_SMG_02"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Contractor_Pilot.jpg);
    };

    // Units - Vanguard Specialists

    class TACU_Vanguard_U_Specialist_Rifleman: TACU_Vanguard_U_Soldier_Base {
        displayName = "Rifleman";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "V_PlateCarrier2_blk", "G_Balaclava_blk", "NVGogglesB_blk_F"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "tacs_Helmet_Enc_Ballistic_DarkBlack", "V_PlateCarrier2_blk", "G_Balaclava_blk", "NVGogglesB_blk_F"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"TACU_Vanguard_W_MX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorSubcategory = "TACU_Vanguard_EdSubCat_Specialists";
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Rifleman.jpg);
    };

    class TACU_Vanguard_U_Specialist_Rifleman_AT: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Rifleman (AT)";
        weapons[] = {"TACU_Vanguard_W_MX_Black", "launch_NLAW_F", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MX_Black", "launch_NLAW_F", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Rifleman_AT.jpg);
    };

    class TACU_Vanguard_U_Specialist_Grenadier: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Grenadier";
        weapons[] = {"TACU_Vanguard_W_MX_GL_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MX_GL_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_3("1Rnd_HE_Grenade_shell"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_3("1Rnd_HE_Grenade_shell"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Grenadier.jpg);
    };

    class TACU_Vanguard_U_Specialist_Marksman: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Marksman";
        weapons[] = {"TACU_Vanguard_W_MXM_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        weapons[] = {"TACU_Vanguard_W_MXM_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Marksman.jpg);
    };

    class TACU_Vanguard_U_Specialist_Driver: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Driver";
        weapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Driver.jpg);
    };

    class TACU_Vanguard_U_Specialist_TeamLeader: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Team Leader";
        weapons[] = {"TACU_Vanguard_W_ARX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_ARX_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_green"), "10Rnd_50BW_Mag_F", mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_green"), "10Rnd_50BW_Mag_F", mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Teamleader.jpg);
    };

    class TACU_Vanguard_U_Specialist_Autorifleman: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Autorifleman";
        weapons[] = {"TACU_Vanguard_W_MX_SW_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MX_SW_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_4("100Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_4("100Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Autorifleman.jpg);
    };

    class TACU_Vanguard_U_Specialist_Medic: TACU_Vanguard_U_Specialist_Rifleman {
        displayName = "Medic";
        backpack = "G_FieldPack_Medic";
        weapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        respawnWeapons[] = {"TACU_Vanguard_W_MXC_Black", "TACU_Vanguard_W_Rook40", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("SmokeShell"), "HandGrenade"};
        respawnMagazines[] = {mag_7("30Rnd_65x39_caseless_black_mag"), mag_2("16Rnd_9x21_Mag"), mag_2("SmokeShell"), "HandGrenade"};
        editorPreview = QPATHTOF(ui\Vanguard_U_Specialist_Medic.jpg);
    };

    // Vehicles - Vanguard PMC

    class TACU_Vanguard_V_UH80_Ghosthawk: B_Heli_Transport_01_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "UH-80 Ghosthawk";
        crew = "TACU_Vanguard_U_Contractor_Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext01_CO.paa), QPATHTOF(data\Vanguard_V_UH80_Ghosthawk_ext02_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_UH80_Ghosthawk.jpg);
    };

    class TACU_Vanguard_V_AH9_Pawnee: B_Heli_Light_01_dynamicLoadout_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "AH-9 Pawnee";
        crew = "TACU_Vanguard_U_Contractor_Pilot";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AH9_Pawnee_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_AH9_Pawnee.jpg);
    };

    class TACU_Vanguard_V_Offroad_Armed: tacs_Offroad_B_Armed_Black {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Offroad (Armed)";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Offroad_Armed.jpg);
    };

    class TACU_Vanguard_V_Hunter: B_MRAP_01_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Hunter";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Hunter_ext01_CO.paa), QPATHTOF(data\Vanguard_V_Hunter_ext02_CO)};
        editorPreview = QPATHTOF(ui\Vanguard_V_Hunter.jpg);
    };

    class TACU_Vanguard_V_Strider: I_MRAP_03_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "Strider";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_Strider_CO.paa)};
        editorPreview = QPATHTOF(ui\Vanguard_V_Strider.jpg);
    };

    class TACU_Vanguard_V_AFV4_Gorgon: I_APC_Wheeled_03_cannon_F {
        faction = "TACU_Vanguard";
        side = 2;
        displayName = "AFV-4 Gorgon";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        hiddenSelectionsTextures[] = {QPATHTOF(data\Vanguard_V_AFV4_Gorgon_CO.paa), "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"};
        editorPreview = QPATHTOF(ui\Vanguard_V_AFV4_Gorgon.jpg);
    };

    class TACU_Vanguard_V_Prowler: B_T_LSV_01_unarmed_black_F {
        faction = "TACU_Vanguard";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Prowler.jpg);
    };

    class TACU_Vanguard_V_Qilin: O_T_LSV_02_armed_black_F {
        faction = "TACU_Vanguard";
        side = 2;
        scope = 2;
        scopeCurator = 2;
        displayName = "Qilin (Armed)";
        crew = "TACU_Vanguard_U_Contractor_Driver";
        editorPreview = QPATHTOF(ui\Vanguard_V_Qilin.jpg);
    };
};
