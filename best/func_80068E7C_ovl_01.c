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

s32 func_80068E7C_ovl_01(void *arg0, s32 arg1, void *arg2) {
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t4;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    s32 var_v1;
    u16 temp_a3;
    u16 temp_t1;
    u16 temp_v0;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_t5;

    temp_v1 = M2C_FIELD(arg2, u16 *, 4);
    temp_t1 = M2C_FIELD(arg2, u16 *, 0);
    temp_v0 = M2C_FIELD(arg2, u16 *, 6);
    temp_a3 = M2C_FIELD(arg2, u16 *, 2);
    temp_t4 = M2C_FIELD(arg0, s32 *, 8);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    temp_t7 = temp_v1 + temp_t1;
    temp_t6 = temp_v0 + temp_a3;
    temp_v1_2 = temp_t1 + (temp_v1 >> 1);
    temp_v0_2 = temp_a3 + (temp_v0 >> 1);
    temp_t5 = temp_t4 - temp_v0_2;
    temp_a2 = temp_a0 - temp_v1_2;
    temp_a1 = ((temp_t5 >> 0x1E) & 2) | (temp_a2 >> 0x1F);
    if (temp_a1 != 1) {
        if (temp_a1 < 2) {
            if (temp_a1 != 0) {
                return 0;
            }
            temp_v1_3 = temp_t6 + arg1;
            var_v1 = (temp_t4 - temp_v1_3) < ((s32) ((temp_v0_2 - temp_v1_3) * temp_a2) / (s32) ((temp_t7 + arg1) - temp_v1_2));
            goto block_8;
        }
        if (temp_a1 != 2) {
            if (temp_a1 != 3) {
                return 0;
            }
            temp_v0_3 = (s16) temp_t1 - arg1;
            var_v0 = 1;
            if (((s32) ((((s16) temp_a3 - arg1) - temp_v0_2) * (temp_a0 - temp_v0_3)) / (s32) (temp_v1_2 - temp_v0_3)) >= (s32) temp_t5) {
                var_v0 = 0;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return var_v0;
        }
        temp_v1_4 = (s16) temp_a3 - arg1;
        var_v1 = ((s32) ((temp_v0_2 - temp_v1_4) * temp_a2) / (s32) ((temp_t7 + arg1) - temp_v1_2)) < (temp_t4 - temp_v1_4);
block_8:
        var_v0 = 0;
        if (var_v1 != 0) {
            return 1;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return var_v0;
    }
    temp_v0_4 = (s16) temp_t1 - arg1;
    var_v0 = 0;
    if ((s32) temp_t5 < ((s32) (((temp_t6 + arg1) - temp_v0_2) * (temp_a0 - temp_v0_4)) / (s32) (temp_v1_2 - temp_v0_4))) {
        return 1;
    }
    return var_v0;
}
