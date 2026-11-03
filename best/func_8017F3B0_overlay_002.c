extern s8 D_80184B10_ovl_02[];
extern s8 D_80184B30_ovl_02[];
extern s32 D_80185700_ovl_02;
s32 func_8017BB30_ovl_02(s32);
void func_8017BB68_ovl_02(s8);

s32 func_8017F3B0_overlay_002(void) {
    s32 v;
    s8 *base;
    s8 *p;
    s8 c;

    v = func_8017BB30_ovl_02(6);
    if (v >= 8) {
        v >>= 2;
        base = D_80184B10_ovl_02;
    } else if (v != 0) {
        base = D_80184B30_ovl_02;
    } else {
        goto zero;
    }
    p = (s8 *)(v * 2 + (s32)base);
    c = p[1];
    func_8017BB68_ovl_02(c);
    return p[0];
zero:
    D_80185700_ovl_02 = 1;
    return 0;
}
