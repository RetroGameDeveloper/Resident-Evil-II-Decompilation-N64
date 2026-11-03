typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800C7650_ovl_01[];
extern s32 func_80033634_ovl_01(void);
extern s32 func_80164C84_ovl_30(void *, s32);
void func_80164D1C_ovl_30(O *arg0)
{
    U64 b;
    u32 off;
    u8 *base;
    u32 v1;
    s32 r;
    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(off + b.w.lo);
    if (*(s16 *)(base + 0x1C72) < 0)
        return;
    v1 = 0x1C2;
    if (*(s32 *)(base + 0x1A3C) & 0x20)
        v1 = 0x177;
    if (arg0->p[0x2C7] != 0)
        return;
    if (func_80164C84_ovl_30(arg0, (u32) * (s16 *)(arg0->p + 0x1F2) < v1) != 0)
        return;
    r = func_80033634_ovl_01() & 0xF;
    if (((0x1A0 >> r) & 1) == 0)
        return;
    arg0->p[5] = 7;
    *(u16 *)(arg0->p + 6) = 0;
}
