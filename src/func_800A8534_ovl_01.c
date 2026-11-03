extern u8 D_801443E8[];
s32 func_800AF074_ovl_01(void);

u16 func_800A8534_ovl_01(void) {
    s32 id = func_800AF074_ovl_01();
    u8 *base;
    u32 idx;
    u8 *p;

    if (id == -1) {
        return 0;
    }
    base = D_801443E8;
    idx = id & 0xFF;
    p = (u8 *)((u32)(idx * 0x1A0) + (u32)base);
    if (*(s32 *)(p + 0x60) != id) {
        return 0;
    }
    if (*(s32 *)(p + 0x24) & 2) {
        return 0;
    }
    return *(u16 *)(p + 0xC2);
}
