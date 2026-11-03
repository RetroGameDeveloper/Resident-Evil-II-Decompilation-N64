s32 func_80166C4C_ovl_26(u8 *arg0, s32 arg1) {
    u8 *p = arg0 + 0x2B4;

    if ((p[0xE] >> arg1) & 1) {
        p[0xD] = 0xC2;
        p[0xF] = arg1;
        p[0xE] &= ~(1 << arg1);
        return 0;
    }
    return 1;
}
