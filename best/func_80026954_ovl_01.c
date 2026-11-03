extern volatile f64 D_800B6A38_ovl_01;
extern volatile f64 D_800B6A40_ovl_01;
extern volatile f32 D_80112798_ovl_01;
extern volatile f32 D_8011279C_ovl_01;

void func_80026954_ovl_01(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    D_80112798_ovl_01 = (f32)(a0 - a2 - a3) / D_800B6A38_ovl_01;
    D_8011279C_ovl_01 = (f32)(a1 - a4 - a5) / D_800B6A40_ovl_01;
}
