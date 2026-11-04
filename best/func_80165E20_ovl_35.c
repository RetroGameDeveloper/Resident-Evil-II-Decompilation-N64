s32 func_80165E20_ovl_35(s32 arg0, void *arg1) {
    u8 *p = (u8 *)arg1;
    s32 one = 1;
    u16 v;

    switch (p[7]) {
    case 0:
        p[7] = one;
        *(s16 *)(p + 2) = -0x100;
        *(s16 *)(p + 4) = -0x100;
        /* fallthrough */
    case 1:
        v = *(u16 *)(p + 2) + 0x200;
        *(u16 *)(p + 2) = v;
        if ((s16)v >= 0x300) {
            p[7] = 2;
            *(s16 *)(p + 2) = 0x300;
        }
        break;
    case 2:
        v = *(u16 *)(p + 2) - 0x200;
        *(u16 *)(p + 2) = v;
        if ((s16)v < -0xFF) {
            p[7] = one;
            *(s16 *)(p + 2) = -0x100;
        }
        break;
    }
    v = *(u16 *)(p + 2);
    *(u16 *)(p + 4) = v;
    return v;
}
