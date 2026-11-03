extern u8 D_800C7650_ovl_01[];
extern s32 func_80032EA4_ovl_01(void *, void *, void *, s32);

void func_80163ED0_ovl_28(u8 *p) {
    volatile u8 pad[0x38];
    union { u64 q; struct { u32 lo; u32 hi; } w; } b;
    u32 off;
    u32 base;
    u32 t;

    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    base = b.w.lo + off;
    t = *(u32 *)(p + 0x28C);
    func_80032EA4_ovl_01(p, *(void **)(base + 0x1AA8), *(void **)(base + 0x1AB0), 0x5F4);
    func_80032EA4_ovl_01(p, *(void **)(base + 0x1AA8), *(void **)(base + 0x1AB0), 0x338);
    if ((func_80032EA4_ovl_01(p, *(void **)(base + 0x1AA8), *(void **)(base + 0x1AB0), 0x400) << 16) == 0 && t >= 0x9C5)
        *(u32 *)(p + 4) = 0x01010000;
}
