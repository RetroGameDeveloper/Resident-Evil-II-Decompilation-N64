s32 func_80036ED0_ovl_01(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    s32 v0;
    if (arg0 < arg1) {
        v0 = 0;
        return v0;
    }
    v0 = 1;
    if (arg0 >= arg2) {
        v0 = 2;
        if (arg0 >= arg3) {
            v0 = 3;
        }
    }
    return v0;
}
