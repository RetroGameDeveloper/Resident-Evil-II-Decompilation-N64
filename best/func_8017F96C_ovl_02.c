extern s8 D_80184E4C_ovl_02[];
extern s8 D_80184E8C_ovl_02[];
s32 func_8017BB30_ovl_02(s32);
void func_8017BB68_ovl_02(s32);
s32 func_8017BE48_ovl_02(s32);

s32 func_8017F96C_ovl_02(void) {
    s32 a;
    s32 b;
    s32 v;
    s32 idx;
    s8 *p;

    idx = func_8017BB30_ovl_02(5);
    if (idx < 0x1F) {
        p = D_80184E4C_ovl_02;
    } else {
        idx = func_8017BB30_ovl_02(0xA) - 0x3E0;
        p = D_80184E8C_ovl_02;
    }
    p += idx * 2;
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
