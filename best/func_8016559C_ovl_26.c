typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800E10D0_ovl_01[];
extern u8 D_800C7650_ovl_01[];

void func_8016559C_ovl_26(void *arg0)
{
    u8 *p = (u8 *)arg0;
    U64 gb;
    u8 *g;
    u8 *base;
    u8 t;
    u32 w;

    gb.q = (u64)(u32)D_800E10D0_ovl_01;
    g = (u8 *)(u32)gb.q;
    if (p[0x2DC]) {
        g[5] = 2;
        g[6] = 0;
        g[7] = 0;
        p[0x2DC] = 0;
    }
    if (p[0x2D9]) {
        *(u32 *)(p + 4) = 0x07000000;
        return;
    }
    p[6] = 1;
    *(u32 *)(p + 0x1E8) = ((p[0x2CD] * 13 + 12) << 24) + 0x3F00;
    base = (u8 *)(D_800C7650_ovl_01 + 0x18000);
    *(u16 *)(base + 0x1A78) &= 0xFFBF;
    t = p[0x25C];
    w = *(u32 *)p;
    p[0x25C] = t | 2;
    *(u32 *)p = w | 4;
}
