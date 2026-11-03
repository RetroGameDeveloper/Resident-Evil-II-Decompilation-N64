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

s32 func_8004E130_ovl_01(void *arg0, void *arg1) {
    s16 temp_t1;
    s16 temp_t5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u32 temp_t4;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    temp_v1 = M2C_FIELD(arg1, s32 *, 0);
    if (!((temp_a0 | temp_v1) & 0x40)) {
        var_v0 = 0;
        if (!(temp_a0 & temp_v1 & 0x200000)) {
            temp_t7 = M2C_FIELD(arg1, s32 *, 0x120) - M2C_FIELD(arg0, s32 *, 0x120);
            temp_t6 = M2C_FIELD(arg1, s32 *, 0x128) - M2C_FIELD(arg0, s32 *, 0x128);
            temp_t3 = M2C_FIELD(arg0, u16 *, 0x12C) + M2C_FIELD(arg1, u16 *, 0x12C);
            temp_t2 = M2C_FIELD(arg0, u16 *, 0x12E) + M2C_FIELD(arg1, u16 *, 0x12E);
            var_v0 = 0;
            if ((u32) (temp_t3 * 2) >= (u32) (temp_t7 + temp_t3)) {
                var_v0 = 0;
                if ((u32) (temp_t2 * 2) >= (u32) (temp_t6 + temp_t2)) {
                    temp_a1 = M2C_FIELD(arg1, s32 *, 0x124) - M2C_FIELD(arg0, s32 *, 0x124);
                    temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x13A) + M2C_FIELD(arg1, u16 *, 0x13A);
                    temp_t4 = temp_a0_2 * 2;
                    temp_a2 = temp_t4 >= (u32) (temp_a1 + temp_a0_2);
                    if (temp_a2 == 0) {
                        goto block_5;
                    }
                    temp_t5 = M2C_FIELD(arg1, s16 *, 0x134);
                    temp_t1 = M2C_FIELD(arg0, s16 *, 0x134);
                    if (((temp_t4 >= (u32) (((M2C_FIELD(arg1, s16 *, 0x36) + temp_t5) - (M2C_FIELD(arg0, s16 *, 0x36) + temp_t1)) + temp_a0_2)) ^ temp_a2) & temp_a2) {
                        temp_v0 = (M2C_FIELD(arg0, s32 *, 0x2C) + temp_t1) - temp_t5;
                        if (temp_a1 < 0) {
                            var_v0_2 = (temp_v0 - 1) - temp_a0_2;
                        } else {
                            var_v0_2 = temp_v0 + 1 + temp_a0_2;
                        }
                        M2C_FIELD(arg1, s32 *, 0x2C) = var_v0_2;
                    } else {
                        var_v1 = temp_t7 * temp_t2;
                        if (var_v1 < 0) {
                            var_v1 = -var_v1;
                        }
                        var_v0_3 = temp_t6 * temp_t3;
                        if (var_v0_3 < 0) {
                            var_v0_3 = -var_v0_3;
                        }
                        if (var_v0_3 < var_v1) {
                            temp_a0_3 = M2C_FIELD(arg1, s32 *, 0x28);
                            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x28);
                            if (temp_t7 >= 0) {
                                var_v1_2 = temp_v0_2 + 1 + temp_t3;
                            } else {
                                var_v1_2 = (temp_v0_2 - 1) - temp_t3;
                            }
                            M2C_FIELD(arg1, s32 *, 0x28) = var_v1_2;
                            M2C_FIELD(arg1, s32 *, 0x120) = (s32) (M2C_FIELD(arg1, s32 *, 0x120) + (var_v1_2 - temp_a0_3));
                        } else {
                            temp_a0_4 = M2C_FIELD(arg1, s32 *, 0x30);
                            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x30);
                            if (temp_t6 >= 0) {
                                var_v1_3 = temp_v0_3 + 1 + temp_t2;
                            } else {
                                var_v1_3 = (temp_v0_3 - 1) - temp_t2;
                            }
                            M2C_FIELD(arg1, s32 *, 0x30) = var_v1_3;
                            M2C_FIELD(arg1, s32 *, 0x128) = (s32) (M2C_FIELD(arg1, s32 *, 0x128) + (var_v1_3 - temp_a0_4));
                        }
                    }
                    var_v0 = 1;
                    /* Duplicate return node #29. Try simplifying control flow for better match */
                    return var_v0;
                }
            }
        }
        return var_v0;
    }
block_5:
    return 0;
}
