s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_801659DC_ovl_12(void *arg0, s32 arg1);

void func_80165140_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;

    if (p[7] == 0) {
        p[7] = 1;
        *(s32 *)(p + 0x1E8) = 0x160F0300;
        p[0x26F] &= 0x7F;
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
        func_801659DC_ovl_12(arg0, 1);
        p[0x2BF] = 0;
        *(s32 *)(p + 4) = 0x01020000;
    }
}
