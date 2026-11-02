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

s32 func_80004FB4(u8 *arg0, u8 *arg1) {
    s32 var_v0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v0_4;
    s8 temp_v0_5;
    s8 var_a2;
    s8 var_a2_2;
    u8 *temp_t0;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a2;
    u8 temp_v1;
    u8 temp_v1_2;

    var_a0 = arg0;
    var_a1 = arg1;
    temp_t0 = var_a0;
    do {
        temp_a2 = *var_a1;
        temp_v0 = (s8) temp_a2;
        var_a1 += 1;
        if (temp_v0 > 0) {
            temp_v0_2 = temp_a2 - 1;
            var_a2 = temp_v0_2;
            var_v0 = var_a2 << 0x18;
            if (temp_v0_2 != -1) {
                do {
                    temp_v1 = *var_a1;
                    var_a1 += 1;
                    temp_v0_3 = var_a2 - 1;
                    var_a2 = temp_v0_3;
                    *var_a0 = temp_v1;
                    var_a0 += 1;
                } while (temp_v0_3 != -1);
                var_v0 = var_a2 << 0x18;
            }
        } else {
            var_v0 = temp_a2 << 0x18;
            if (temp_v0 < 0) {
                temp_v1_2 = *var_a1;
                temp_v0_4 = temp_a2 + 1;
                var_a2_2 = temp_v0_4;
                var_a1 += 1;
                if (temp_v0_4 != 1) {
                    do {
                        *var_a0 = temp_v1_2;
                        temp_v0_5 = var_a2_2 + 1;
                        var_a2_2 = temp_v0_5;
                        var_a0 += 1;
                    } while (temp_v0_5 != 1);
                }
                var_v0 = var_a2_2 << 0x18;
            }
        }
    } while (var_v0 != 0);
    return var_a0 - temp_t0;
}
