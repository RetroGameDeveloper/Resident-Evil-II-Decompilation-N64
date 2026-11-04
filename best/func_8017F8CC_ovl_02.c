extern s32 func_8017BB30_ovl_02(s32);
extern void func_8017BB68_ovl_02(s32);
extern s32 func_8017BE48_ovl_02(s32);
extern s8 D_80184DEC_ovl_02[];
extern s8 D_80184E2C_ovl_02[];

s32 func_8017F8CC_ovl_02(void) {
    s32 a;
    s32 b;
    s32 v;
    s32 idx;
    s8 *p;

    idx = func_8017BB30_ovl_02(5);
    if (idx < 0x1F) {
        p = D_80184DEC_ovl_02;
    } else {
        idx = func_8017BB30_ovl_02(9) - 0x1F0;
        p = D_80184E2C_ovl_02;
    }
    p = idx * 2 + p;
    a = p[1];
    b = p[0];
    func_8017BB68_ovl_02(a);
    v = 0;
    if (b != 0) {
        v = func_8017BE48_ovl_02(b);
        if (!((v >> (b - 1)) & 1)) {
            v = v + 1;
            v = v - (1 << b);
        }
    }
    return v;
}
