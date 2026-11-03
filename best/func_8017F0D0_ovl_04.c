extern u8 *D_801806F0_ovl_04;
extern u8 D_801801DC_ovl_04[];
s32 func_8004A7F8_ovl_01(s32, s32, s32, s32, void *, s32);

void func_8017F0D0_ovl_04(s32 a0, s32 a1) {
    if (D_801806F0_ovl_04[1] == 0) {
        func_8004A7F8_ovl_01(a0, a1, 0, 0, D_801801DC_ovl_04, 0);
    }
}
