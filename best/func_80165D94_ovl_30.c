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

s32 func_80165D94_ovl_30(void *arg0, s16 arg1) {
    s16 temp_a3;
    s16 var_a2;
    s16 var_t0;
    s16 var_v0;
    u16 temp_t1;
    u16 var_v0_2;

    temp_t1 = M2C_FIELD(arg0, u16 *, 0x66);
    temp_a3 = M2C_FIELD(arg0, u16 *, 0x2B6) - (temp_t1 & 0xFFF);
    var_t0 = temp_a3;
    var_a2 = temp_a3;
    if (temp_a3 < 0) {
        var_a2 = -temp_a3;
    }
    var_v0 = temp_a3;
    if (var_a2 >= arg1) {
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 >= 0x800) {
            var_t0 = -temp_a3;
        }
        if ((var_t0 << 0x10) <= 0) {
            var_v0_2 = (s16) temp_t1 - arg1;
        } else {
            var_v0_2 = (s16) temp_t1 + arg1;
        }
        M2C_FIELD(arg0, u16 *, 0x66) = var_v0_2;
        return 0;
    }
    return 1;
}
