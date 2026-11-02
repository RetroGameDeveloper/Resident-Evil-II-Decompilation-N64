extern s32 D_800EA210_ovl_01;
extern u8 D_800C5694_ovl_01;
extern s32 D_8010B684_ovl_01;
extern s32 D_8010B698_ovl_01;

s32 func_8002FCF0_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return *(s32 *)(*(void **)((u8 *)arg0 + 4) + 0x2C) - arg3;
}

s32 func_8002FD08_ovl_01(void) {
    D_800EA210_ovl_01 = 0;
    return 0xF4240;
}

s32 func_8002FC54_ovl_01(s32 arg0) {
    s32 r;

    if (D_800C5694_ovl_01 != 0) {
        r = D_800EA210_ovl_01 + D_8010B698_ovl_01;
    } else {
        r = D_800EA210_ovl_01 + D_8010B684_ovl_01;
    }
    D_800EA210_ovl_01 += arg0;
    return r;
}

s32 func_80030F0C_ovl_01(s32 arg0, s32 arg1) {
    return (arg0 - 1 + arg1) / arg1 * arg1;
}
