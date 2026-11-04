void func_8016715C_ovl_31(void *arg0, s32 arg1) {
    s32 n;
    volatile s32 *p;
    s32 v;

    n = (0x13 - arg1 * 5) * 0x178;
    p = (volatile s32 *)(*(u8 **)((u8 *)arg0 + 0x234) + n);
    p[0x4C] = 0x40;
    v = p[0];
    p[0x4D] = 0x30;
    p[0] = v | 0x80;
}
