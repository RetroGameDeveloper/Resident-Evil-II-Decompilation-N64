extern s32 func_80032EA4_ovl_01(void *, s32, s32, s16);
extern s32 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];

typedef union { u64 q; struct { u32 hi; u32 lo; } w; } U64;

s32 func_80165F34_ovl_35(void *arg0, s32 arg1, s32 arg2, s16 arg3)
{
    U64 b;
    u8 *base;
    u32 mask;
    u32 x;
    u32 y;
    s32 s1;
    s32 r;

    if (arg1) {
        b.w.hi = 0x18000;
        mask = 0x3FFFFFFF;
        b.w.lo = (u32)D_800C7650_ovl_01;
        x = b.w.lo;
        y = b.w.hi;
        base = *(u8 **)(x + y + 0x1D3C);
        s1 = *(s32 *)((u8 *)arg0 + 0x290) & mask;
    } else {
        base = D_800E10D0_ovl_01;
        s1 = *(s32 *)((u8 *)arg0 + 0x28C);
    }
    r = func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x28), *(s32 *)(base + 0x30), arg3);
    if (s1 < arg2) {
        if (r == 0) {
            if (*(s16 *)(base + 0x1F2) >= 0) {
                if (*(u8 *)(base + 0x26F) & 0x80)
                    return 0;
                return 1;
            }
        }
    }
    return 0;
}
