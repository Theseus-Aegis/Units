class CfgGlasses {
    class None;
    class TACU_MSF_Glasses_Headbag: None {
        dlc = QUOTE(PREFIX);
        author = "Rebel, Facel";
        scope = 2;
        scopeCurator = 2;
        identityTypes[] = {};
        mass = 5;
        displayName = "Headbag";
        model = QPATHTOF(msf_glasses_headbag.p3d);
        picture = QPATHTOF(ui\headbag\msf_glasses_headbag_ca.paa);
        ace_overlay = QPATHTOF(ui\headbag\msf_glasses_headbag_overlay.paa);
        ace_overlayCracked = QPATHTOF(ui\headbag\msf_glasses_headbag_overlay_cracked.paa);
        ace_resistance = 1;
        ace_protection = 1;
    };

    class TACU_MSF_Glasses_Scarf_Green: None {
        dlc = QUOTE(PREFIX);
        author = "Facel";
        scope = 2;
        scopeCurator = 2;
        identityTypes[] = {};
        mass = 4;
        displayName = "Shoulder Scarf (Green)";
        model = QPATHTOF(msf_glasses_scarf.p3d);
        picture = QPATHTOF(ui\scarves\msf_glasses_scarf_green_ca.paa);
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {QPATHTOF(data\scarves\msf_glasses_scarf_green_co.paa)};
		hiddenSelectionsMaterials[] = {QPATHTOF(data\scarves\msf_glasses_scarf.rvmat)};
    };
    class TACU_MSF_Glasses_Scarf_Khaki: TACU_MSF_Glasses_Scarf_Green {
        author = "Facel";
        displayName = "Shoulder Scarf (Khaki)";
        picture = QPATHTOF(ui\scarves\msf_glasses_scarf_khaki_ca.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\scarves\msf_glasses_scarf_khaki_co.paa)};
    };
    class TACU_MSF_Glasses_Scarf_Black: TACU_MSF_Glasses_Scarf_Green {
        author = "Facel";
        displayName = "Shoulder Scarf (Black)";
        picture = QPATHTOF(ui\scarves\msf_glasses_scarf_black_ca.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\scarves\msf_glasses_scarf_black_co.paa)};
    };
    class TACU_MSF_Glasses_Scarf_Red: TACU_MSF_Glasses_Scarf_Green {
        author = "Facel";
        displayName = "Shoulder Scarf (Red)";
        picture = QPATHTOF(ui\scarves\msf_glasses_scarf_red_ca.paa);
		hiddenSelectionsTextures[] = {QPATHTOF(data\scarves\msf_glasses_scarf_red_co.paa)};
    };
};
