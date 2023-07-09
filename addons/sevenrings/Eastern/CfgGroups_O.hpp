class TACU_Seven_Rings_O {
    name = "Seven Rings (East)";

    class TACU_Seven_Rings_Infantry_O {
        name = "Infantry";

        class TACU_Seven_Rings_Patrol_O {
            name = "Patrol";
            side = 0;
            faction = "TACU_Seven_Rings_Eastern";
            icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
            MACRO_UNIT0(TACU_Seven_Rings_Eastern_U_O_Rifleman_01,0);
            MACRO_UNIT1(TACU_Seven_Rings_Eastern_U_O_Rifleman_02,0);
        };

        class TACU_Seven_Rings_Fireteam_O: TACU_Seven_Rings_Patrol_O {
            name = "Fireteam";
            MACRO_UNIT0(TACU_Seven_Rings_Eastern_U_O_Leader,0);
            MACRO_UNIT1(TACU_Seven_Rings_Eastern_U_O_Medic,0);
            MACRO_UNIT2(TACU_Seven_Rings_Eastern_U_O_Autorifleman,0);
            MACRO_UNIT3(TACU_Seven_Rings_Eastern_U_O_Marksman,0);
        };

        class TACU_Seven_Rings_Squad_O: TACU_Seven_Rings_Patrol_O {
            name = "Squad";
            MACRO_UNIT0(TACU_Seven_Rings_Eastern_U_O_Leader,0);
            MACRO_UNIT1(TACU_Seven_Rings_Eastern_U_O_Medic,0);
            MACRO_UNIT2(TACU_Seven_Rings_Eastern_U_O_Grenadier,0);
            MACRO_UNIT3(TACU_Seven_Rings_Eastern_U_O_Autorifleman,0);
            MACRO_UNIT4(TACU_Seven_Rings_Eastern_U_O_Sharpshooter,0);
            MACRO_UNIT5(TACU_Seven_Rings_Eastern_U_O_Engineer,0);
            MACRO_UNIT6(TACU_Seven_Rings_Eastern_U_O_Ambusher,0);
            MACRO_UNIT7(TACU_Seven_Rings_Eastern_U_O_Rifleman_02,0);
        };
    };
};
