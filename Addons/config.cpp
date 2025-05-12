class CfgPatches
{
    class NVG_Rebalance
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
        mass = 24;
    };
    class JAS_GPNVG18_blk: NVGoggles
    {
        mass = 24;
    };
    class JAS_GPNVG18_blk_WP: NVGoggles
    {
        mass = 24;
    };
    class JAS_GPNVG18_Tan: NVGoggles
    {
        mass = 24;
    };
    class JAS_GPNVG18_blk_TI: NVGoggles
    {
        mass = 24;
    };
    class JAS_GPNVG18_Tan_TI: NVGoggles
    {
        mass = 24;
    };
    class UK3CB_ANPVS7: NVGoggles
    {
        mass = 16;
    };
    class UK3CB_PVS5A: NVGoggles
    {
        mass = 16;
    };
    class rhsusf_ANPVS_14:NVGoggles
    {
        mass = 14;
    };
    class rhsusf_ANPVS_15
    {
        mass = 20;
    };
    class rhsusf_Rhino
    {
        mass = 5;
    };
};
