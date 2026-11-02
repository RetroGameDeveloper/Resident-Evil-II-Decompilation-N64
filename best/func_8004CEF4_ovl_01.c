typedef struct { u16 f; u8 pad[0x1C8 - 2]; } E1C8;

extern E1C8 D_8010B2C8_ovl_01[];
extern s32 D_8010B660_ovl_01[];

s32 func_8008B028_ovl_01(s32 arg0);
s32 func_8004CF60_ovl_01(void **arg0);

u16 func_8004CF28_ovl_01(s32 arg0) {
    u32 base;
    u16 *p;

    base = (u32)D_8010B2C8_ovl_01;
    p = (u16 *)(base + arg0 * 0x1C8);
    return *p;
}

void func_8004CEF4_ovl_01(s32 arg0) {
    u32 base;
    u16 *p;

    base = (u32)D_8010B2C8_ovl_01;
    p = (u16 *)(base + arg0 * 0x1C8);
    *p &= ~0x40;
}

s32 func_8004CFFC_ovl_01(s32 arg0) {
    s32 *p;
    s32 i;

    p = D_8010B660_ovl_01;
    for (i = 0; i < 4; i++) {
        p[i] = func_8004CF60_ovl_01((void **)func_8008B028_ovl_01(4));
    }
    return arg0;
}
