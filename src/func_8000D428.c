s32 func_8000F050(void *, void *, void *, void *);
void func_8000DE9C(void);
void func_8000C620(void *, void *, s32);
s32 func_8000D2B0(void);

extern u8 D_80011CB0;
extern u8 D_80011CB4;
extern u8 D_80011CC0;
extern u8 D_80011CC4;
extern u8 D_A0000000;

s32 func_8000D428(s32 arg0, s32 arg1, s32 arg2) {
    func_8000DE9C();
    return arg0 + arg2;
}

s32 func_8000D3D0(u8 *arg0, u8 *arg1, ...) {
    void *ap;
    s32 n;

    ap = __builtin_saveregs();
    n = func_8000F050(func_8000D428, arg0, arg1, ap);
    if (n >= 0) {
        arg0[n] = 0;
    }
    return n;
}

s32 func_8000D360(s32 arg0, s32 arg1) {
    if (arg0 & 3) {
        func_8000C620(&D_80011CC0, &D_80011CC4, 0x34);
    }
    if (func_8000D2B0() != 0) {
        return -1;
    }
    *(s32 *)(arg0 | (s32)&D_A0000000) = arg1;
    return 0;
}

s32 func_8000D2D0(s32 arg0, s32 *arg1) {
    if (arg0 & 3) {
        func_8000C620(&D_80011CB0, &D_80011CB4, 0x33);
    }
    if (arg1 == NULL) {
        func_8000C620(&D_80011CB0, &D_80011CB4, 0x34);
    }
    if (func_8000D2B0() != 0) {
        return -1;
    }
    *arg1 = *(s32 *)(arg0 | (s32)&D_A0000000);
    return 0;
}
