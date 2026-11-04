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

M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */
M2C_UNK func_800411E8_ovl_01(void *, void *);       /* extern */
M2C_UNK func_8004229C_ovl_01(M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK func_8004251C_ovl_01(s32, void *, void *);  /* extern */
M2C_UNK func_8004A5EC_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80083230_ovl_01(void *, void *);       /* extern */
s32 func_80083D5C_ovl_01(void *, s32);              /* extern */
M2C_UNK func_800854BC_ovl_01(void *, void *, M2C_UNK); /* extern */
M2C_UNK func_8008792C_ovl_01(void *, void *, u32);  /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;
extern M2C_UNK D_800E8FFC_ovl_01;
extern u32 D_8010BBC8_ovl_01;
extern s32 D_8010BBCC_ovl_01;
extern s32 D_80115220_ovl_01;
extern s32 D_801247D0_ovl_01;

void func_80050394_ovl_01(void) {
    M2C_UNK sp10;
    u32 sp30;
    s16 *var_a0_2;
    s16 temp_v1_3;
    s16 var_a1_2;
    s16 var_a2_3;
    s16 var_t0_2;
    s16 var_t1;
s16 __repair_result_var_t1;
    s16 var_v1_2;
    s32 temp_lo;
    s32 temp_s4;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_fp;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_3;
    u16 *var_a1;
    u16 *var_a3;
    u16 *var_t7;
    u16 temp_v0;
    u16 temp_v0_3;
    u32 temp_a0;
    u32 temp_v1_2;
    u32 var_a2_4;
    u32 var_s5;
    u32 var_t0;
    u32 var_v0_3;
    u32 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_v0_2;
    void *var_a0;
    void *var_a3_2;
    void *var_s0;

    temp_s4 = ((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8) + 1) << 0xC) | (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FA) * 0x10) | M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC);
    sp30 = (u32) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), u8 *, 2);
    if (temp_s4 == 0x5076) {
        var_v1 = 0;
        if ((u32) D_8010BBC8_ovl_01 < 5U) {
            var_v1 = D_8010BBC8_ovl_01 + 1;
        }
        D_8010BBC8_ovl_01 = var_v1;
    }
    var_s5 = 0;
    var_fp = 0;
loop_5:
    var_v0 = var_s5 < sp30;
loop_6:
    if (var_v0 != 0) {
        temp_s1 = var_fp + &D_800E1898_ovl_01;
        var_fp += 0x368;
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0);
        var_s5 += 1;
        if (temp_v1 & 1) {
            var_v0 = var_s5 < sp30;
            if (!(temp_v1 & 0x80000)) {
                var_a0 = temp_s1 + 0x64;
                if ((temp_s4 == 0x615C) && (D_80115220_ovl_01 != 0)) {
                    var_s0 = temp_s1 + 0x14;
                    if (var_s5 == 7) {
                        var_a1 = *M2C_FIELD(temp_s1, s32 **, 0xB8) + 0x10;
                        var_t7 = var_a1 + 0x10;
                        var_a3 = var_a1 + 0x1F0;
                        if (D_80115220_ovl_01 == 1) {
                            var_a2 = 7;
                            do {
                                temp_v0 = *var_a1;
                                var_a1 += 2;
                                var_a2 -= 1;
                                *var_a3 = temp_v0;
                                var_a3 += 2;
                            } while (var_a2 != -1);
                            var_a1 -= 0x10;
                            var_a3 -= 0x10;
                        }
                        var_t0 = D_80115220_ovl_01 << 5;
                        D_80115220_ovl_01 += 1;
                        if (var_t0 >= 0x1001U) {
                            var_t0 = 0x1000;
                        }
                        temp_t4 = 0x1000 - var_t0;
                        var_a2_2 = 0;
loop_19:
                        var_a2_2 += 1;
                        if (var_a2_2 < 8) {
                            temp_v1_2 = *var_a3 & 0xFFFF;
                            temp_t6 = (temp_v1_2 >> 0xB) * temp_t4;
                            temp_a0 = *var_t7 & 0xFFFF;
                            temp_t5 = (temp_a0 >> 0xB) * var_t0;
                            temp_t3 = ((temp_v1_2 >> 6) & 0x1F) * temp_t4;
                            temp_lo = ((temp_a0 >> 6) & 0x1F) * var_t0;
                            var_a3 += 2;
                            var_t7 += 2;
                            *var_a1 = ((((u32) (temp_t6 + temp_t5) >> 0xC) & 0xFF) << 0xB) | ((((u32) (temp_t3 + temp_lo) >> 0xC) & 0xFF) << 6) | ((((u32) ((((temp_v1_2 >> 1) & 0x1F) * temp_t4) + (((temp_a0 >> 1) & 0x1F) * var_t0)) >> 0xC) & 0xFF) * 2) | 1;
                            var_a1 += 2;
                            goto loop_19;
                        }
                        var_a0 = temp_s1 + 0x64;
                        goto block_22;
                    }
                } else {
block_22:
                    var_s0 = temp_s1 + 0x14;
                }
                func_80040E88_ovl_01(var_a0, var_s0);
                temp_s0 = temp_s1 + 0x44;
                func_8004251C_ovl_01(M2C_FIELD(temp_s1, s32 *, 0x70), var_s0, temp_s0);
                temp_s3 = temp_s1 + 0x78;
                if (M2C_FIELD(temp_s1, u8 *, 8) == 2) {
                    M2C_FIELD(temp_s1, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x5C) - 0x384);
                }
                temp_s2 = temp_s1 + 0x58;
                func_80083230_ovl_01(temp_s3, temp_s2);
                func_8004229C_ovl_01(&D_800E8FFC_ovl_01, temp_s0, &sp10);
                if (var_s5 == 2) {
                    D_8010BBCC_ovl_01 += 1;
                }
                if (M2C_FIELD(temp_s1, u8 *, 8) == 1) {
                    D_801247D0_ovl_01 |= 2;
                    if (M2C_FIELD(temp_s1, void **, 0xC4) != NULL) {
                        temp_v0_2 = M2C_FIELD(temp_s1, void **, 0x364);
                        temp_v1_3 = M2C_FIELD(temp_v0_2, s16 *, 2);
                        __repair_result_var_t1 = M2C_FIELD(temp_v0_2, s16 *, 0);
                        if (temp_v1_3 & 4) {
                            var_v0_2 = temp_v1_3 & 2;
                            if (var_s5 >= 2U) {
                                M2C_FIELD(temp_s1, s32 *, 0) = (s32) (M2C_FIELD(temp_s1, s32 *, 0) | 0x80000);
                            } else {
                                goto block_33;
                            }
                        } else {
                            var_v0_2 = temp_v1_3 & 2;
block_33:
                            if (var_v0_2 != 0) {
                                var_t1 = -var_t1;
                            }
                            if (M2C_FIELD(temp_s1, s32 *, 0x360) != 0) {
                                var_a0_2 = M2C_FIELD(temp_s1, s32 *, 0xC0) + (((temp_v1_3 & 1) * 2) + 8);
                                var_a3_2 = var_a0_2 + 0x20;
                                var_t0_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s1, void **, 0xC4), void **, 8), void **, 8), s16 *, 0xE);
loop_37:
                                var_v0_3 = temp_s4 - 0x40A0;
                                if (var_t0_2 != 0) {
                                    var_v1_2 = *var_a0_2 + var_t1;
                                    var_a1_2 = M2C_FIELD(var_a3_2, s16 *, -0x10) + var_t1;
                                    var_a2_3 = M2C_FIELD(var_a3_2, s16 *, 0) + var_t1;
                                    if ((var_v1_2 > 0x7FFF) || (var_a1_2 > 0x7FFF) || (var_a2_3 > 0x7FFF)) {
                                        var_v1_2 -= 0x4000;
                                        var_a1_2 -= 0x4000;
                                        var_a2_3 -= 0x4000;
                                    } else if ((var_v1_2 < -0x7FFF) || (var_a1_2 < -0x7FFF) || (var_a2_3 < -0x7FFF)) {
                                        var_v1_2 += 0x4000;
                                        var_a1_2 += 0x4000;
                                        var_a2_3 += 0x4000;
                                    }
                                    *var_a0_2 = var_v1_2;
                                    M2C_FIELD(var_a3_2, s16 *, -0x10) = var_a1_2;
                                    M2C_FIELD(var_a3_2, s16 *, 0) = var_a2_3;
                                    var_a3_2 += 0x30;
                                    var_a0_2 += 0x30;
                                    var_t0_2 -= 3;
                                    goto loop_37;
                                }
                            } else {
                                var_v0_3 = temp_s4 - 0x40A0;
                            }
                            var_s0_2 = 0;
                            if ((var_v0_3 >= 3U) && (((temp_s4 & 0xFFF0) == 0x4080) || (temp_s4 == 0x4052) || (temp_s4 == 0x4000) || (temp_s4 == 0x400A) || (temp_s4 == 0x4091) || (temp_s4 == 0x40AC) || (func_80083D5C_ovl_01(temp_s1 + 0x58, M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x290)) != 0) || (M2C_FIELD(temp_s1, s32 *, 0) & 0x10))) {
                                var_s0_2 = 1;
                            }
                            if (var_s0_2 != 0) {
                                func_800411E8_ovl_01(temp_s1 + 0x44, temp_s1 + 0x2B8);
                                M2C_FIELD(temp_s1, s32 *, 0x1E8) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x1E8) | 8);
                                func_800854BC_ovl_01(temp_s1 + 0x1E8, temp_s1 + 0x78, 0);
                                M2C_FIELD(temp_s1, s32 *, 0x1E8) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x1E8) & ~8);
                            }
                            goto block_60;
                        }
                    } else {
block_60:
                        var_v1_3 = -3;
                        goto block_76;
                    }
                } else {
                    if ((M2C_FIELD(temp_s1, void **, 0xC4) != NULL) && ((func_80083D5C_ovl_01(temp_s2, M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x290)) != 0) || (M2C_FIELD(temp_s1, s32 *, 0) & 0x10))) {
                        temp_s0_2 = temp_s1 + 0x1E8;
                        if ((temp_s4 == 0x5076) && (var_s5 >= 4U)) {
                            var_a2_4 = 3;
                            if (var_s5 < 7U) {
                                D_801247D0_ovl_01 |= 8;
                                if (!(D_8010BBC8_ovl_01 & 1)) {
                                    var_a2_4 = (u32) D_8010BBC8_ovl_01 >> 1;
                                }
                                func_8008792C_ovl_01(temp_s3, temp_s0_2, var_a2_4);
                            }
                        }
                        if (M2C_FIELD(temp_s1, s32 *, 0x10) & 0x10) {
                            D_801247D0_ovl_01 |= 4;
                        }
                        if (M2C_FIELD(temp_s1, s32 *, 0x1E8) & 8) {
                            func_8004A5EC_ovl_01(temp_s1 + 0x78, temp_s0_2);
                            temp_v0_3 = M2C_FIELD(temp_s0_2, u16 *, 0x138) + 1;
                            M2C_FIELD(temp_s0_2, u16 *, 0x138) = temp_v0_3;
                            if ((temp_v0_3 & 0xFFFF) == 0x1E) {
                                M2C_FIELD(temp_s1, s32 *, 0) = 0;
                            }
                        }
                        func_800411E8_ovl_01(temp_s1 + 0x44, temp_s0_2 + 0xD0);
                        func_800854BC_ovl_01(temp_s0_2, temp_s1 + 0x78, 0);
                        var_v1_3 = -0xD;
block_76:
                        D_801247D0_ovl_01 &= var_v1_3;
                    }
                    M2C_FIELD(temp_s1, u16 *, 0x34) = (u16) M2C_FIELD(temp_s1, u16 *, 0x2A);
                    M2C_FIELD(temp_s1, u16 *, 0x36) = (u16) M2C_FIELD(temp_s1, u16 *, 0x2E);
                    M2C_FIELD(temp_s1, u16 *, 0x38) = (u16) M2C_FIELD(temp_s1, u16 *, 0x32);
                    M2C_FIELD(temp_s1, u16 *, 0x3A) = (u16) M2C_FIELD(temp_s1, u16 *, 0x122);
                    M2C_FIELD(temp_s1, u16 *, 0x3C) = (u16) M2C_FIELD(temp_s1, u16 *, 0x126);
                    M2C_FIELD(temp_s1, u16 *, 0x3E) = (u16) M2C_FIELD(temp_s1, u16 *, 0x12A);
                }
                goto loop_5;
            }
        } else {
            goto loop_5;
        }
        goto loop_6;
    }
}
