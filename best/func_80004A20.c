extern s32 D_80012884;
extern u32 D_800C7650;

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_80004A20(void) {
    U64 base;
    s32 *p;
    u32 delta = 0x18000U;

    D_80012884 = 0;
    base.w.lo = (u32)&D_800C7650;
    p = (s32 *)(u32)(base.w.lo + delta);
    p[0x697] &= ~0x20;
}
