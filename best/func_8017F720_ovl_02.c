extern s32 func_8017BE48_ovl_02(s32);

s32 func_8017F720_ovl_02(void) {
    s32 v0 = func_8017BE48_ovl_02(1);
    if (v0 == 0) return 0;
    v0 = func_8017BE48_ovl_02(1);
    if (v0 == 0) return -1;
    return -1;
}
