// AW101 - Merlin
class TACU_Merlin_Base: Heli_Transport_02_base_F {
    class TextureSources {
        class BAF {
            author = "GilleeDoo, Mike";
            displayName = "British Armed Forces";
            textures[] = {
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa),
                QPATHTOF(data\merlin\X.paa)
            };
            factions[] = {};
        };
    };

    textureList[] = {"BAF", 1};

    class EventHandlers: EventHandlers {
        postInit = "if (local (_this select 0)) then { [_this select 0, '', [], true] call BIS_fnc_initVehicle; };";
    };
};
