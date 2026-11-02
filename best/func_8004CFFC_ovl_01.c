typedef struct { u16 f; u8 pad[0x1C8 - 2]; } E1C8;

extern E1C8 D_8010B2C8_ovl_01[];
extern s32 D_8010B660_ovl_01[];

s32 func_8008B028_ovl_01(s32 arg0);
s32 func_8008B0CC_ovl_01(s32 arg0);
void func_8004D1B4_ovl_01(void *arg0);
void func_8004D1A8_ovl_01(void *arg0);
s32 func_8004CF60_ovl_01(void **arg0);

s32 func_8004CF60_ovl_01(void **arg0) {
    s32 *s2;
    s32 s3;
    u8 *s1;
    s32 s0;

    s2 = (s32 *)func_8008B028_ovl_01(0x10);
    s2[0] = 0x12C;
    s3 = func_8008B0CC_ovl_01(0x4B0);
    s1 = (u8 *)s3;
    s0 = 0x12B;
    do {
        func_8004D1B4_ovl_01(s1 + 2);
        s0 -= 1;
        s1 += 4;
    } while (s0 != -1);
    func_8004D1A8_ovl_01(s2);
    s2[1] = s3;
    *arg0 = (void *)s2;
    return (s32)arg0;
}

u16 func_8004CF28_ovl_01(s32 arg0) {
    return D_8010B2C8_ovl_01[arg0].f;
}

void func_8004CEF4_ovl_01(s32 arg0) {
    D_8010B2C8_ovl_01[arg0].f &= ~0x40;
}

s32 func_8004CFFC_ovl_01(s32 arg0) {
    s32 i;
    s32 *p;

    i = 0;
    p = D_8010B660_ovl_01;
    do {
        *p = func_8004CF60_ovl_01((void **)func_8008B028_ovl_01(4));
        i += 1;
        p += 1;
    } while (i < 4);
    return arg0;
}
