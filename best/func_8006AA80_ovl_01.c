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

void func_8006AA80_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 *arg6, s32 *arg7) {
    s32 temp_lo;
    s32 var_a0;

    temp_lo = (s32) (arg5 * (arg0 - arg2)) / arg4;
    var_a0 = 0;
    if (temp_lo < (arg1 - arg3)) {
        var_a0 = 2;
        if (-temp_lo < (arg1 - (arg3 + arg5))) {
            var_a0 = 3;
        }
    } else if ((arg1 - (arg3 + arg5)) < -temp_lo) {
        var_a0 = 1;
    }
    switch (var_a0) {                               /* irregular */
    case 0:
        *arg6 = arg2 + arg4;
        return;
    case 3:
        *arg7 = arg3 + arg5;
        return;
    case 1:
        *arg7 = arg3;
        return;
    case 2:
        *arg6 = arg2;
        return;
    }
}
