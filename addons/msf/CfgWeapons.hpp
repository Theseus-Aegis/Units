class CfgWeapons {
    // Uniforms
    class Uniform_Base;
    class UniformItem;

    class TACU_MSF_Uniform_CBRN_Black: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky, POLPOX";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Suit (Black)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_cbrn_black_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_CBRN_Black";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerBlack: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Black)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_tigerblack_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerBlack";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerDesert: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Desert)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_tigerdesert_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerDesert";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    class TACU_MSF_Uniform_Combat_TigerWood: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        scope = 2;
        scopeCurator = 2;
        displayName = "Combat Uniform (Tiger Wood)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_tigerwood_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_TigerWood";
            containerClass = "Supply100";
            mass = 40;
        };
    };

    // Uniforms - MGSR Combat Fatigues
    class TACU_MSF_Uniform_Combat_Fatigues_LS_Black: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Facel";
        scope = 2;
        scopeCurator = 2;
        displayName = "MSF Combat Fatigues (Black, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_black_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Black";
            containerClass = "Supply100";
            mass = 40;
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Black: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Black, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_black_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Black";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Citrullus: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Citrullus, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_citrullus_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Citrullus";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Citrullus: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Citrullus, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_citrullus_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Citrullus";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_DDPM: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (DDPM, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_ddpm_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_DDPM";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_DDPM: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (DDPM, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_ddpm_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_DDPM";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Fox: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Desert Fox, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_desert_fox_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Desert_Fox";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Fox: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Desert Fox, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_desert_fox_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Desert_Fox";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Desert_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Desert Tiger, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_desert_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Desert_Tiger";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Desert_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Desert Tiger, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_desert_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Desert_Tiger";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_DPM: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (DPM, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_dpm_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_DPM";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_DPM: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (DPM, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_dpm_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_DPM";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_German_Flecktarn: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (German Flecktarn, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_german_flecktarn_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_German_Flecktarn";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_German_Flecktarn: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (German Flecktarn, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_german_flecktarn_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_German_Flecktarn";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Horsky: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Horsky, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_horsky_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Horsky";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Horsky: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Horsky, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_horsky_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Horsky";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Jungle_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Jungle Tiger, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_jungle_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Jungle_Tiger";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Jungle_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Jungle Tiger, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_jungle_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Jungle_Tiger";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Khaki: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Khaki, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_khaki_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Khaki";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Khaki: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Khaki, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_khaki_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Khaki";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Letni: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Letni, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_letni_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Letni";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Letni: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Letni, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_letni_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Letni";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Multicam: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Multicam, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_multicam_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Multicam";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Multicam: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Multicam, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_multicam_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Multicam";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Olive: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Olive, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_olive_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Olive";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Olive: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Olive, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_olive_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Olive";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Rhodesian_Bushstroke: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Rhodesian Bushstroke, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_rhodesian_bushstroke_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Rhodesian_Bushstroke";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Rhodesian_Bushstroke: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Rhodesian Bushstroke, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_rhodesian_bushstroke_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Rhodesian_Bushstroke";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Type3_Flecktarn: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Type3 Flecktarn, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_type3_flecktarn_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_type3_flecktarn";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Type3_Flecktarn: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Type3 Flecktarn, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_type3_flecktarn_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Type3_Flecktarn";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Urban_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Urban Tiger, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_urban_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Urban_tiger";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Urban_Tiger: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Urban Tiger, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_urban_tiger_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Urban_Tiger";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Wetworks: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Wetworks, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_wetworks_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Wetworks";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Wetworks: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Wetworks, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_wetworks_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Wetworks";
        };
    };

    class TACU_MSF_Uniform_Combat_Fatigues_LS_Woodland: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Woodland, Long Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_ls_woodland_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_LS_Woodland";
        };
    };
    class TACU_MSF_Uniform_Combat_Fatigues_RS_Woodland: TACU_MSF_Uniform_Combat_Fatigues_LS_Black {
        author = "Facel";
        displayName = "MSF Combat Fatigues (Woodland, Rolled Sleeves)";
        picture = QPATHTOF(ui\fatigues\msf_uniform_combat_fatigues_rs_woodland_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Combat_Fatigues_RS_Woodland";
        };
    };

    // Uniforms - MGSR Prisoner Outfits
    class TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean: Uniform_Base {
        dlc = QUOTE(PREFIX);
        author = "Facel, Rebel";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prisoner Outfit (Orange, Clean)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_orange_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Orange_Clean";
            containerClass = "Supply20";
            mass = 40;
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Orange_Dirty: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Orange, Dirty)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_orange_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Orange_Dirty";
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Orange_Muddy: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Orange, Muddy)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_orange_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Orange_Muddy";
        };
    };

    class TACU_MSF_Uniform_Prisoner_Outfit_Blue_Clean: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Blue, Clean)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_blue_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Blue_Clean";
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Blue_Dirty: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Blue, Dirty)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_blue_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Blue_Dirty";
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Blue_Muddy: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Blue, Muddy)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_blue_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Blue_Muddy";
        };
    };

    class TACU_MSF_Uniform_Prisoner_Outfit_Olive_Clean: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Olive, Clean)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_olive_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Olive_Clean";
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Olive_Dirty: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Olive, Dirty)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_olive_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Olive_Dirty";
        };
    };
    class TACU_MSF_Uniform_Prisoner_Outfit_Olive_Muddy: TACU_MSF_Uniform_Prisoner_Outfit_Orange_Clean {
        author = "Facel, Rebel";
        displayName = "Prisoner Outfit (Olive, Muddy)";
        picture = QPATHTOF(ui\prison\msf_uniform_prisoner_outfit_olive_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        class ItemInfo: ItemInfo {
            uniformClass = "TACU_MSF_Unit_Prisoner_Outfit_Olive_Muddy";
        };
    };

    // Vests
    class V_PlateCarrierGL_rgr;
    class V_PlateCarrier1_blk;

    class TACU_MSF_Vest_HeavyPlateCarrier_Black: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Black)";
        picture = QPATHTOF(ui\vests\msf_vest_heavyplatecarrier_black_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_heavyplatecarrier_black_co.paa)
        };
    };

    class TACU_MSF_Vest_HeavyPlateCarrier_Coyote: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Coyote)";
        picture = QPATHTOF(ui\vests\msf_vest_heavyplatecarrier_coyote_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_heavyplatecarrier_coyote_co.paa)
        };
    };

    class TACU_MSF_Vest_HeavyPlateCarrier_Green: V_PlateCarrierGL_rgr {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Heavy Plate Carrier (MSF, Green)";
        picture = QPATHTOF(ui\vests\msf_vest_heavyplatecarrier_green_ca.paa);
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_heavyplatecarrier_green_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Black: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Black)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_platecarrier_black_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Coyote: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Coyote)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_platecarrier_coyote_co.paa)
        };
    };

    class TACU_MSF_Vest_PlateCarrier_Green: V_PlateCarrier1_blk {
        dlc = QUOTE(PREFIX);
        author = "Kresky";
        displayName = "Plate Carrier (MSF, Green)";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\vests\msf_vest_platecarrier_green_co.paa)
        };
    };

    // Weapons - Regular Units
    class CUP_arifle_HK416_Black;
    class TACU_MSF_W_HK416_Black: CUP_arifle_HK416_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_M203_Black;
    class TACU_MSF_W_HK416_GL_Black: CUP_arifle_HK416_M203_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_CQB_Black;
    class TACU_MSF_W_HK416_CQC_Black: CUP_arifle_HK416_CQB_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK416_CQB_M203_Black;
    class TACU_MSF_W_HK416_GL_CQC_Black: CUP_arifle_HK416_CQB_M203_Black {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK417_20;
    class TACU_MSF_W_HK417_DMR_Black: CUP_arifle_HK417_20 {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(cup_acc_flashlight);
		};
    };

    class CUP_arifle_HK_M27_VFG;
    class TACU_MSF_W_M27_Grip: CUP_arifle_HK_M27_VFG {
        dlc = QUOTE(PREFIX);
        scope = 1;
		scopeCurator = 1;
		class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
            EQUIP_BIPOD(bipod_01_f_blk);
		};
    };

    class srifle_LRR_F;
    class TACU_MSF_W_M200_Intervention: srifle_LRR_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_lrps);
        };
    };

    // Weapons - Heavy Units
    class arifle_MSBS65_black_F;
    class TACU_MSF_W_Promet_Black: arifle_MSBS65_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_GL_black_F;
    class TACU_MSF_W_Promet_GL_Black: arifle_MSBS65_GL_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_Mark_black_F;
    class TACU_MSF_W_Promet_DMR_Black: arifle_MSBS65_Mark_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_sos);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class arifle_MSBS65_UBS_black_F;
    class TACU_MSF_W_Promet_SG_Black: arifle_MSBS65_UBS_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class LMG_Mk200_black_F;
    class TACU_MSF_W_Stoner99LMG: LMG_Mk200_black_F {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_erco_blk_f);
            EQUIP_POINTER(ace_acc_pointer_green);
        };
    };

    class CUP_hgun_Mk23;
    class TACU_MSF_W_Mk23_SOCOM: CUP_hgun_Mk23 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_mk23_lam_f);
        };
    };

    // Weapons - Spec Ops
    class CUP_hgun_Mk23;
    class TACU_MSF_W_Mk23_SOCOM_Stealth: CUP_hgun_Mk23 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_mk23_lam_f);
            EQUIP_MUZZLE(cup_muzzle_snds_mk23);
        };
    };

    class CUP_smg_MP7;
    class TACU_MSF_W_MP7A1_Stealth: CUP_smg_MP7 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_mrad);
            EQUIP_POINTER(cup_acc_anpeq_15_black);
            EQUIP_MUZZLE(cup_muzzle_snds_mp7);
        };
    };

    class CUP_CZ_BREN2_556_8;
    class TACU_MSF_W_CZ_BREN2_8in_Stealth: CUP_CZ_BREN2_556_8 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_mrad);
            EQUIP_POINTER(cup_acc_anpeq_15_black);
            EQUIP_MUZZLE(cup_muzzle_snds_m16);
        };
    };

    class CUP_srifle_M110_black;
    class TACU_MSF_W_M110_Stealth: CUP_srifle_M110_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(optic_nightstalker);
            EQUIP_POINTER(cup_acc_anpeq_15_black);
            EQUIP_MUZZLE(cup_muzzle_snds_m110_black);
            EQUIP_BIPOD(cup_bipod_vltor_modpod_black);
        };
    };

    // Weapons - XOF
    class CUP_CZ_BREN2_556_11;
    class TACU_MSF_W_CZ_BREN2_11in: CUP_CZ_BREN2_556_11 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_mrad);
            EQUIP_POINTER(cup_acc_flashlight);
        };
    };

    class CUP_CZ_BREN2_556_11_GL;
    class TACU_MSF_W_CZ_BREN2_11in_GL: CUP_CZ_BREN2_556_11_GL {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_OPTIC(cup_optic_mrad);
            EQUIP_POINTER(cup_acc_flashlight);
        };
    };

    class CUP_smg_MP7;
    class TACU_MSF_W_MP7A1: CUP_smg_MP7 {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
        };
    };

    class SMG_03C_TR_black;
    class TACU_MSF_W_P90: SMG_03C_TR_black {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
        };
    };

    class CUP_sgun_M1014_Entry;
    class TACU_MSF_W_M1014_Entry: CUP_sgun_M1014_Entry {
        dlc = QUOTE(PREFIX);
        scope = 1;
        scopeCurator = 1;
        class LinkedItems {
            EQUIP_POINTER(cup_acc_flashlight);
        };
    };
};
