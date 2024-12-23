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
                "\lxws\vehicles_f_lxws\data\truck_02\truck_02_kab_black_co.paa",
                "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
                "\a3\soft_f_enoch\truck_02\data\truck_02_mrl_eaf_co.paa"
            };
            factions[] = {};
        };
    };

    textureList[] = {"Black", 1};

    MACRO_EVENTHANDLERS;
};
