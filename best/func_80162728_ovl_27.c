s32 func_80089D34_ovl_01(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
s32 func_801636DC_ovl_27(u8 *arg0, s32 arg1);

void func_80162728_ovl_27(u8 *arg0, s32 arg1, s32 arg2) {
    s16 *p;

    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    p = (s16 *)(arg0 + 0x2B4);
    p[7] = 0x400;
    func_801636DC_ovl_27(arg0, 0);
}
