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

s32 func_8000CD40(s32);                             /* extern */
s32 func_8008AF60_ovl_01(s32);                      /* extern */

s32 func_8008B028_ovl_01(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s0;

    var_s0 = arg0;
    temp_s1 = func_8000CD40(1);
    if (var_s0 == 0) {
        var_s0 = 1;
    }
    temp_s0 = func_8008AF60_ovl_01(var_s0);
    func_8000CD40(temp_s1);
    return temp_s0;
}
