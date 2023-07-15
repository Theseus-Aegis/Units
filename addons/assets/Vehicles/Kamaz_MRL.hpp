// Kamaz MRL (Artillery)
class I_Truck_02_MRL_F: Truck_02_MRL_base_F {
    class EventHandlers;
};

class TACU_Kamaz_MRL_Base: I_Truck_02_MRL_F {
    MACRO_CLEAR_VEHICLE_CARGO;
    MACRO_DEFAULT_VEHICLE;
    class TextureSources {
        class Black {
            displayName = "Black";
            author = "Bohemia Interactive";
            textures[] = {
                "\lxws\vehicles_f_lxws\data\Truck_02\Truck_02_kab_black_CO.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\A3\soft_f_Enoch\Truck_02\Data\Truck_02_mrl_EAF_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"Black", 1};

    MACRO_EVENTHANDLERS;
};
