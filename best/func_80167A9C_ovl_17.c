extern u8 D_800E10D0_ovl_01[];

void func_80167A9C_ovl_17(u8 *p) {
    u8 *g = D_800E10D0_ovl_01;
    s32 t = p[0x2BE];
    s32 m = *(s32 *)p & 0xE3FFFFFF;
    s32 d;

    *(s32 *)p = m;
    switch (t) {
    case 0:
        *(s32 *)p = m | 0x0C000000;
        break;
    case 1:
        *(s32 *)p = m | 0x10000000;
        break;
    case 2:
    case 3:
        d = *(s32 *)(g + 0x2C) - *(s32 *)(p + 0x2C);
        if (d >= 0x1069) {
            *(s32 *)p |= 0x10000000;
        } else {
            *(s32 *)p |= 0x18000000;
            if (d < 0x834)
                *(s32 *)p |= 0x04000000;
        }
        break;
    }
}
