extern s32 func_80052C00_ovl_01(s32, s32, u8, s32);
extern s32 func_80052C9C_ovl_01(s32, s32, s32);
void func_80166888_ovl_26(void *arg0, s32 arg1) {
    u8 *p = arg0;
    p[4] = 2;
    p[5] = arg1 + 2;
    p[6] = 0;
    p[7] = 0;
    p[0x26F] |= 0x80;
    func_80052C00_ovl_01(3, 0, p[0x26F], arg1 + 2);
    func_80052C9C_ovl_01(8, 0xC8, 0);
}
