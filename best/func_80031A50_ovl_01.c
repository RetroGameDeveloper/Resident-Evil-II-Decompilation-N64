extern volatile u32 D_800EA230_ovl_01[];

u32 func_80031A50_ovl_01(u32 key)
{
    s32 lo = -1;
    s32 hi = 0x1D9;
    s32 mid;

    do {
        mid = (hi + lo) / 2;
        {
            u32 val = D_800EA230_ovl_01[mid] & 0x1FFFFFFF;
            if (val < key)
                lo = mid;
            else
                hi = mid;
        }
    } while (hi - lo >= 2);

    {
        u32 val = D_800EA230_ovl_01[hi];
        if (key != (val & 0x1FFFFFFF))
            return 5;
        return val >> 29;
    }
}
