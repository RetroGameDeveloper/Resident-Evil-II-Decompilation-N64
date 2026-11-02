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

s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */

s32 func_8004D948_ovl_01(void *arg0, s32 *arg1, void *arg2) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    u32 temp_a0_2;
    void *temp_s1;
    void *temp_s2;

    temp_a0 = *arg1;
    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    var_v0 = 0;
    if (!((temp_a0 | temp_v1) & 2)) {
        var_v0 = 0;
        if (!(temp_a0 & temp_v1 & 0x1000)) {
            temp_s1 = arg1 + 0x120;
            temp_s2 = arg2 + 0x120;
            temp_s0 = M2C_FIELD(temp_s1, u16 *, 0x16) + M2C_FIELD(temp_s2, u16 *, 0x16);
            temp_a1 = M2C_FIELD(arg2, s32 *, 0x120) - (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(temp_s1, s16 *, 0x1C));
            temp_v1_2 = M2C_FIELD(temp_s2, s32 *, 8) - (M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(temp_s1, s16 *, 0x1E));
            temp_a0_2 = temp_s0 * 2;
            if (temp_a0_2 < (u32) (temp_a1 + temp_s0)) {
                goto block_3;
            }
            var_v0 = 0;
            if ((temp_a0_2 < (u32) (temp_v1_2 + temp_s0)) || (var_v0 = 0, ((temp_s0 - func_80040BE4_ovl_01((temp_a1 * temp_a1) + (temp_v1_2 * temp_v1_2), temp_a1)) <= 0)) || ((temp_a1_2 = M2C_FIELD(temp_s2, u16 *, 0x1A) + M2C_FIELD(temp_s1, u16 *, 0x1A), temp_v1_3 = M2C_FIELD(temp_s2, s32 *, 4) - (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(temp_s1, s16 *, 0x14)), ((-temp_a1_2 < temp_v1_3) != 0)) && (var_v0 = 1, ((temp_v1_3 < temp_a1_2) != 0)))) {
                /* Duplicate return node #8. Try simplifying control flow for better match */
                return var_v0;
            }
block_3:
            return 0;
        }
    }
    return var_v0;
}
