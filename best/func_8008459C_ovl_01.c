extern u8 D_8011C8C4_ovl_01[];
extern u8 D_801247F8_ovl_01[];
extern s32 D_801247D0_ovl_01;
extern s32 D_801247D4_ovl_01;
extern s32 D_801247DC_ovl_01;

void func_8008459C_ovl_01(void);

void func_8008459C_ovl_01(void) {
    u8 *p;

    p = D_8011C8C4_ovl_01;
    *(void **)(p + 0x7800) = p;
}

void func_800850D4_ovl_01(void) {
    u8 *p;
    s32 n;

    p = D_8011C8C4_ovl_01;
    n = 0x300;
    do {
        *(s16 *)(p + 0x22) = 0;
        n -= 1;
        p += 0x28;
    } while (n != 0);
    func_8008459C_ovl_01();
}

void func_80085110_ovl_01(void) {
    s32 i;
    u8 *p;

    for (i = 0; i < 0x80; i++) {
        p = D_801247F8_ovl_01 + i * 16;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x28) = i + 1;
        *(s32 *)(p + 0x2C) = 0;
    }
    *(s32 *)(D_801247F8_ovl_01 + 0x28) = 0;
    *(s32 *)(D_801247F8_ovl_01 + 0x14) = 1;
    for (i = 1; i < 4; i++) {
        *(s32 *)(D_801247F8_ovl_01 + 0x14 + i * 4) = 0;
    }
    *(s32 *)(D_801247F8_ovl_01 + 0x10) = 0;
    *(s32 *)(D_801247F8_ovl_01 + 0x818) = 0;
    *(s32 *)D_801247F8_ovl_01 = 0;
    *(s32 *)(D_801247F8_ovl_01 + 4) = 1;
}

void func_800856D4_ovl_01(void) {
    u8 *p;
    s32 n;

    p = D_801247F8_ovl_01;
    n = 0x7F;
    D_801247DC_ovl_01 = 2;
    *(s32 *)(p + 8) = 0;
    do {
        *(s32 *)(p + 0x24 + 8) = 0;
        n -= 1;
        p += 0x10;
    } while (n != -1);
    D_801247D0_ovl_01 = 0;
    D_801247D4_ovl_01 = -1;
}
