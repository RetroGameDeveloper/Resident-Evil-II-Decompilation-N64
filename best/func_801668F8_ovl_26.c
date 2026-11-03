s32 func_80040E88_ovl_01(void *, void *);
void func_801668F8_ovl_26(u8 *obj) {
    u8 *base;
    u32 amount;
    s32 neg;
    s16 *p;

    if (*(u8 *)(obj + 0x2B8) != 0) {
        base = *(u8 **)(obj + 0x234);
        amount = *(u16 *)(obj + 0x2BA);
        neg = -amount;
        *(s16 *)(base + 0x1084) = neg;
        func_80040E88_ovl_01(base + 0x1080, base + 0x1030);
        p = (s16 *)(base + 0x11A0);
        p[0x2D] = amount;
        amount = amount * 2;
        p[0x2E] = amount;
        func_80040E88_ovl_01(base + 0x11F8, base + 0x11A8);
        p = (s16 *)(base + 0x1318);
        p[0x2D] = neg;
        p[0x2E] = amount;
        func_80040E88_ovl_01(base + 0x1370, base + 0x1320);
    }
}
