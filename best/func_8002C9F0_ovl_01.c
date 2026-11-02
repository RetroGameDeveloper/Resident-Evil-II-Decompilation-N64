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

s32 func_8002C9F0_ovl_01(void *arg0) {
    s32 var_s0;
    s32 var_v0;
    u8 *var_s1;
    u8 temp_s3;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;

    temp_s2 = M2C_FIELD(arg0, void **, 0x14);
    var_s1 = M2C_FIELD(temp_s2, u8 **, 0);
    var_s0 = M2C_FIELD(temp_s2, s32 *, 4);
loop_1:
    var_s0 -= 1;
    if (var_s0 == 0) {
        var_v0 = 0;
        if (M2C_FIELD(temp_s2, s32 (**)(void *), 0xC)(arg0) != 0) {
            var_s1 = M2C_FIELD(temp_s2, u8 **, 0);
            var_s0 = M2C_FIELD(temp_s2, s32 *, 4) - 1;
            goto block_4;
        }
    } else {
block_4:
        var_s1 += 1;
        if (*var_s1 != 0xFF) {
loop_6:
            temp_v1 = M2C_FIELD(arg0, void **, 0x174);
            M2C_FIELD(temp_v1, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x5C) + 1);
            M2C_FIELD(temp_s2, u8 **, 0) = var_s1;
            M2C_FIELD(temp_s2, s32 *, 4) = var_s0;
            if (var_s0 == 0) {
                var_v0 = 0;
                if (M2C_FIELD(temp_s2, s32 (**)(void *), 0xC)(arg0) != 0) {
                    var_s1 = M2C_FIELD(temp_s2, u8 **, 0);
                    var_s0 = M2C_FIELD(temp_s2, s32 *, 4);
                    goto block_9;
                }
            } else {
block_9:
                var_s0 -= 1;
                var_s1 += 1;
                if (*var_s1 == 0xFF) {
                    goto loop_10;
                }
                goto loop_6;
            }
        } else {
loop_10:
            var_s0 -= 1;
            if (var_s0 == 0) {
                var_v0 = 0;
                if (M2C_FIELD(temp_s2, s32 (**)(void *), 0xC)(arg0) != 0) {
                    var_s1 = M2C_FIELD(temp_s2, u8 **, 0);
                    var_s0 = M2C_FIELD(temp_s2, s32 *, 4) - 1;
                    goto block_13;
                }
            } else {
block_13:
                temp_s3 = *var_s1;
                var_s1 += 1;
                if (temp_s3 != 0xFF) {
                    if (temp_s3 == 0) {
                        temp_v1_2 = M2C_FIELD(arg0, void **, 0x174);
                        M2C_FIELD(temp_v1_2, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x5C) + 2);
                        M2C_FIELD(temp_s2, u8 **, 0) = var_s1;
                        M2C_FIELD(temp_s2, s32 *, 4) = var_s0;
                        goto loop_1;
                    }
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), s32 *, 0x5C) != 0) {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x67;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), s32 *, 0x5C);
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = (s32) temp_s3;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0, -1);
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0x174), s32 *, 0x5C) = 0;
                    }
                    var_v0 = 1;
                    M2C_FIELD(arg0, s32 *, 0x160) = (s32) temp_s3;
                    M2C_FIELD(temp_s2, u8 **, 0) = var_s1;
                    M2C_FIELD(temp_s2, s32 *, 4) = var_s0;
                } else {
                    goto loop_10;
                }
            }
        }
    }
    return var_v0;
}
