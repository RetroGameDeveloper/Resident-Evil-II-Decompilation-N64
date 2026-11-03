/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80083E90_ovl_01(f32, f32, f32, f32);   /* extern */
extern f32 D_800B9CC8_ovl_01;

void func_80083EB0_ovl_01(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1;
    f32 temp_ft2;
    f32 var_a2;
    f32 var_a3;
    f32 var_fa0;
    f32 var_fa1;

    var_fa1 = arg1;
    temp_ft2 = arg2 - arg0;
    var_fa0 = arg4;
    temp_ft1 = arg3 - var_fa1;
    temp_ft0 = ((var_fa0 - arg0) * temp_ft2) + ((arg5 - var_fa1) * temp_ft1);
    if (temp_ft0 == 0.0f) {
        if (var_fa0 == arg0) {
            var_a2 = arg0;
            var_a3 = var_fa1;
            var_fa1 = arg5;
        } else {
            goto block_7;
        }
    } else {
        temp_ft0_2 = temp_ft0 / ((temp_ft2 * temp_ft2) + (temp_ft1 * temp_ft1));
        if (temp_ft0_2 < 0.0f) {
            var_a2 = arg0;
            var_a3 = var_fa1;
            var_fa1 = arg5;
        } else if (!(D_800B9CC8_ovl_01 < temp_ft0_2)) {
            var_a2 = arg0 + (temp_ft0_2 * temp_ft2);
            var_a3 = var_fa1 + (temp_ft0_2 * temp_ft1);
            var_fa0 = arg0;
        } else {
block_7:
            var_a2 = arg2;
            var_a3 = arg3;
            var_fa1 = arg5;
        }
    }
    func_80083E90_ovl_01(var_fa0, var_fa1, var_a2, var_a3);
}
