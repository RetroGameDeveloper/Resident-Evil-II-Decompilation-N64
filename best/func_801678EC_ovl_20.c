extern u8 D_800C7650_ovl_01[];
extern s32 func_80032B8C_ovl_01(void *, s32);
extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_801678EC_ovl_20(u8 *p, s32 a1) {
    s32 t;
    s32 r;

    switch (p[6]) {
    case 0:
        *(s32 *)(p + 0x1E8) = 0x01060300;
        p[6] = 1;
        *(u16 *)(p + 0x1E0) = 0x320;
        *(u16 *)(p + 0x1E4) = 0;
        *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x1A5C) |= 0x40;
        p[0x25C] = 1;
        p[0x26F] |= 0x80;
    case 1:
        r = func_80089D34_ovl_01(p, a1, 0, 0x400);
        p[6] = p[6] + r;
        t = *(u16 *)(p + 0x1E0) - 0x96;
        *(u16 *)(p + 0x1E0) = t;
        if ((s16)t < 0x12C) *(u16 *)(p + 0x1E0) = 0x12C;
        break;
    case 2:
        *(s32 *)(p + 0x1E8) = 0x02000300;
        p[6] = 3;
    case 3:
        r = func_80089D34_ovl_01(p, a1, 0, 0x400);
        p[6] = p[6] + r;
        t = *(u16 *)(p + 0x1E0) - 0x14;
        *(u16 *)(p + 0x1E0) = t;
        if ((s16)t < 0) *(u16 *)(p + 0x1E0) = 0;
        break;
    case 4:
        p[0x25C] = 1;
        *(s32 *)(p + 4) = 0x01000000;
        p[0x26F] &= 0x7F;
        *(s32 *)(D_800C7650_ovl_01 + 0x18000 + 0x1A5C) &= ~0x40;
        break;
    }
    func_80032B8C_ovl_01(p, 0x800);
}
