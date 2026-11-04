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

f32 func_8000DB80(f32);                             /* extern */

void func_800AB1EC_ovl_01(void *arg0) {
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0;
f32 __repair_var_fv0_1;

    temp_ft0 = M2C_FIELD(arg0, f32 *, 0);
    temp_fv1 = M2C_FIELD(arg0, f32 *, 4);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 8);
    temp_fa0 = (temp_ft0 * temp_ft0) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0);
    var_fv0 = sqrtf(temp_fa0);
    if (var_fv0 != var_fv0) {
        __repair_var_fv0_1 = func_8000DB80(temp_fa0);
    }
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) / __repair_var_fv0_1);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) / __repair_var_fv0_1);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) / __repair_var_fv0_1);
}
