void func_80089D34_ovl_01(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);

void func_80163620_overlay_023(void *arg0, s32 arg1, s32 arg2) {
    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        *(s32 *)((u8 *)arg0 + 0x1E8) = 0x050A0000;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
    }
}
