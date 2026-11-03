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

s16 func_80040A44_ovl_01(s32, s16, s16, s16);       /* extern */

s32 func_80032D44_ovl_01(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;

    var_v0 = 0x400;
    temp_s0 = arg2 - arg0;
    temp_a0 = arg3 - arg1;
    if (temp_a0 > 0) {
        var_v0 = 0xC00;
    }
    if (temp_s0 != 0) {
        temp_v1 = func_80040A44_ovl_01((s32) (temp_a0 << 0xC) / temp_s0, arg1, arg2, arg3);
        var_v0_2 = 0x1000;
        if (temp_s0 < 0) {
            var_v0_2 = 0x800;
        }
        var_v0 = (var_v0_2 - temp_v1) & 0xFFF;
    }
    return var_v0;
}
