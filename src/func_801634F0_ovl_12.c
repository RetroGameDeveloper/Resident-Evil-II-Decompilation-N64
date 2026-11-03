void func_80089D34_ovl_01(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
void func_801634F0_ovl_12(u8 *arg0, s32 arg1, s32 arg2) {
    u16 t = *(u16 *)(arg0 + 0x1F4) - 1;
    *(u16 *)(arg0 + 0x1F4) = t;
    if ((t << 16) == 0) {
        *(s8 *)(arg0 + 6) = 2;
        *(s32 *)(arg0 + 0x1E8) = 0x08000F00;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
