extern u8 D_800C7650_ovl_01;
void func_800377B0_ovl_01(s32, s16, void *, s16 *);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64x;

void func_80163D5C_ovl_32(void *arg0) {
    s16 sp[3];
    s32 s0;
    u16 *a2;
    u8 *base;
    U64x b;

    b.w.lo = 0x18000;
    b.w.hi = (u32)&D_800C7650_ovl_01;
    base = (u8 *)(b.w.lo + b.w.hi);

    s0 = *(s32 *)((u8 *)arg0 + 0x234);
    a2 = (u16 *)(s0 + 0x2F0);
    s0 += 0x328;
    sp[0] = *(u16 *)(base + 0x1A4E) - a2[0x27];
    sp[1] = *(u16 *)(base + 0x1A52) - a2[0x29];
    sp[2] = *(u16 *)(base + 0x1A56) - a2[0x2B];
    func_800377B0_ovl_01(0x05042710, *(s16 *)((u8 *)arg0 + 0x66), (void *)s0, sp);
    func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 2) | 0x040F1000,
                         *(s16 *)((u8 *)arg0 + 0x66), (void *)s0, sp);
}
