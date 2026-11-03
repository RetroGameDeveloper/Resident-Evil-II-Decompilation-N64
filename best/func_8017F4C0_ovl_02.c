extern s8 D_80184B60_ovl_02[];
extern s8 D_80184B80_ovl_02[];
extern s32 D_80185700_ovl_02;
s32 func_8017BB30_ovl_02(s32);
void func_8017BB68_ovl_02(s8);

s8 func_8017F4C0_ovl_02(void) {
    s32 v;
    s8 *base;
    s8 *p;
    s8 c;

    v = func_8017BB30_ovl_02(7);
    if (v < 2) {
        D_80185700_ovl_02 = 1;
        return 0;
    }
    if (v >= 0x10) {
        v >>= 3;
        base = D_80184B60_ovl_02;
    } else {
        base = D_80184B80_ovl_02;
    }
    p = (s8 *)(v * 2 + (s32)base);
    c = p[1];
    func_8017BB68_ovl_02(c);
    return p[0];
}
