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

f32 func_80048090_ovl_01(f32);                      /* extern */
extern f64 D_800B8798_ovl_01;
extern f32 D_800B87A0_ovl_01;
extern f32 D_800B87A4_ovl_01;

s32 func_80040C34_ovl_01(s32 arg0) {
    f32 temp_fs0;
    f64 var_fv1;

    var_fv1 = (f64) arg0;
    if (arg0 < 0) {
        var_fv1 += D_800B8798_ovl_01;
    }
    temp_fs0 = (f32) var_fv1 * D_800B87A0_ovl_01;
    return (s32) (temp_fs0 * func_80048090_ovl_01(temp_fs0) * D_800B87A4_ovl_01);
}
