class TACU_Chernobog_Sons_Infantry_I {
    name = "Infantry (Sons)";


    class TACU_Chernobog_Sons_G_Squad {
        name = "Command Squad";
        side = 2;
        faction = "TACU_Chernobog";
        icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
        MACRO_UNIT0(TACU_Chernobog_Sons_U_I_Squadleader,2);
        MACRO_UNIT1(TACU_Chernobog_Sons_U_I_Rifleman,2);
        MACRO_UNIT2(TACU_Chernobog_Sons_U_I_Machinegunner,2);
        MACRO_UNIT3(TACU_Chernobog_Sons_U_I_Medic,2);
        MACRO_UNIT4(TACU_Chernobog_Sons_U_I_Sniper,2);
    };
};
