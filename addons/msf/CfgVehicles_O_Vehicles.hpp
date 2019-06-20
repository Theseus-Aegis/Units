// Units - Crewmen
class TACU_MSF_U_O_Black_Pilot: TACU_MSF_U_I_Black_Pilot {
    side = 0;
    faction = "TACU_MSF_O";
};

// Vehicles
class TACU_MSF_V_O_Mi24: TACU_MSF_V_I_Mi24 {
    faction = "TACU_MSF_O";
    side = 0;
    displayName = "Mi-24 Hind";
    crew = "TACU_MSF_U_O_Black_Pilot";
    typicalCargo[] = {"TACU_MSF_U_O_Black_Pilot"};
};
