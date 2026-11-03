extern s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_80165AEC_ovl_17(u8 *arg0, s32 arg1, s32 arg2) {
    u32 v;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
    if (**(u32 **)(arg0 + 0x214) & 0x80000) {
        *(u32 *)(arg0 + 4) = 0x07000000;
        v = *(u32 *)arg0 & 0xE3FFFFFF;
        *(u32 *)arg0 = v;
        if (arg0[0x2D5] == 0) {
            v = 1;
            *(s16 *)(arg0 + 0x1F2) = v;
            arg0[0x2C0] = v;
        }
    }
}
