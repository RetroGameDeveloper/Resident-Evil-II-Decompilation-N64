void func_8003421C_ovl_01(void) {
}

s32 func_8003420C_ovl_01_18(void *arg0, s16 dx, s16 dy, u32 id) {
    u32 *list;
    u8 *entries;
    s32 outer;
    u8 *entry;
    s32 ddx;
    s32 ddy;

    if ((s32)id < 0) {
        return 0;
    }
    ddx = dx << 8;
    list = *(u32 **)((u8 *)arg0 + 0xC8);
    ddy = dy << 8;
    entries = (u8 *)list[1];
    outer = (s32)list[0];
    entry = entries + 0xE;

    for (;;) {
        u32 *obj;
        outer--;
        if (outer == -1) {
            return 0;
        }
        obj = *(u32 **)(entry - 6);
        if (*(s32 *)((u8 *)obj + 8) == (s32)id) {
            s32 inner = *(s16 *)entry;
            u32 base = *(u32 *)entries;
            inner--;
            if (inner != -1) {
                u8 *p = (u8 *)base + 0xA;
                do {
                    inner--;
                    *(u16 *)(p - 2) = *(u16 *)(p - 2) + ddx;
                    *(u16 *)(p) = *(u16 *)(p) + ddy;
                    p += 0x10;
                } while (inner != -1);
            }
            entry += 0x10;
        }
        entries += 0x10;
    }
}
