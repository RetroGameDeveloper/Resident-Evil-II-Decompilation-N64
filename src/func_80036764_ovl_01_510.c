s32 func_80036764_ovl_01_510(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p = arg0;
    s32 x = *(s32 *)(p + 4);
    x &= -256;
    arg1 &= -256;
    if (x != arg1)
        p[0x1E8] = 0xff;
}
