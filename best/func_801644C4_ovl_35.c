typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800C7650_ovl_01[];
void func_801644C4_ovl_35(void *a0) {
    U64 b;
    U64 bg;
    volatile u8 *p;
    s32 v1;
    u8 *g;
    b.w.lo = (u32)a0;
    p = (u8*)b.w.lo + 0x2b4;
    if (p[0x11]) p[0xf] = 1;
    bg.w.lo = (u32)D_800C7650_ovl_01;
    bg.w.hi = 0x18000;
    g = (u8*)(bg.w.lo + bg.w.hi);
    if (*(u32*)(g + 0x1a3c) & 0x20) v1 = 0xc8; else v1 = 0xfa;
    if (p[0x15] && !p[0xf] && (p[9] & 1)) {
        s32 n = p[0x15] * v1;
        u32 q = (u32)n / 3;
        if ((u32)*(s16*)((u8*)a0 + 0x1f2) < q) {
            u8 t = p[0x15];
            p[0xf] = 1;
            p[0x15] = t - 1;
        }
    }
}
