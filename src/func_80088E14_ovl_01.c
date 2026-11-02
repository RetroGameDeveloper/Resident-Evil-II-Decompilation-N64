s32 func_80088744_ovl_01(s32, s32);
void func_8004251C_ovl_01(s32, s32 *, void *);
void func_80042484_ovl_01(void *, void *);
void func_80089A78_ovl_01(void *);
void func_80089B5C_ovl_01(void *);

void func_800888CC_ovl_01(s32 arg0, s32 arg1) {
    s32 t = arg0;

    func_80088744_ovl_01(arg1, t);
}

s32 func_80088ECC_ovl_01(u8 *arg0, s32 arg1) {
    u8 t = *(u8 *)(*(u8 **)(arg0 + 0xC4) + 7);

    *(s32 *)(arg0 + 0x234) = arg1;
    arg0[0x1A3] = t;
    return t * 0x178 + arg1;
}

void func_80088E14_ovl_01(s32 arg0, u8 *p, s32 arg2, void *arg3) {
    u8 sp10[0x30];
    s32 *v0 = *(s32 **)(p + 0x12C);
    s32 a0v = *(s32 *)(p + 0x64);
    s32 *a1v = (s32 *)(p + 8);
    s32 v1;

    if (v0 != NULL) {
        v1 = *v0;
        if (!(v1 & 1)) {
            if (v1 & 0x20) {
                *(s32 *)p = 0x20;
                return;
            }
        }
    }
    if (!(arg2 & 0x40)) {
        func_8004251C_ovl_01(a0v, a1v, arg3);
    }
    func_80042484_ovl_01(arg3, sp10);
    if (arg2 & 8) {
        func_80089A78_ovl_01(p);
        return;
    }
    if (arg2 & 0x10) {
        func_80089B5C_ovl_01(p);
    }
}
