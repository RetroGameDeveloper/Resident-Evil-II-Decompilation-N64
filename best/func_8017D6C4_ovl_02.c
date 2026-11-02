s32 func_8017BE48_ovl_02(s32);
s32 func_8017BB68_ovl_02(s32);
extern volatile s32 D_801856C4_ovl_02, D_801856C8_ovl_02, D_801856DC_ovl_02, D_80185708_ovl_02;
extern volatile s32 *D_80186C14_ovl_02;
void func_8017D6C4_ovl_02(void) {
    s32 r0, r1, r2, r3;
    D_80186C14_ovl_02[0x41c / 4] = 1;
    D_80186C14_ovl_02[0x420 / 4] = 0;
    func_8017BE48_ovl_02(8);
    r0 = func_8017BE48_ovl_02(1);
    D_80185708_ovl_02 = r0;
    r1 = func_8017BE48_ovl_02(2);
    D_801856DC_ovl_02 = r1;
    r2 = func_8017BE48_ovl_02(2);
    r3 = func_8017BE48_ovl_02(0xc);
    func_8017BB68_ovl_02(1);
    func_8017BE48_ovl_02(8);
    func_8017BE48_ovl_02(1);
    func_8017BE48_ovl_02(2);
    func_8017BE48_ovl_02(5);
    D_801856C4_ovl_02 = (r2 << 12) | (D_801856C4_ovl_02 & 0xfff);
    D_801856C8_ovl_02 = (r3 << 12) | (D_801856C8_ovl_02 & 0xfff);
}
