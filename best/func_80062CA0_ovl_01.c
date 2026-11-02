/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_80062BB0_ovl_01(f32, s32);                 /* extern */
extern f64 D_800B91A8_ovl_01;
extern f32 D_800B91B0_ovl_01;
extern f32 D_800B91B4_ovl_01;
extern f32 D_800EFBF4_ovl_01;
extern f32 D_800EFBF8_ovl_01;
extern f32 D_8011113C_ovl_01;

s32 func_80062CA0_ovl_01(f32 arg0) {
    f32 temp_fa0;
    f32 var_fa0;

    var_fa0 = arg0 * D_8011113C_ovl_01;
    if ((f64) var_fa0 < D_800B91A8_ovl_01) {
        var_fa0 = D_800B91B0_ovl_01;
    }
    temp_fa0 = -var_fa0;
    return func_80062BB0_ovl_01(temp_fa0, (s32) ((s32) (((((temp_fa0 * D_800EFBF4_ovl_01) + D_800EFBF8_ovl_01) / -temp_fa0) * D_800B91B4_ovl_01) + D_800B91B4_ovl_01) << 0x10) >> 0xD) & 0xFFFF;
}
