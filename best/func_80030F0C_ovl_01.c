extern s32 D_800EA210_ovl_01;
extern u8 D_800C5694_ovl_01;
extern s32 D_8010B684_ovl_01;
extern s32 D_8010B698_ovl_01;

s32 func_8002FD08_ovl_01(void) {
    s32 *volatile p = &D_800EA210_ovl_01;

    *p = 0;
    return 0xF4240;
}

s32 func_8002FC54_ovl_01(s32 arg0) {
    s32 a = arg0;
    s32 r;

    if (D_800C5694_ovl_01 != 0) {
        r = D_800EA210_ovl_01 + D_8010B698_ovl_01;
    } else {
        r = D_800EA210_ovl_01 + D_8010B684_ovl_01;
    }
    D_800EA210_ovl_01 = D_800EA210_ovl_01 + a;
    return r;
}

s32 func_80030F0C_ovl_01(s32 arg0, s32 arg1) {
    s32 a = arg0 - 1;

    a += arg1;
    return a - a % arg1;
}
