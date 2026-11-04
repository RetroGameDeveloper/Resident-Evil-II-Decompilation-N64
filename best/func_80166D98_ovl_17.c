extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern s32 func_8006A8B0_ovl_01(s16 arg0);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

s32 func_80166D98_ovl_17(u8 *p, s32 a1, s32 a2) {
    u8 *base;
    U64 b;
    s32 value;
    s32 diff;
    if (p[0x2D3]) {
        b.w.hi = 0x18000;
        b.w.lo = (u32)D_800C7650_ovl_01;
        base = *(u8 **)((u8 *)(b.w.lo + b.w.hi) + 0x1D3C);
    } else {
        base = D_800E10D0_ovl_01;
    }
    value = func_8006A8B0_ovl_01((s16)a2);
    if (a2 & 1) {
        diff = *(s32 *)(base + 0x30) - value;
        if (diff < 0) diff = -diff;
        if (diff >= 0xBB8) {
            diff = 0;
        } else {
            return 1;
        }
    } else {
        value = *(s32 *)(base + 0x28) - value;
        if (value < 0) value = -value;
        if (value < 0xBB8) return 1;
    }
    return 0;
}
