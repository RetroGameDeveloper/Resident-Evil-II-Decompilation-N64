extern s32 D_80184AA4_ovl_02;
extern s32 D_80184AA8_ovl_02;
extern s32 D_80184AAC_ovl_02;
void func_8017B3CC_ovl_02(s32);
s32 func_8017B48C_ovl_02(s32 arg0, s32 *arg1, s32 arg2) {
    s32 n = arg2;
    s32 tmp;

    if (D_80184AA8_ovl_02 == 0) {
        func_8017B3CC_ovl_02(arg0);
    }
    tmp = D_80184AA4_ovl_02 + 0x1000;
    *arg1 = tmp - D_80184AA8_ovl_02;
    D_80184AA8_ovl_02 -= n;
    if ((u32)D_80184AAC_ovl_02 < (u32)n) {
        n = D_80184AAC_ovl_02;
    }
    D_80184AAC_ovl_02 -= n;
    return n;
}
