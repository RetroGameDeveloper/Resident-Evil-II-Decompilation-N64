s32 func_80033634_ovl_01(void);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_801621A4_ovl_27(u8 *arg0, s32 arg1, s32 arg2) {
    s32 r;
    arg0[6] += 1;
    r = (func_80033634_ovl_01() & 3) + 1;
    *(s16 *)(arg0 + 0x1F4) = arg0[0x2B4] * 2 + r;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
}
