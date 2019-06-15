    // Units - Cartel Soldados

    class TACU_Cartel_U_Soldado_Rifleman: TACU_Main_U_OPFOR_Soldier_Base {
        author = ECSTRING(Cartel,Author);
        displayName = "Soldado (P99)";
        faction = "TACU_Cartel";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";
        identityTypes[] = {"LanguageFRE_F", "Head_Tanoan", "NoGlasses"};
        genericNames = "TanoanMen";
        icon = "iconMan";
        role = "Rifleman";
        uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
        backpack = "";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "H_Cap_blk", "V_BandollierB_blk"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"hgun_P07_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_P07_F", "Throw", "Put"};
        magazines[] = {mag_7("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("16Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorSubcategory = "TACU_Cartel_EdSubCat_Soldados";
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman.jpg);
        headgearList[] = {
        "H_Bandanna_gry", 0.30,
        "H_Bandanna_cbr", 0.30,
        "H_Bandanna_khk", 0.30
        };
    };

    class TACU_Cartel_U_Soldado_Rifleman_01: TACU_Cartel_U_Soldier_Rifleman {
        displayName = "Soldado (AK)";
        scope = 2;
        scopeCurator = 2;
        uniformClass = "tacs_Uniform_Polo_TP_BS_LP_BB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        Items[] = {mag_5("ACE_fieldDressing")};
        respawnItems[] = {mag_5("ACE_fieldDressing")};
        weapons[] = {"arifle_AKS_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        editorSubcategory = "TACU_Cartel_EdSubCat_Soldados";
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_01.jpg);
    };

    class TACU_Cartel_U_Soldado_Rifleman_02: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (AK12)";
        uniformClass = "tacs_Uniform_Polo_CP_BS_TP_BB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"arifle_AK12_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_762x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_02.jpg);
    };

    class TACU_Cartel_U_Soldado_Rifleman_03: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (CPW)";
        uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
        respawnWeapons[] = {"hgun_PDW2000_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_9x21_Mag"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_03.jpg);
    };

    class TACU_Cartel_U_Soldado_Rifleman_04: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (PP-19)";
        uniformClass = "tacs_Uniform_Polo_TP_LS_GP_BB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"CUP_smg_vityaz", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_vityaz", "Throw", "Put"};
        magazines[] = {mag_7("CUP_30Rnd_9x19AP_Vityaz"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("CUP_30Rnd_9x19AP_Vityaz"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_04.jpg);
    };

    class TACU_Cartel_U_Soldado_Driver: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Driver";
        uniformClass = "tacs_Uniform_Polo_TP_LS_TP_TB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"arifle_AKS_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Driver.jpg);
    };

    class TACU_Cartel_U_Soldado_Rifleman_AT: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (AT)";
        uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"arifle_AKS_F", "Launch_RPG7_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AKS_F", "Launch_RPG7_F", "Throw", "Put"};
        magazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
        respawnMagazines[] = {mag_7("30Rnd_545x39_Mag_F"), mag_2("HandGrenade"), "RPG7_F", "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_AT.jpg);
    };

    class TACU_Cartel_U_Soldado_Rifleman_MG: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (RPK)";
        uniformClass = "tacs_Uniform_Polo_TP_BS_TP_TB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        magazines[] = {mag_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), mag_2("HandGrenade"), "SmokeShell"};
        respawnMagazines[] = {mag_4("CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"), mag_2("HandGrenade"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Rifleman_MG.jpg);
    };    

    class TACU_Cartel_U_Soldado_Grenadier: TACU_Cartel_U_Soldado_Rifleman_01 {
        displayName = "Soldado (GL)";
        uniformClass = "tacs_Uniform_Polo_TP_LS_GP_BB_NoLogo";
        linkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        respawnLinkedItems[] = {DEFAULT_ITEMS_RADIO, "V_BandollierB_blk"};
        weapons[] = {"CUP_arifle_AKS74_GL_Early", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74_GL_Early", "Throw", "Put"};
        magazines[] = {mag_4("CUP_30Rnd_545x39_AK_M"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
        respawnMagazines[] = {mag_4("CUP_30Rnd_545x39_AK_M"), mag_2("HandGrenade"), mag_3("CUP_1Rnd_HE_GP25_M"), "SmokeShell"};
        editorPreview = QPATHTOF(ui\Cartel_U_Soldado_Grenadier.jpg);
    };

    // Vehicles - Cartel

    class TACU_Cartel_V_Offroad_Jeep: I_C_Offroad_02_unarmed_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Jeep Wrangler";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Offroad_Jeep.jpg);
    };    
    class TACU_Cartel_V_Offroad_Jeep_Armed: I_C_Offroad_02_LMG_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Jeep Wrangler (LMG)";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Offroad_Jeep_Armed.jpg);
    };    
    class TACU_Cartel_V_Van_Transport: C_Van_02_transport_F {
        faction = "TACU_Cartel";
        side = 0;
        displayName = "Cargo Van Transport";
        crew = "TACU_Cartel_U_Soldado_Driver";
        editorPreview = QPATHTOF(ui\Cartel_V_Van_Transport.jpg);
    };
