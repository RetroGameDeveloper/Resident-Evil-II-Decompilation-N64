extern s32 D_80166288_ovl_15;
void func_801653F8_ovl_15(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

void func_80165AC0_ovl_15(u8 *arg0, s32 arg1) {
    if (*(u8 *)(arg0 + 0x2CD) == 0) {
        *(void **)(arg0 + 0x2D0) = (void *)func_80165AC0_ovl_15;
        D_80166288_ovl_15 = arg1;
        *(u8 *)(arg0 + 0x2CD) = *(u8 *)(arg0 + 0x2CD) + 1;
        return;
    }
    func_801653F8_ovl_15(arg0, 1, 0, 6, 0x3000, 1);
    func_801653F8_ovl_15(arg0, 1, 0, 6, 0x3000, 1);
    if (D_80166288_ovl_15 == *(u8 *)(arg0 + 0x2CD)) {
        *(void **)(arg0 + 0x2D0) = NULL;
    }
    *(u8 *)(arg0 + 0x2CD) = *(u8 *)(arg0 + 0x2CD) + 1;
}
