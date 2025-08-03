class CfgPatches
{
    class prazv_weight_NVG_Rebalance
    {
        requiredaddons[]={};
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
            mass = 16;
        };
    };
    class UK3CB_PVS5A: NVGoggles
    {
        class ItemInfo
        {
            mass = 16;
        };
    };
    class rhsusf_ANPVS_14:NVGoggles
    {
        class ItemInfo
        {
            mass = 14;
        };
    };
    class rhsusf_ANPVS_15
    {
        class ItemInfo
        {
            mass = 20;
        };
    };
    class rhsusf_Rhino
    {
        class ItemInfo
        {
            mass = 5;
        };
    };
};

