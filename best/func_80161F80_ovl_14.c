s32 func_80036764_ovl_01_2FC(void *arg0, void *arg1, s32 arg2);
void D_800371D4(void *arg0, s32 arg1, s32 arg2);

void func_80161F80_ovl_14(u8 *arg0) {
    s32 sp10[4];

    sp10[0] = *(s16 *)(arg0 + 0x2D0);
    sp10[2] = *(s16 *)(arg0 + 0x2D4);
    if (!(*(u16 *)(arg0 + 0x2C8) & 0x10)) {
        if (func_80036764_ovl_01_2FC(arg0 + 0x28, sp10, 0x30)) {
            *(u16 *)(arg0 + 0x2C8) |= 0x10;
        }
    }
    if (!(*(u16 *)(arg0 + 0x2C8) & 0x20)) {
        if (((s32 (*)(void *, s32, s32))func_80036764_ovl_01_510_24)(arg0 + 0x2C, *(s16 *)(arg0 + 0x2D2), 0x30)) {
            *(u16 *)(arg0 + 0x2C8) |= 0x10;
        }
    }
    D_800371D4(arg0, *(u8 *)(arg0 + 0x2B4) << 10, 0x20);
}
