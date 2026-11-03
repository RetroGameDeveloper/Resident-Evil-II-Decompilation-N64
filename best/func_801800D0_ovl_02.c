s32 func_8017BE48_ovl_02(s32);
s32 func_80180228_ovl_02(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

void func_801800D0_ovl_02(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 *p;
    s32 *t;
    s32 s1;
    s32 v;

    if (arg4 == 1) {
        if (arg5 == 0 && arg8 == 0) {
            s32 *tp;
            v = func_8017BE48_ovl_02(1);
            tp = (s32 *)((u8 *)arg2 + arg3 * 4);
            tp[0] = v;
            tp[2] = v;
        }
        p = (s32 *)((u8 *)arg0 + arg3 * 8);
        func_80180228_ovl_02(p, arg1, arg6, arg7, arg8, arg9, 0);
        p[4] = p[0];
        p[5] = p[1];
        return;
    }
    s1 = arg3 * 8;
    t = (s32 *)((u8 *)arg2 + arg3 * 4);
    t[0] = func_8017BE48_ovl_02(1);
    func_80180228_ovl_02((s32 *)((u8 *)arg0 + s1), arg1, arg6, arg7, arg8, arg9, 0);
    t[2] = func_8017BE48_ovl_02(1);
    func_80180228_ovl_02((s32 *)((u8 *)arg0 + s1 + 0x10), arg1, arg6, arg7, arg8, arg9, 0);
}
