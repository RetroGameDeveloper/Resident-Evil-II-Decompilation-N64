extern s32 D_80112780_ovl_01;
extern s32 D_80112788_ovl_01;
extern u8 D_800C5694_ovl_01;
extern s32 D_8010B680_ovl_01;
extern s32 D_8010B684_ovl_01;
extern s32 func_8006BF78_ovl_01(s32);

void func_800268F4_ovl_01(void) {
    s32 var_a0;

    if (D_80112788_ovl_01 == D_80112780_ovl_01) {
        if (D_800C5694_ovl_01 == 0) {
            var_a0 = D_8010B684_ovl_01;
        } else {
            var_a0 = D_8010B680_ovl_01;
        }
        func_8006BF78_ovl_01(var_a0);
    }
}
