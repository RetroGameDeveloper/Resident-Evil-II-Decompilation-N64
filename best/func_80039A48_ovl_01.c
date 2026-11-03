s32 func_8003997C_ovl_01(u16 *, u16 *, u32);

void func_80039A48_ovl_01(u16 *arg0, u16 *arg1, u32 arg2, s32 arg3, s32 arg4) {
    u32 n = arg2 >> 1;
    u16 *a0 = arg0 + n;
    u16 *a1 = arg1 + n;

    if (arg4 == 0) {
        func_8003997C_ovl_01(a0, a1, n);
    } else if (arg4 == 8) {
        func_8003997C_ovl_01(a0, a1, n);
    } else if (arg4 == 9) {
        func_8003997C_ovl_01(a0, a1, n);
    } else if (arg4 == 0x1F) {
        func_8003997C_ovl_01(a0, a1, n);
    } else if (arg4 == 0x26) {
        func_8003997C_ovl_01(a0, a1, n);
    } else if (n != 0) {
        do {
            *--a0 = *--a1;
        } while (--n);
    }
}
