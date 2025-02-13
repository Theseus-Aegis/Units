class CfgGroups {
    class INDEP {
        class IND_F {
            class SpecOps {
                class TACU_AAF_G_Patrol {
                    name = "Green Daggers Patrol";
                    side = 2;
                    faction = "IND_F";
                    icon = "\a3\ui_f\data\map\markers\nato\n_inf.paa";
                    __COUNTER_RESET__
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman,2);
                };
                class TACU_AAF_G_Fireteam: TACU_AAF_G_Patrol {
                    name = "Green Daggers Fireteam";
                    __COUNTER_RESET__
                    GROUP_UNIT(TACU_AAF_U_I_TeamLeader,2);
                    GROUP_UNIT(TACU_AAF_U_I_Engineer,2);
                    GROUP_UNIT(TACU_AAF_U_I_Medic,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman,2);
                };
                class TACU_AAF_G_ATTeam: TACU_AAF_G_Patrol {
                    name = "Green Daggers AT Team";
                    __COUNTER_RESET__
                    GROUP_UNIT(TACU_AAF_U_I_TeamLeader,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman_AT,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman_AT,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman,2);
                };
                class TACU_AAF_G_Squad: TACU_AAF_G_Patrol {
                    name = "Green Daggers Squad";
                    __COUNTER_RESET__
                    GROUP_UNIT(TACU_AAF_U_I_TeamLeader,2);
                    GROUP_UNIT(TACU_AAF_U_I_Marksman,2);
                    GROUP_UNIT(TACU_AAF_U_I_Grenadier,2);
                    GROUP_UNIT(TACU_AAF_U_I_Rifleman_AT,2);
                    GROUP_UNIT(TACU_AAF_U_I_TeamLeader,2);
                    GROUP_UNIT(TACU_AAF_U_I_MG,2);
                    GROUP_UNIT(TACU_AAF_U_I_Medic,2);
                    GROUP_UNIT(TACU_AAF_U_I_Demolitions,2);
                };
            };
        };
    };
};
