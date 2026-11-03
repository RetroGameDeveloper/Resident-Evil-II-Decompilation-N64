extern u8 D_800C7650_ovl_01[];
extern u8 D_80167DD8_ovl_30[];
extern u8 D_80167E51_ovl_30[];
s32 func_800656BC_ovl_01(s16, s16);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64x;

s8 func_80164C84_ovl_30(void *p, s32 mode)
{
    U64x b;
    u32 off;
    u8 *g;
    s32 a, c;
    u8 *base;

    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    g = (u8 *)(off + b.w.lo);
    a = func_800656BC_ovl_01(*(s16 *)(g + 0x1AAA), *(s16 *)(g + 0x1AB2)) & 0xFF;
    c = func_800656BC_ovl_01(*(s16 *)((u8 *)p + 0x2A), *(s16 *)((u8 *)p + 0x32)) & 0xFF;
    if (mode == 0)
        base = D_80167DD8_ovl_30;
    else
        base = D_80167E51_ovl_30;
    return ((s8 *)(base + c * 11))[a];
}
