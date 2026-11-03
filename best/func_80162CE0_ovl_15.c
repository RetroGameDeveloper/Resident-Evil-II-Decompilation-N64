typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800C7650_ovl_01[];

s32 func_80162CE0_ovl_15(void *arg0) {
    U64 b;
    u8 *g;
    u8 t;

    b.w.lo = (u32)D_800C7650_ovl_01;
    g = (u8 *)(0x18000 + b.w.lo);
    if (*(u16 *)(g + 0x1A8E) == 0)
        return;
    if (*(s32 *)(g + 0x1A5C) & 0x10)
        return;
    if (*(u8 *)(g + 0x1CEF) != 0)
        return;
    if (*(s8 *)((u8 *)arg0 + 0x2C0) != 0)
        return;
    if (*(u8 *)((u8 *)arg0 + 0x25C) & 4)
        return;
    t = *(u8 *)((u8 *)arg0 + 0x2C2);
    if (t != 0 && t != 7)
        return;
    *(s8 *)((u8 *)arg0 + 0x2C0) = 1;
}
