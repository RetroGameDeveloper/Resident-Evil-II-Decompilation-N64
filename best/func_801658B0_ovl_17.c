void func_80166FBC_ovl_17(void *, s32, s32);

void func_801658B0_ovl_17(u8 *arg0) {
    s32 x;
    u8 v;

    arg0[6] = 1;
    *(s16 *)(arg0 + 0x1E2) = 0x28;
    x = *(volatile s32 *)(arg0 + 0x2C);
    *(s32 *)(arg0 + 0x1E8) = 0x0C090000;
    v = *(volatile u8 *)(arg0 + 0x2D8);
    *(s16 *)(arg0 + 0x1E0) = 0;
    *(s16 *)(arg0 + 0x1E4) = 0;
    *(s16 *)(arg0 + 0x68) = 0;
    *(volatile s32 *)(arg0 + 0x2C) = x + 0x320;
    if (v != 1) {
        func_80166FBC_ovl_17(arg0, 0, 0);
    }
}
