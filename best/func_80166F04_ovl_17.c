extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

s32 func_80166F04_ovl_17(u8 *arg0, s32 arg1) {
    u8 *base;
    u8 *p;
    U64 b;
    s32 a3;
    u16 s1;
    u16 s2;
    u16 s0;
    s32 ret;

    if (arg0[0x2D3]) {
        b.w.hi = 0x18000;
        b.w.lo = (u32)D_800C7650_ovl_01;
        p = (u8 *)(b.w.lo + b.w.hi);
        base = *(u8 **)(p + 0x1D3C);
        a3 = arg1 << 16;
    } else {
        base = D_800E10D0_ovl_01;
        a3 = arg1 << 16;
    }
    s1 = *(u16 *)(arg0 + 0x64);
    s2 = *(u16 *)(arg0 + 0x68);
    s0 = *(u16 *)(arg0 + 0x66);
    *(u16 *)(arg0 + 0x64) = 0;
    *(u16 *)(arg0 + 0x68) = 0;
    *(u16 *)(arg0 + 0x66) = (u16)((arg0[0x2CC] << 10) & 0xFFF);
    ret = func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x28), *(s32 *)(base + 0x30), a3 >> 16) << 16;
    *(u16 *)(arg0 + 0x64) = s1;
    *(u16 *)(arg0 + 0x66) = s0;
    *(u16 *)(arg0 + 0x68) = s2;
    return ret >> 16;
}
