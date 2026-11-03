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

s32 func_80029C50_ovl_01(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_s1;
    u8 temp_v1;
    u8 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;

    var_s1 = M2C_FIELD(arg0, u8 **, 4);
    var_s0 = M2C_FIELD(arg0, s32 *, 8);
    var_s3 = M2C_FIELD(arg0, s32 *, 0x10);
    var_s4 = M2C_FIELD(arg0, s32 *, 0xC);
    if (var_s3 < 0x19) {
loop_2:
        var_v0_2 = var_s3 < arg1;
        if (M2C_FIELD(arg0, s32 *, 0) == 0) {
            var_s0 -= 1;
            if (var_s0 == 0) {
                temp_a0 = M2C_FIELD(arg0, void **, 0x24);
                var_v0 = 0;
                if (M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x14), s32 (**)(void *), 0xC)(temp_a0) != 0) {
                    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14);
                    var_s1 = M2C_FIELD(temp_v0, u8 **, 0);
                    var_s0 = M2C_FIELD(temp_v0, s32 *, 4) - 1;
                    goto block_6;
                }
            } else {
block_6:
                var_v1 = *var_s1;
                var_s1 += 1;
                if (var_v1 == 0xFF) {
loop_7:
                    var_s0 -= 1;
                    if (var_s0 == 0) {
                        temp_a0_2 = M2C_FIELD(arg0, void **, 0x24);
                        var_v0 = 0;
                        if (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 0x14), s32 (**)(void *), 0xC)(temp_a0_2) != 0) {
                            temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x14);
                            var_s1 = M2C_FIELD(temp_v0_2, u8 **, 0);
                            var_s0 = M2C_FIELD(temp_v0_2, s32 *, 4) - 1;
                            goto block_10;
                        }
                    } else {
block_10:
                        temp_v1 = *var_s1;
                        var_s1 += 1;
                        if (temp_v1 != 0xFF) {
                            if (temp_v1 != 0) {
                                M2C_FIELD(arg0, s32 *, 0) = (s32) temp_v1;
                                var_v0_2 = var_s3 < arg1;
                                goto block_16;
                            }
                            var_v1 = 0xFF;
                            goto block_20;
                        }
                        goto loop_7;
                    }
                } else {
                    goto block_20;
                }
            }
        } else {
block_16:
            var_v0 = 1;
            if (var_v0_2 != 0) {
                temp_v1_2 = M2C_FIELD(arg0, void **, 0x24);
                if (M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0x178), s32 *, 0x24) == 0) {
                    M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0), s32 *, 0x14) = 0x68;
                    temp_a0_3 = M2C_FIELD(arg0, void **, 0x24);
                    M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 4)(temp_a0_3, -1);
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x178), s32 *, 0x24) = 1;
                }
                var_v1 = 0;
block_20:
                var_s4 = (var_s4 << 8) | var_v1;
                var_s3 += 8;
                if (var_s3 >= 0x19) {
                    goto block_21;
                }
                goto loop_2;
            }
            goto block_22;
        }
    } else {
block_21:
        var_v0 = 1;
block_22:
        M2C_FIELD(arg0, u8 **, 4) = var_s1;
        M2C_FIELD(arg0, s32 *, 8) = var_s0;
        M2C_FIELD(arg0, s32 *, 0xC) = var_s4;
        M2C_FIELD(arg0, s32 *, 0x10) = var_s3;
    }
    return var_v0;
}
