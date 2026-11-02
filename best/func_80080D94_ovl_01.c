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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8011B4EC_ovl_01;

s32 func_80080D94_ovl_01(s32 arg1) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;

    var_t0 = 0;
    var_a3 = 0;
    var_a0 = 0;
    var_a2 = 2;
    var_v0_2 = 0 * 4;
    do {
        temp_v1 = *(var_v0_2 + &D_8011B4EC_ovl_01);
        if (temp_v1 != 0) {
            if (M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x1CD0) == temp_v1) {
                var_a0 += 1;
                var_t0 = 1;
            } else {
                if (arg1 != temp_v1) {
                    var_a3 = temp_v1;
                }
                goto block_6;
            }
        } else {
block_6:
            var_a0 += 1;
        }
        var_a2 -= 1;
        var_v0_2 = var_a0 * 4;
    } while (var_a2 != -1);
    var_v0 = var_a3;
    if (var_a3 == 0) {
        if (var_t0 == 0) {
            return 0;
        }
        var_v0 = M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CD0);
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
