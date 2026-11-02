extern s32 D_80012878;
extern s32 D_80012884;
extern s32 func_800B4340_ovl_01(s32);
extern s32 func_800B42BC_ovl_01(s32);

void func_80004B5C(void) {
    if (func_800B4340_ovl_01(D_80012878) & 0xFF) {
        func_800B42BC_ovl_01(D_80012878);
    }
    D_80012884 = 3;
}
