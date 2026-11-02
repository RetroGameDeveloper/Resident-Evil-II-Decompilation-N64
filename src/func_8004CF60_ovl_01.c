typedef struct { u16 f; u8 pad[0x1C8 - 2]; } E1C8;

extern E1C8 D_8010B2C8_ovl_01[];
extern s32 D_8010B660_ovl_01[];

s32 func_8008B028_ovl_01(s32 arg0);
s32 func_8008B0CC_ovl_01(s32 arg0);
void func_8004D1B4_ovl_01(void *arg0);
void func_8004D1A8_ovl_01(void *arg0);
s32 func_8004CF60_ovl_01(void **arg0);

s32 func_8004CF60_ovl_01(void **arg0) {
    s32 *obj;
    s32 *buf;
    u8 *p;
    s32 n;

    obj = (s32 *)func_8008B028_ovl_01(0x10);
    obj[0] = 0x12C;
    buf = (s32 *)func_8008B0CC_ovl_01(0x4B0);
    p = (u8 *)buf;
    n = 0x12B;
    do {
        func_8004D1B4_ovl_01(p + 2);
        n -= 1;
        p += 4;
    } while (n != -1);
    obj[1] = (s32)buf;
    func_8004D1A8_ovl_01(obj);
    *arg0 = obj;
    return (s32)arg0;
}

u16 func_8004CF28_ovl_01(s32 arg0) {
    E1C8 *p;

    p = &D_8010B2C8_ovl_01[arg0];
    return p->f;
}

void func_8004CEF4_ovl_01(s32 arg0) {
    u32 base;
    volatile u16 *p;

    base = (u32)D_8010B2C8_ovl_01;
    p = (volatile u16 *)(base + arg0 * 0x1C8);
    *p &= ~0x40;
}

s32 func_8004CFFC_ovl_01(s32 arg0) {
    s32 *p;
    s32 i;

    p = D_8010B660_ovl_01;
    i = 0;
    do {
        *p = func_8004CF60_ovl_01((void **)func_8008B028_ovl_01(4));
        i += 1;
        p += 1;
    } while (i < 4);
    return arg0;
}
