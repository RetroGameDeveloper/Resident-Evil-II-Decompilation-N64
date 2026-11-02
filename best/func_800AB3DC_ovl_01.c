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

s32 func_800AB3DC_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 (*arg4)(s32, s32)) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;

    if (arg2 != 0) {
        var_s4 = 1;
        var_s3 = arg2;
        var_v0 = var_s3 + 1;
loop_2:
        temp_s2 = var_v0 >> 1;
        temp_s1 = temp_s2 - 1;
        temp_s0 = arg1 + (arg3 * temp_s1);
        temp_v0 = arg4(arg0, temp_s0);
        if (temp_v0 == 0) {
            return temp_s0;
        }
        if (temp_v0 >= 0) {
            var_s4 = temp_s2 + 1;
        } else {
            var_s3 = temp_s1;
        }
        var_v0 = var_s4 + var_s3;
        if (var_s3 < var_s4) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return 0;
}
