class CfgPatches
{
    class prazv_weight_NVG_Rebalance
    {
        requiredaddons[]=
        {
            //this 2 commented shits throw up an error even tho they are required???
            //"MOL_GPNVG18",
            //"GPNG18",
            "rhsusf_c_troops",
            "uk3cb_factions_equipment2"
        };
        requiredversion= 1.0;
        units[]={};
        weapons[]={};
        name = "NVG Weight Rebalance";
        author = "prazv";
    };
};
class CfgWeapons
{
    class NVGoggles;
	
    class JAS_GPNVG18_Tan_WP: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class JAS_GPNVG18_blk: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class JAS_GPNVG18_blk_WP: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class JAS_GPNVG18_Tan: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class JAS_GPNVG18_blk_TI: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class JAS_GPNVG18_Tan_TI: NVGoggles
    {
        class ItemInfo
        {
            mass = 24;
        };
    };
    class UK3CB_ANPVS7: NVGoggles
    {
        class ItemInfo
        {
            mass = 18;
        };
    };
    class UK3CB_PVS5A: NVGoggles
    {
        class ItemInfo
        {
            mass = 18;
        };
    };
    class rhsusf_ANPVS_14: NVGoggles
    {
        class ItemInfo
        {
            mass = 16;
        };
    };
    class rhsusf_ANPVS_15: NVGoggles
    {
        class ItemInfo
        {
            mass = 20;
        };
    };
    class rhsusf_Rhino: NVGoggles
    {
        class ItemInfo
        {
            mass = 1;
        };
    };
};
