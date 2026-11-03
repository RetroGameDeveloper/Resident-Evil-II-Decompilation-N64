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

s32 func_80062CA0_ovl_01(f32);                      /* extern */
s32 func_800837DC_ovl_01(void *, s32);              /* extern */
extern M2C_UNK D_80000000;
extern f64 D_800B91B8_ovl_01;
extern f64 D_800B91C0_ovl_01;
extern f32 D_800B91C8_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E8D54_ovl_01;
extern s32 D_8010B698_ovl_01;
extern s32 D_80113778_ovl_01;
extern s32 D_8011377C_ovl_01;
extern M2C_UNK D_80139B90;
extern M2C_UNK D_80139D90;
extern f32 D_80139D94;
extern f32 D_80139D98;
extern s32 D_80139D9C;
extern M2C_UNK D_80139DA0;

void func_80062D2C_ovl_01(s32 arg0) {
    void *sp10;
    f32 *sp18;
    f32 *sp1C;
    f32 *var_t6;
    f32 *var_t7;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f64 var_ft0;
    f64 var_fv1;
    s32 *var_fp;
    s32 temp_a3;
    s32 temp_s7;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_s5_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    u16 **var_a3;
    u16 *temp_s0;
    u16 *temp_s0_2;
    u16 *var_s2;
    u16 *var_v1_6;
    u16 temp_a1;
    u16 temp_t3;
    u16 var_s1;
    u16 var_s1_2;
    u16 var_s3;
    u16 var_s3_2;
    u16 var_s4;
    u16 var_s4_2;
    u16 var_s5;
    u16 var_v1;
    u16 var_v1_7;
    u32 temp_t5;
    u32 temp_v1_2;
    u8 var_a0;
    u8 var_a0_2;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s6;

    if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x40200000) == 0x40000000) {
        temp_s2 = M2C_FIELD(((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5) + M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24)), void **, 0x1C);
        if (temp_s2 != (void *)-1) {
            temp_s2_2 = temp_s2 + 2;
            M2C_FIELD(&D_80139D90, u16 *, 0) = (u16) M2C_FIELD(temp_s2, u16 *, 0);
            var_fv1 = (f64) D_80113778_ovl_01;
            M2C_FIELD(&D_80139D90, u16 *, 2) = (u16) M2C_FIELD(temp_s2, u16 *, 2);
            var_s5 = M2C_FIELD(temp_s2_2, u16 *, 2);
            var_s2 = temp_s2_2 + 2 + 2;
            D_80139D9C = (s32) var_s5;
            sp10 = (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) * 0x10) + &D_800E8D54_ovl_01;
            if (D_80113778_ovl_01 < 0) {
                var_fv1 += D_800B91B8_ovl_01;
            }
            var_ft0 = (f64) D_8011377C_ovl_01;
            D_80139D94 = (f32) var_fv1 / (f32) M2C_FIELD(&D_80139D90, u16 *, 0);
            if (D_8011377C_ovl_01 < 0) {
                var_ft0 += D_800B91C0_ovl_01;
            }
            D_80139D98 = (f32) var_ft0 / (f32) M2C_FIELD(&D_80139D90, u16 *, 2);
            if (arg0 & 0xFF) {
                var_t7 = &D_80139D94;
                temp_fs0 = D_800B91C8_ovl_01;
                temp_s6 = &D_80000000 + 1;
                var_t6 = &D_80139D98;
                var_fp = (var_s5 * 4) + &D_80139B90;
loop_8:
                var_s5 -= 1;
loop_9:
                var_fp -= 4;
                if (var_s5 != -1U) {
                    temp_s0 = var_s2;
                    temp_a1 = M2C_FIELD(var_s2, u16 *, 0);
                    var_s2 += 0xC;
                    sp18 = var_t6;
                    sp1C = var_t7;
                    temp_s7 = func_800837DC_ovl_01(sp10, temp_a1 & 0x7FFF);
                    if (M2C_FIELD(temp_s0, s16 *, 0) & 0x8000) {
                        var_s2 = ((s32) (var_s2 + 7) & ~7) + (M2C_FIELD(temp_s0, u16 *, 8) * M2C_FIELD(temp_s0, u16 *, 0xA));
                        var_v0 = (s32) var_s2 & 1;
                    } else {
                        *var_fp = 0;
                        var_s4 = (u16) M2C_FIELD(temp_s0, s16 *, 2);
                        if (M2C_FIELD(temp_s0, s16 *, 2) < 0) {
                            var_s4 = 0;
                        }
                        var_v1 = (u16) M2C_FIELD(temp_s0, s16 *, 4);
                        var_s1 = var_s4;
                        if (M2C_FIELD(temp_s0, s16 *, 4) < 0) {
                            var_v1 = 0;
                        }
                        var_s3 = var_v1;
                        sp18 = var_t6;
                        sp1C = var_t7;
                        temp_t3 = func_80062CA0_ovl_01((f32) M2C_FIELD(temp_s0, u16 *, 6)) | 1;
                        temp_t5 = temp_t3 & 0xFFFF;
                        temp_t4 = M2C_FIELD(temp_s0, u16 *, 0xA) + var_s3;
loop_17:
                        var_v0 = (s32) var_s2 & 1;
                        if ((u32) (var_s3 & 0xFFFF) < (u32) (temp_t4 & 0xFFFF)) {
loop_18:
                            temp_v1 = var_s1 & 0xFFFF;
                            if (temp_v1 != ((M2C_FIELD(temp_s0, u16 *, 8) + var_s4) & 0xFFFF)) {
                                var_a0 = *var_s2;
                                var_s2 += 1;
                                if (var_a0 & 0x80) {
                                    var_a0 &= 0x7F;
                                    goto block_23;
                                }
                                if (temp_s7 != 0) {
                                    temp_fv0 = (f32) temp_v1 * M2C_FIELD(var_t7, f32 *, -0x626C);
                                    temp_a3 = var_s1 + var_a0;
                                    if (!(temp_fs0 <= temp_fv0)) {
                                        var_v1_2 = (s32) temp_fv0;
                                        var_v0_2 = temp_a3 & 0xFFFF;
                                    } else {
                                        var_v1_2 = (s32) (temp_fv0 - temp_fs0) | (s32) temp_s6;
                                        var_v0_2 = temp_a3 & 0xFFFF;
                                    }
                                    temp_fv0_2 = (f32) var_v0_2 * M2C_FIELD(var_t7, f32 *, -0x626C);
                                    var_a2 = var_v1_2;
                                    if (!(temp_fs0 <= temp_fv0_2)) {
                                        var_v1_3 = (s32) temp_fv0_2;
                                        var_v0_3 = var_s3 & 0xFFFF;
                                    } else {
                                        var_v1_3 = (s32) (temp_fv0_2 - temp_fs0) | (s32) temp_s6;
                                        var_v0_3 = var_s3 & 0xFFFF;
                                    }
                                    temp_fv0_3 = (f32) (var_v0_3 + 1) * M2C_FIELD(var_t6, f32 *, -0x6268);
                                    if (!(temp_fs0 <= temp_fv0_3)) {
                                        var_v1_4 = (s32) temp_fv0_3;
                                        var_v0_4 = var_s3 & 0xFFFF;
                                    } else {
                                        var_v1_4 = (s32) (temp_fv0_3 - temp_fs0) | (s32) temp_s6;
                                        var_v0_4 = var_s3 & 0xFFFF;
                                    }
                                    temp_fv0_4 = (f32) var_v0_4 * M2C_FIELD(var_t6, f32 *, -0x6268);
                                    if (!(temp_fs0 <= temp_fv0_4)) {
                                        var_v1_5 = (s32) temp_fv0_4;
                                        var_a1 = var_v1_5 + 1;
                                    } else {
                                        var_v1_5 = (s32) (temp_fv0_4 - temp_fs0) | (s32) temp_s6;
                                        var_a1 = var_v1_5;
                                    }
                                    if ((u32) (var_v1_5 & 0xFFFF) < (u32) (var_v1_4 & 0xFFFF)) {
                                        do {
                                            var_v1_6 = D_8010B698_ovl_01 + ((var_a2 & 0xFFFF) * 2) + ((var_a1 & 0xFFFF) * D_80113778_ovl_01 * 2);
loop_39:
                                            if (temp_t5 < (u16) *var_v1_6) {
                                                *var_v1_6 = temp_t3;
                                            }
                                            var_v1_6 += 2;
                                            if ((u32) (var_a2 & 0xFFFF) < (u32) (var_v1_3 & 0xFFFF)) {
                                                goto loop_39;
                                            }
                                            var_a2 = var_v1_2;
                                            var_a1 += 1;
                                        } while ((u32) (var_a1 & 0xFFFF) < (u32) (var_v1_4 & 0xFFFF));
                                        var_s1 += var_a0;
                                    } else {
                                        goto block_23;
                                    }
                                } else {
block_23:
                                    var_s1 += var_a0;
                                }
                                goto loop_18;
                            }
                            var_s1 = var_s4;
                            var_s3 += 1;
                            goto loop_17;
                        }
                    }
                    if (var_v0 != 0) {
                        var_s2 += 1;
                        goto loop_8;
                    }
                    var_s5 -= 1;
                    goto loop_9;
                }
            } else {
                var_s5_2 = var_s5 - 1;
                M2C_FIELD(&D_80139DA0, s32 *, 0xC) = 0x100;
                M2C_FIELD(&D_80139DA0, s32 *, 0x18) = 0;
                M2C_FIELD(&D_80139DA0, s32 *, 0x10) = 1;
                M2C_FIELD(&D_80139DA0, s32 *, 0) = 1;
                if (var_s5_2 != -1) {
                    var_a3 = (var_s5_2 * 4) + &D_80139B90;
                    do {
                        temp_s0_2 = var_s2;
                        *var_a3 = var_s2;
                        var_s2 += 0xC;
                        if (M2C_FIELD(temp_s0_2, s16 *, 0) & 0x8000) {
                            M2C_FIELD(&D_80139DA0, s32 *, 0x18) = 1;
                            var_s2 = ((s32) (var_s2 + 7) & ~7) + (M2C_FIELD(temp_s0_2, u16 *, 8) * M2C_FIELD(temp_s0_2, u16 *, 0xA));
                            goto block_66;
                        }
                        *var_a3 = NULL;
                        var_s4_2 = (u16) M2C_FIELD(temp_s0_2, s16 *, 2);
                        if (M2C_FIELD(temp_s0_2, s16 *, 2) < 0) {
                            var_s4_2 = 0;
                        }
                        var_v1_7 = (u16) M2C_FIELD(temp_s0_2, s16 *, 4);
                        var_s1_2 = var_s4_2;
                        if (M2C_FIELD(temp_s0_2, s16 *, 4) < 0) {
                            var_v1_7 = 0;
                        }
                        var_s3_2 = var_v1_7;
                        temp_t2 = M2C_FIELD(temp_s0_2, u16 *, 8) + var_s4_2;
                        temp_v1_2 = (M2C_FIELD(temp_s0_2, u16 *, 0xA) + var_s3_2) & 0xFFFF;
                        var_v0_5 = (s32) var_s2 & 1;
                        if ((u32) (var_s3_2 & 0xFFFF) < temp_v1_2) {
                            do {
                                if ((var_s1_2 & 0xFFFF) != (temp_t2 & 0xFFFF)) {
                                    do {
                                        var_a0_2 = *var_s2;
                                        var_s2 += 1;
                                        if (var_a0_2 & 0x80) {
                                            var_a0_2 &= 0x7F;
                                        }
                                        var_s1_2 += var_a0_2;
                                    } while ((var_s1_2 & 0xFFFF) != (temp_t2 & 0xFFFF));
                                }
                                var_s3_2 += 1;
                                var_s1_2 = var_s4_2;
                            } while ((u32) (var_s3_2 & 0xFFFF) < temp_v1_2);
block_66:
                            var_v0_5 = (s32) var_s2 & 1;
                        }
                        if (var_v0_5 != 0) {
                            var_s2 += 1;
                        }
                        var_s5_2 -= 1;
                        var_a3 -= 4;
                    } while (var_s5_2 != -1);
                }
                if (M2C_FIELD(&D_80139DA0, s32 *, 0x18) != 0) {
                    M2C_FIELD(&D_80139DA0, s32 *, 0x18) = (s32) ((s32) (var_s2 + 7) & ~7);
                }
            }
        }
    }
}
