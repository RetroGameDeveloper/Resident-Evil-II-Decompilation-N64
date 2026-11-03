extern s32 func_80089D34_ovl_01(s32, s32, s32, s32);
void func_80164D38_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0 + 0x2B4;
    if (func_80089D34_ovl_01((s32)arg0, arg1, arg2, 0x400) != 0) {
        p[0xB] = 0;
        p[0xA] = 0;
        *(s32 *)((u8 *)arg0 + 4) = 0x01000000;
        *(s32 *)arg0 |= 0x0C000000;
        *(u8 *)((u8 *)arg0 + 0x26F) &= 0x7F;
    }
}
