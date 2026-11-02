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

u8 *func_80052F1C_ovl_01(u8 *arg0) {
    u32 var_v1;
    u8 *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
loop_1:
    var_v1 += 1;
    if (*var_a0 != 0) {
        var_a0 += 0xA;
        if (var_v1 < 0x20U) {
            goto loop_1;
        }
    }
    return var_a0;
}
