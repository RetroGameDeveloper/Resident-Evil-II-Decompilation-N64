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

s32 func_80082338_ovl_01(u8 *arg0, u8 *arg1) {
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 var_v0;
    u8 var_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_a2 = *var_a0;
    var_v1 = temp_a2 - *var_a1;
    var_v0 = var_v1;
    if (var_v1 == 0) {
        if (temp_a2 != 0) {
loop_2:
            temp_v0 = *var_a1;
            if (temp_v0 != 0) {
                var_a1 += 1;
                var_v1 = *var_a0 - temp_v0;
                var_a0 += 1;
                if (var_v1 == 0) {
                    if (*var_a0 == 0) {
                        goto block_5;
                    }
                    goto loop_2;
                }
                var_v0 = var_v1;
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return (s32) var_v0;
            }
            goto block_5;
        }
block_5:
        var_v0 = var_v1;
        if (var_v1 == 0) {
            var_v0 = *var_a0;
            if (var_v0 == 0) {
                temp_v0_2 = *var_a1;
                var_v0 = (u8) -(s32) temp_v0_2;
                if (temp_v0_2 == 0) {
                    return 0;
                }
            }
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return (s32) var_v0;
    }
    return (s32) var_v0;
}
