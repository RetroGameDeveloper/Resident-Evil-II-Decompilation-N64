void func_80164940_ovl_17(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0 + 0x2B4;
    s32 one = 1;
    u32 v;

    if (arg0[0x2D8] != one) {
        func_80166FBC_ovl_17(arg0, one, 0);
    }
    if (p[0x1E] != 0) {
        v = (p[0x1B] << 16) + (p[0x1C] << 8) + p[0x1D] + 0x01000000;
        *(s32 *)(arg0 + 4) = v;
        func_801620C8_ovl_17(arg0, arg1, arg2);
        return;
    }
    p[0x19] = one;
    *(s32 *)(arg0 + 4) = 0x01040000;
}
