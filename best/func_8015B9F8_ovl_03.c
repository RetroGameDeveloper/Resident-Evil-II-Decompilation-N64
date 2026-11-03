extern u8 D_80160B9C_ovl_03;
void func_8015FB30_ovl_03(void);
s32 func_8015F210_ovl_03(s32 arg0);
s32 func_8015E2EC_ovl_03(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_8015B9F8_ovl_03(void) {
    u64 b;
    u8 *p;

    func_8015FB30_ovl_03();
    b = (u64)(u32)&D_80160B9C_ovl_03;
    p = (u8 *)(u32)(b & 0xFFFFFFFF);
    if (p[5] == 1) {
        func_8015F210_ovl_03(p[6]);
        func_8015E2EC_ovl_03(1, 1, 0x1B, 0);
    } else {
        func_8015E2EC_ovl_03(p[6], p[6], 0, 0);
    }
}
