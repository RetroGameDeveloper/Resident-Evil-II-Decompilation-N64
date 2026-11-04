void func_80165D98_ovl_32(u8 *arg0, u8 *arg1) {
    u8 state;
    u16 v1;
    u8 v0;
    s32 a0;
    u8 *p = arg0;
    u8 *obj;

    state = *(u8 *)(p + 0x2B5);
    switch (state) {
    case 0:
        *(u8 *)(p + 0x2B5) = 1;
        *(u16 *)(p + 0x2B8) = 0x24;
        *(u8 *)(p + 0x2B7) = 0xA;
        *(u8 *)(p + 0x2BC) = 0xA;
        *(s16 *)(p + 0x2BA) = 1;
    case 1:
        obj = *(u8 **)(arg1 + 0x120);
        *(u16 *)(obj + 0x10) = *(u16 *)(obj + 0x10) + *(u16 *)(p + 0x2B8);

        a0 = *(s16 *)(p + 0x2BA);
        v1 = *(u16 *)(p + 0x2B8);
        v0 = *(u8 *)(p + 0x2B7);
        v1 = v1 - (a0 << 2);
        v0 = v0 - 1;
        *(u8 *)(p + 0x2B7) = v0;
        *(u16 *)(p + 0x2B8) = v1;
        if ((s8)v0 == -1) {
            v0 = *(u8 *)(p + 0x2BC);
            *(u8 *)(p + 0x2BC) = v0 - 1;
            *(u8 *)(p + 0x2B7) = v0;
            *(s16 *)(p + 0x2BA) = -*(s16 *)(p + 0x2BA);
            if (*(s8 *)(p + 0x2B7) == 0) {
                *(u8 *)(p + 0x2B4) = 0;
                *(u8 *)(p + 0x2B5) = 0;
            }
        }
        break;
    default:
        return;
    }
}
