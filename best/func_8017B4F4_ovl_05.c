s32 func_800276B4_ovl_01(s32);
void func_80027530_ovl_01(s32, s32, s32, s32);
void func_8006C0A0_ovl_01(s32);
extern u8 D_8017E53F_ovl_05;
extern u8 D_8017E549_ovl_05;

void func_8017B4F4_ovl_05(void) {
    if (func_800276B4_ovl_01(0)) {
        func_80027530_ovl_01(0x200, 0, 7, 1);
        D_8017E549_ovl_05 = 1;
        D_8017E53F_ovl_05 &= 0xF7;
        func_8006C0A0_ovl_01(1);
    }
}
