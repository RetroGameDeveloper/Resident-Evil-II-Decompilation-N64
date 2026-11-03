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

s32 func_80032EA4_ovl_01(M2C_UNK *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern void *D_8011B4EC_ovl_01;
extern u16 D_8011B500_ovl_01;

s32 func_80080B24_ovl_01(M2C_UNK *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    u16 *var_s4;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s5;
    u32 var_s6;
    void **var_s3;
    void *temp_s0;

    var_s1 = 0;
    var_s5 = 0;
    var_s2 = 3;
    do {
        temp_v1 = var_s2 - 1;
        if ((&D_8011B4EC_ovl_01)[temp_v1] != NULL) {
            var_s5 += 1;
        }
        var_s2 = temp_v1;
    } while (var_s2 != 0);
    var_s6 = 0;
    var_s2_2 = var_s5 - 1;
    if (var_s5 != 0) {
        var_s4 = &D_8011B500_ovl_01;
        var_s3 = &D_8011B4EC_ovl_01;
        do {
            temp_s0 = *var_s3;
            if ((u16) *var_s4 < arg1) {
                if (func_80032EA4_ovl_01(arg0, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), 0x400) != 0) {
                    var_s1 |= 0x20000;
                } else {
                    var_s1 |= 0x10000;
                }
                var_s6 += 1;
            }
            if (func_80032EA4_ovl_01(&D_800E10D0_ovl_01, M2C_FIELD(temp_s0, s32 *, 0x28), M2C_FIELD(temp_s0, s32 *, 0x30), 0x400) != 0) {
                var_s1 |= 2;
            } else {
                var_s1 |= 1;
            }
            var_s4 += 2;
            var_s2_2 -= 1;
            var_s3 += 4;
        } while (var_s2_2 != -1);
    }
    var_v0 = 0;
    if (var_s5 != 0) {
        if (var_s1 & 0xFFFF0000) {
            temp_v0 = var_s1 >> 0xF;
            if (var_s6 >= 2U) {
                return temp_v0 + 3;
            }
            return temp_v0 - 1;
        }
        var_v0 = var_s1 * 2;
        if (var_s5 >= 2U) {
            var_v0 += 4;
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
