class CfgVehicles
{
#include "macros.hpp"
#include "units\baseunits.hpp"
#include "units\contractors.hpp"
#include "units\specialists.hpp"

class B_Heli_Transport_01_F;
class V_Helicopter_Transport_01 : B_Heli_Transport_01_F
{
    crew = "I_Vanguard_Contractor_Pilot_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Helicopter_Transport_01.jpg";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"VanguardPMC\UI\Vehicles\Heli_Transport_01_ext01_VANGUARD_CO.paa", "VanguardPMC\UI\Vehicles\Heli_Transport_01_ext02_VANGUARD_CO.paa"};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};

class B_Heli_Light_01_dynamicLoadout_F;
class V_LittleBird : B_Heli_Light_01_dynamicLoadout_F
{
    crew = "I_Vanguard_Contractor_Pilot_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_LittleBird.jpg";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"VanguardPMC\UI\Vehicles\B_Heli_Light_01_ext_VANGUARD.paa"};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};

class tacs_Offroad_B_Armed_Black;
class V_Offroad_Armed_Black : tacs_Offroad_B_Armed_Black
{
    crew = "I_Vanguard_Contractor_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Offroad_Armed_Black.jpg";
    typicalCargo[] = {};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};

class B_MRAP_01_F;
class V_MATV_01_Black : B_MRAP_01_F
{
    crew = "I_Vanguard_Contractor_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_MATV_01_Black.jpg";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"VanguardPMC\UI\Vehicles\MRAP_01_ext01_VANGUARD_CO.paa", "VanguardPMC\UI\Vehicles\MRAP_01_ext02_VANGUARD_CO.paa"};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};
class I_APC_Wheeled_03_cannon_F;
class V_Wheeled_Gorgon : I_APC_Wheeled_03_cannon_F
{
    crew = "I_Vanguard_Contractor_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Wheeled_Gorgon.jpg";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"VanguardPMC\UI\Vehicles\APC_Wheeled_03_Ext01_CO.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext2_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\rcws30_co.paa", "A3\armor_f_gamma\APC_Wheeled_03\data\apc_wheeled_03_ext_alpha_co.paa"};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};
class I_MRAP_03_F;
class V_Strider : I_MRAP_03_F
{
    crew = "I_Vanguard_Specialist_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Strider.jpg";
    typicalCargo[] = {};
    hiddenSelectionsTextures[] = {"VanguardPMC\UI\Vehicles\MRAP_03_ext01.paa"};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};
class B_T_LSV_01_unarmed_black_F;
class V_Dagor_Black : B_T_LSV_01_unarmed_black_F
{
    crew = "I_Vanguard_Specialist_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Dagor_Black.jpg";
    typicalCargo[] = {};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};
class O_T_LSV_02_armed_black_F;
class V_Quillin_Armed_Black : O_T_LSV_02_armed_black_F
{
    crew = "I_Vanguard_Specialist_Driver_F";
    editorPreview = "\VanguardPMC\UI\Vehicles\V_Quillin_Armed_Black.jpg";
    typicalCargo[] = {};
    faction = "VANGUARD_F";
    side = 2;
    scope = 2;
    scopeCurator = 2;
    class TransportItems
    {
        class _xx_FirstAidKit
        {
            name = "FirstAidKit";
            count = 0;
        };
    };
};
};