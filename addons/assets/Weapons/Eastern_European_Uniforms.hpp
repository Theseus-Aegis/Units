// Heli Pilot Coveralls
class TACU_Proxy_Russia_Uniform_Coveralls: Uniform_Base {
    displayName = "Heli Pilot Coveralls (EE)";
    scope = 2;
    scopeCurator = 2;
    model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
    picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_coveralls_f_ca.paa";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_coveralls_01_co.paa)};

    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Proxy_Russia_Unit_Coveralls";
        containerClass = "Supply40";
        mass = 60;
    };
};

// Combat Fatigues
class TACU_Proxy_Russia_Uniform_Combat_Fatigues: Uniform_Base {
    displayName = "Combat Fatigues (EE)";
    scope = 2;
    scopeCurator = 2;
    picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_f_ca.paa";
    model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues";
        containerClass = "Supply40";
        mass = 40;
    };
};

// Combat Fatigues - Officer
class TACU_Proxy_Russia_Uniform_Combat_Fatigues_Officer: Uniform_Base {
    displayName = "Combat Fatigues (Officer, EE)";
    scope = 2;
    scopeCurator = 2;
    picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_officer_f_ca.paa";
    model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_officer_01_co.paa)};

    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues_Officer";
        containerClass = "Supply40";
        mass = 40;
    };
};

// Combat Fatigues - Rolled
class TACU_Proxy_Russia_Uniform_Combat_Fatigues_Rolled: Uniform_Base {
    displayName = "Combat Fatigues Rolled (EE)";
    scope = 2;
    scopeCurator = 2;
    picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_e_uniform_01_shortsleeve_f_ca.paa";
    model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Proxy_Russia_Unit_Combat_Fatigues_Rolled";
        containerClass = "Supply40";
        mass = 40;
    };
};

// Deserter Fatigues
class TACU_Proxy_Russia_Uniform_Deserter: Uniform_Base {
    displayName = "Deserter Fatigues (EE)";
    scope = 2;
    scopeCurator = 2;
    picture = "\a3\characters_f_enoch\uniforms\data\ui\icon_u_i_l_uniform_01_camo_f_ca.paa";
    model = "\a3\characters_f\common\suitpacks\suitpack_original_f.p3d";
    hiddenSelectionsTextures[] = {QPATHTOF(data\uniforms\proxy_russia_soldier_01_co.paa)};

    class ItemInfo: UniformItem {
        uniformModel = "-";
        uniformClass = "TACU_Proxy_Russia_Unit_Deserter_Fatigues";
        containerClass = "Supply40";
        mass = 40;
    };
};
