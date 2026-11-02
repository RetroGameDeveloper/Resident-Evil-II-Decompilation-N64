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

M2C_UNK func_800A0CBC_ovl_01(s32);                  /* extern */
M2C_UNK func_800A0EBC_ovl_01(s32);                  /* extern */
M2C_UNK func_800A1298_ovl_01(s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_800A5830_ovl_01(s32);                      /* extern */
M2C_UNK func_800A591C_ovl_01(s32);                  /* extern */
M2C_UNK func_800A5970_ovl_01(s32);                  /* extern */
M2C_UNK func_800A59A0_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800A5A00_ovl_01(s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_800A5C94_ovl_01();                     /* extern */
s32 func_800A6094_ovl_01(s32, s32, u32);            /* extern */
s32 func_800A619C_ovl_01(u32);                      /* extern */
M2C_UNK func_800A85AC_ovl_01();                     /* extern */
s16 func_800AB2D0_ovl_01(s32);                      /* extern */
s32 func_800AB36C_ovl_01(s32);                      /* extern */
M2C_UNK func_800AC6D4_ovl_01(u8, u8, M2C_UNK);      /* extern */
s32 func_800AC828_ovl_01(s32 *, s32);               /* extern */
s32 func_800AC848_ovl_01(s32 *);                    /* extern */
s32 func_800AC868_ovl_01(s32 *);                    /* extern */
s32 func_800AC888_ovl_01(s32 *, M2C_UNK);           /* extern */
s32 func_800AC8A8_ovl_01(s32 *);                    /* extern */
s32 func_800AC8C8_ovl_01(s32 *, s32);               /* extern */
s32 func_800AC8E8_ovl_01(s32 *);                    /* extern */
s32 func_800AC908_ovl_01(s32 *);                    /* extern */
s32 func_800AC928_ovl_01(s32 *);                    /* extern */
M2C_UNK func_800B036C_ovl_01(s32 *);                /* extern */
extern u8 D_801362B1_ovl_01;
extern s32 D_801443E8;
extern s32 D_801477E8;
extern u8 D_801479F8;
extern M2C_UNK D_80147A00;
extern M2C_UNK D_80147A40;
extern u8 D_80147F49;

void func_800A6BA4_ovl_01(void) {
    M2C_UNK *var_s0_5;
    s32 *var_a0;
    s32 *var_s0;
    s32 *var_s5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 temp_v1_10;
    s32 temp_v1_12;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_8;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_lo;
    s32 var_s0_4;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 var_v1;
    u32 temp_a0_3;
    u32 temp_a1_2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_6;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 temp_v1_7;
    u32 var_a2;
    u32 var_s0_2;
    u32 var_s0_3;
    u32 var_s2_3;
    u8 temp_s4;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1_11;
    u8 temp_v1_9;
    void *temp_v0_8;
    void *temp_v1_3;
    void *var_s1;

    var_s5 = &D_801443E8;
    var_s6 = 0;
    if (D_801479F8 != 0) {
        var_s1 = &D_801443E8 + 0xC2;
        do {
            if (*var_s5 != 0) {
                func_800B036C_ovl_01(var_s5);
                goto block_5;
            }
            if (func_800A5830_ovl_01(var_s6) & 0xFF) {
block_5:
                if (M2C_FIELD(var_s1, u8 *, -5) == 0) {
                    var_s2 = 0;
                    var_s0 = var_s5;
                    do {
                        temp_v0 = M2C_FIELD(var_s0, u32 *, 0x16C);
                        if (temp_v0 != 0) {
                            temp_v1 = M2C_FIELD(var_s0, u32 *, 0x168) + D_801477E8;
                            M2C_FIELD(var_s0, u32 *, 0x168) = temp_v1;
                            M2C_FIELD(var_s0, s16 *, 0x170) = func_800AB2D0_ovl_01(((u32) ((temp_v1 % temp_v0) * 0x10) / (u32) (temp_v0 >> 8)) & 0xFFFF);
                        }
                        var_s2 += 1;
                        var_s0 += 0xC;
                    } while (var_s2 < 2);
                    var_s2_2 = 0;
                    if (M2C_FIELD(var_s1, s32 *, -0x9E) & 0x4000) {
                        temp_v0_2 = M2C_FIELD(var_s1, u32 *, -0x52);
                        temp_v1_2 = M2C_FIELD(var_s1, u32 *, -0x56) + D_801477E8;
                        M2C_FIELD(var_s1, u32 *, -0x56) = temp_v1_2;
                        M2C_FIELD(var_s1, s32 *, -0x4E) = (s32) func_800AB2D0_ovl_01(((u32) ((temp_v1_2 % temp_v0_2) * 0x10) / (u32) (temp_v0_2 >> 8)) & 0xFFFF);
                        var_s2_2 = 0;
                    }
                    var_a0 = var_s5;
                    do {
                        temp_v1_3 = var_s5 + var_s2_2;
                        if (M2C_FIELD(temp_v1_3, u8 *, 0x48) != 0) {
                            temp_v0_3 = M2C_FIELD(temp_v1_3, u8 *, 0xB0) - 1;
                            M2C_FIELD(temp_v1_3, u8 *, 0xB0) = temp_v0_3;
                            if (!(temp_v0_3 & 0xFF)) {
                                M2C_FIELD(temp_v1_3, u8 *, 0xB0) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0x48);
                                M2C_FIELD(var_a0, s32 *, 0x40) = 0;
                            } else {
                                M2C_FIELD(var_a0, s32 *, 0x40) = (s32) (M2C_FIELD(var_a0, s32 *, 0x40) + M2C_FIELD(var_a0, s32 *, 0x7C));
                            }
                        }
                        var_s2_2 += 1;
                        var_a0 += 4;
                    } while (var_s2_2 < 2);
                    if ((M2C_FIELD(var_s1, u8 *, -0x78) != 0xFF) && ((u32) (func_800AC8E8_ovl_01(var_s5) & 0xFFFF) >= 0x1F81U)) {
                        var_v0 = M2C_FIELD(var_s1, s32 *, -0x9E) | 0x40000000;
                    } else {
                        var_v0 = M2C_FIELD(var_s1, s32 *, -0x9E) & 0xBFFFFFFF;
                    }
                    M2C_FIELD(var_s1, s32 *, -0x9E) = var_v0;
                    if (!(M2C_FIELD(var_s1, s32 *, -0x9E) & 0x1000)) {
                        if (M2C_FIELD(var_s1, u8 *, -0x78) != 0xFF) {
                            if ((u32) (func_800AC908_ovl_01(var_s5) & 0xFFFF) < 0x1F81U) {
                                M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) & ~0x800);
                                func_800AC6D4_ovl_01(M2C_FIELD(var_s1, u8 *, -0x78), M2C_FIELD(var_s1, u8 *, -0x77), 0);
                            } else {
                                temp_a0 = M2C_FIELD(var_s1, s32 *, -0x9E);
                                if (!(temp_a0 & 0x800)) {
                                    if (!(temp_a0 & 0x80000)) {
                                        if ((M2C_FIELD(var_s1, u8 *, -0x2A) == 1) && !(temp_a0 & 0x2000)) {
                                            M2C_FIELD(var_s1, s32 *, -0x36) = 0;
                                        } else {
                                            M2C_FIELD(var_s1, s32 *, -0x36) = (s32) M2C_FIELD(var_s1, s32 *, -0x32);
                                        }
                                        M2C_FIELD(var_s1, u32 *, -0x2E) = (u32) (M2C_FIELD(var_s1, u8 *, -1) << 0x10);
                                    }
                                    temp_v0_4 = M2C_FIELD(var_s1, u8 *, -0x78);
                                    if (temp_v0_4 != 0xFF) {
                                        func_800AC6D4_ovl_01(temp_v0_4, M2C_FIELD(var_s1, u8 *, -0x77), 1);
                                    }
                                }
                                M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) | 0x800);
                            }
                        }
                        M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) | 0x2000);
                    }
                    temp_v1_4 = M2C_FIELD(var_s1, s32 *, -0x9E);
                    if (temp_v1_4 & 0x20) {
                        M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) ((temp_v1_4 & ~0x20) | 0x10);
                        func_800A591C_ovl_01(var_s6);
                    }
                    if ((M2C_FIELD(var_s1, s32 *, -0x9E) & 0x80) && !(M2C_FIELD(var_s1, s32 *, -0x9E) & 0x40000000)) {
                        M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) & ~0x90);
                        func_800A5970_ovl_01(var_s6);
                    }
                    temp_a0_2 = M2C_FIELD(var_s1, s32 *, -0x9A);
                    if (temp_a0_2 != 0) {
                        temp_v0_5 = temp_a0_2 - (M2C_FIELD(var_s1, u16 *, -0x96) * D_801477E8);
                        M2C_FIELD(var_s1, s32 *, -0x9A) = temp_v0_5;
                        if (temp_v0_5 < 0) {
                            M2C_FIELD(var_s1, s32 *, -0x9A) = 0;
                        }
                    }
                    if (M2C_FIELD(var_s1, s32 *, -0x9E) & 0x10000) {
                        temp_v1_5 = M2C_FIELD(var_s1, s32 *, -0x16) - (((u32) M2C_FIELD(var_s1, u32 *, -0x1A) >> 8) * M2C_FIELD(var_s1, s32 *, -0x86));
                        M2C_FIELD(var_s1, s32 *, -0x8A) = temp_v1_5;
                        if (temp_v1_5 >= 0) {
                            var_a0_2 = 0x7F0000;
                            if ((u32) temp_v1_5 <= 0x7F0000U) {
                                var_a0_2 = temp_v1_5;
                            }
                        } else {
                            var_a0_2 = 0;
                        }
                        M2C_FIELD(var_s1, s32 *, -0x8A) = var_a0_2;
                        temp_v0_6 = M2C_FIELD(var_s1, u32 *, -0x1A) - D_801477E8;
                        M2C_FIELD(var_s1, u32 *, -0x1A) = temp_v0_6;
                        if (temp_v0_6 == 0) {
                            M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) & 0xFFFEFFFF);
                            M2C_FIELD(var_s1, s32 *, -0x8A) = (s32) M2C_FIELD(var_s1, s32 *, -0x16);
                        }
                    }
                    var_s0_2 = (M2C_FIELD(var_s1, u16 *, -0x72) << 0x10) + ((M2C_FIELD(var_s1, s8 *, -2) << 0x10) / 100);
                    if (M2C_FIELD(var_s1, s32 *, -0x9E) & 0x40010) {
                        if (M2C_FIELD(var_s1, u8 *, -0x78) != 0xFF) {
                            var_v1 = func_800AC888_ovl_01(var_s5, 0x40010) & 0xFFFF;
                            M2C_FIELD(var_s1, u16 *, -0xA) = var_v1;
                            goto block_59;
                        }
                    } else {
                        var_v1 = M2C_FIELD(var_s1, u16 *, -0xA);
block_59:
                        temp_v1_6 = var_v1 - 0x2000;
                        if (var_v1 != 0x2000) {
                            if (temp_v1_6 < 0) {
                                var_lo = M2C_FIELD(var_s1, u8 *, -0x58) * temp_v1_6;
                            } else {
                                var_lo = M2C_FIELD(var_s1, u8 *, -0x57) * temp_v1_6;
                            }
                            var_s0_2 += var_lo * 8;
                        }
                    }
                    temp_a1 = M2C_FIELD(var_s1, s32 *, -0x9E);
                    if (temp_a1 & 0x4000) {
                        temp_s2 = (M2C_FIELD(var_s1, u8 *, -0x4A) << 8) + ((M2C_FIELD(var_s1, u8 *, -0x49) << 8) / 100);
                        if ((temp_a1 & 0x8000) && (M2C_FIELD(var_s1, u8 *, -0x78) != 0xFF)) {
                            var_v0_2 = (s32) (M2C_FIELD(var_s1, s32 *, -0x4E) * ((u32) (func_800AC8C8_ovl_01(var_s5, temp_a1) & 0xFFFF) >> 7)) >> 7;
                        } else {
                            var_v0_2 = M2C_FIELD(var_s1, s32 *, -0x4E);
                        }
                        var_s0_2 += (s32) (temp_s2 * var_v0_2) >> 4;
                    }
                    var_a2 = var_s0_2;
                    if (M2C_FIELD(var_s1, s32 *, -0x9E) & 0x800) {
                        temp_a0_3 = (u32) (M2C_FIELD(var_s1, s32 *, -0x32) - M2C_FIELD(var_s1, s32 *, -0x36)) >> 8;
                        if ((s32) temp_a0_3 > 0) {
                            temp_a1_2 = M2C_FIELD(var_s1, u32 *, -0x2E);
                            temp_v1_7 = temp_a1_2 + ((s32) (D_801477E8 * ((s32) (var_s0_2 - temp_a1_2) >> 8)) / (s32) temp_a0_3);
                            M2C_FIELD(var_s1, u32 *, -0x2E) = temp_v1_7;
                            if (((temp_a1_2 < var_s0_2) && (temp_v1_7 < var_s0_2)) || ((var_s0_2 < temp_a1_2) && (var_s0_2 < temp_v1_7))) {
                                var_a2 = M2C_FIELD(var_s1, u32 *, -0x2E);
                                var_v0_3 = M2C_FIELD(var_s1, s32 *, -0x36) + D_801477E8;
                            } else {
                                var_v0_3 = M2C_FIELD(var_s1, s32 *, -0x32);
                            }
                            M2C_FIELD(var_s1, s32 *, -0x36) = var_v0_3;
                        }
                    }
                    temp_s3 = var_a2 & 0xFFFF;
                    var_s2_3 = func_800A6094_ovl_01((var_a2 >> 0x10) & 0xFF, M2C_FIELD(var_s1, s32 *, -0x66), var_a2) << 0x10;
                    if (temp_s3 != 0) {
                        temp_s0 = var_s2_3 >> 0x10;
                        var_s2_3 += ((func_800A619C_ovl_01(temp_s0) & 0xFFFF) - temp_s0) * temp_s3;
                    }
                    temp_s0_2 = var_s2_3 + (M2C_FIELD(var_s1, s32 *, -0x82) + M2C_FIELD(var_s1, s32 *, -0x7E));
                    if (M2C_FIELD(var_s1, u8 *, -0x78) != 0xFF) {
                        var_s0_3 = (u32) ((temp_s0_2 >> 0x10) * (func_800AC8A8_ovl_01(var_s5) & 0xFFFF)) >> 0xD;
                    } else {
                        var_s0_3 = temp_s0_2 >> 0x10;
                    }
                    if (D_801362B1_ovl_01 != 0) {
                        if (D_801362B1_ovl_01 != 0x2A) {
                            var_s0_3 = var_s0_3 - 0x80 + (func_800AB36C_ovl_01(var_s6) & 0xFF);
                        }
                    }
                    func_800A59A0_ovl_01(var_s6, var_s0_3 & 0xFFFF);
                    if (M2C_FIELD(var_s1, s32 *, -0x9E) & 0x20000) {
                        temp_v1_8 = M2C_FIELD(var_s1, s32 *, -0x3A) - (((u32) M2C_FIELD(var_s1, u32 *, -0xE) >> 8) * M2C_FIELD(var_s1, s32 *, -0x3E));
                        M2C_FIELD(var_s1, s32 *, -0x92) = temp_v1_8;
                        if (temp_v1_8 >= 0) {
                            var_a0_3 = 0x7F0000;
                            if ((u32) temp_v1_8 <= 0x7F0000U) {
                                var_a0_3 = temp_v1_8;
                            }
                        } else {
                            var_a0_3 = 0;
                        }
                        M2C_FIELD(var_s1, s32 *, -0x92) = var_a0_3;
                        temp_v0_7 = M2C_FIELD(var_s1, u32 *, -0xE) - D_801477E8;
                        M2C_FIELD(var_s1, u32 *, -0xE) = (u32) temp_v0_7;
                        if (temp_v0_7 <= 0) {
                            M2C_FIELD(var_s1, s32 *, -0x9E) = (s32) (M2C_FIELD(var_s1, s32 *, -0x9E) & 0xFFFDFFFF);
                            M2C_FIELD(var_s1, s32 *, -0x92) = (s32) M2C_FIELD(var_s1, s32 *, -0x3A);
                        }
                    }
                    temp_v0_8 = (M2C_FIELD(var_s1, u8 *, -4) * 0x28) + &D_80147A40;
                    var_s2_4 = M2C_FIELD(var_s1, s32 *, -0x8A);
                    temp_s4 = M2C_FIELD(var_s1, u8 *, -0x78);
                    var_v1_2 = 0x348;
                    temp_a1_3 = (s32) (((s32) (((s32) M2C_FIELD(var_s1, s32 *, -0x92) >> 7) * M2C_FIELD(temp_v0_8, s16 *, 0x18)) >> 7) * M2C_FIELD(temp_v0_8, s16 *, 0)) >> 7;
                    if (M2C_FIELD(var_s1, u8 *, -0x76) != 0) {
                        var_v1_2 = 0x370;
                    }
                    temp_v1_9 = M2C_FIELD(var_s1, u8 *, -0x93);
                    var_s0_4 = temp_a1_3 * *(var_v1_2 + &D_80147A40);
                    if (temp_v1_9 != 0xFF) {
                        var_s0_4 = (var_s0_4 >> 7) * *(temp_v1_9 + &D_80147A00);
                    }
                    if (D_80147F49 == 0) {
                        var_s3 = 0;
                        if (temp_s4 != 0xFF) {
                            var_s0_4 = (var_s0_4 >> 7) * ((u32) (func_800AC828_ovl_01(var_s5, temp_a1_3) & 0xFFFF) >> 7);
                            if (var_s2_4 != 0x800000) {
                                temp_s2_2 = var_s2_4 + ((((u32) (func_800AC848_ovl_01(var_s5) & 0xFFFF) >> 7) - 0x40) << 0x10);
                                if (temp_s2_2 >= 0) {
                                    if (temp_s2_2 <= 0x7F0000) {
                                        var_v1_3 = temp_s2_2;
                                        goto block_111;
                                    }
                                    var_s2_4 = 0x7F0000;
                                } else {
                                    var_v1_3 = 0;
block_111:
                                    var_s2_4 = var_v1_3;
                                }
                            }
                            var_s3 = (func_800AC868_ovl_01(var_s5) & 0xFFFF) << 9;
                            if (var_s3 > 0x7F0000) {
                                var_s3 = 0x7F0000;
                            }
                        }
                    } else {
                        var_s2_4 = 0x400000;
                        if ((temp_s4 & 0xFF) != 0xFF) {
                            var_s0_4 = (var_s0_4 >> 7) * ((u32) (func_800AC828_ovl_01(var_s5, temp_a1_3) & 0xFFFF) >> 7);
                            var_s2_4 = 0x400000;
                        }
                        var_s3 = 0;
                    }
                    var_v0_4 = temp_s4 & 0xFF;
                    if (var_s6 == 0) {
                        func_800A85AC_ovl_01();
                        var_v0_4 = temp_s4 & 0xFF;
                    }
                    var_a3 = 0;
                    if (var_v0_4 != 0xFF) {
                        var_a3_2 = (s32) (((u32) (func_800AC928_ovl_01(var_s5) & 0xFFFF) >> 7) * var_s0_4) >> 7;
                        if (var_a3_2 > 0x7F0000) {
                            var_a3_2 = 0x7F0000;
                        }
                        var_a3_3 = (var_a3_2 >> 7) * M2C_FIELD(var_s1, u8 *, -0x29);
                        if (var_a3_3 > 0x7F0000) {
                            var_a3_3 = 0x7F0000;
                        }
                        var_a3 = var_a3_3 + (M2C_FIELD(var_s1, u8 *, -0x28) << 0x10);
                        if (var_a3 > 0x7F0000) {
                            var_a3 = 0x7F0000;
                        }
                    }
                    M2C_FIELD(var_s1, s16 *, 0) = (s16) (var_s0_4 >> 8);
                    func_800A5A00_ovl_01(var_s6, var_s0_4, var_s2_4, var_s3, var_a3);
                }
            }
            var_s6 += 1;
            var_s1 += 0x1A0;
            var_s5 += 0x1A0;
        } while (var_s6 < (s32) D_801479F8);
    }
    var_s0_5 = &D_80147A40;
    do {
        temp_v0_9 = M2C_FIELD(var_s0_5, s32 *, 0xC);
        if (temp_v0_9 != 0) {
            temp_v0_10 = M2C_FIELD(var_s0_5, s32 *, 4) - ((temp_v0_9 >> 8) * M2C_FIELD(var_s0_5, s32 *, 8));
            M2C_FIELD(var_s0_5, s32 *, 0) = temp_v0_10;
            if (temp_v0_10 < 0) {
                M2C_FIELD(var_s0_5, s32 *, 0) = 0;
            }
            temp_v1_10 = M2C_FIELD(var_s0_5, s32 *, 0xC) - D_801477E8;
            M2C_FIELD(var_s0_5, s32 *, 0xC) = temp_v1_10;
            if (temp_v1_10 <= 0) {
                temp_v1_11 = M2C_FIELD(var_s0_5, u8 *, 0x15);
                M2C_FIELD(var_s0_5, s32 *, 0xC) = 0;
                M2C_FIELD(var_s0_5, s32 *, 0) = (s32) M2C_FIELD(var_s0_5, s32 *, 4);
                switch (temp_v1_11) {               /* irregular */
                case 1:
                    func_800A0EBC_ovl_01(M2C_FIELD(var_s0_5, s32 *, 0x10));
                    break;
                case 2:
                    func_800A0CBC_ovl_01(M2C_FIELD(var_s0_5, s32 *, 0x10));
                    break;
                case 3:
                    func_800A1298_ovl_01(M2C_FIELD(var_s0_5, s32 *, 0x10), 0, 0);
                    break;
                }
            }
        }
        temp_v0_11 = M2C_FIELD(var_s0_5, s32 *, 0x24);
        if (temp_v0_11 != 0) {
            temp_v0_12 = M2C_FIELD(var_s0_5, s32 *, 0x1C) - ((temp_v0_11 >> 8) * M2C_FIELD(var_s0_5, s32 *, 0x20));
            M2C_FIELD(var_s0_5, s32 *, 0x18) = temp_v0_12;
            if (temp_v0_12 < 0) {
                M2C_FIELD(var_s0_5, s32 *, 0x18) = 0;
            }
            temp_v1_12 = M2C_FIELD(var_s0_5, s32 *, 0x24) - D_801477E8;
            M2C_FIELD(var_s0_5, s32 *, 0x24) = temp_v1_12;
            if (temp_v1_12 <= 0) {
                M2C_FIELD(var_s0_5, s32 *, 0x24) = 0;
                M2C_FIELD(var_s0_5, s32 *, 0x18) = (s32) M2C_FIELD(var_s0_5, s32 *, 0x1C);
            }
        }
        var_s0_5 += 0x28;
    } while ((s32) var_s0_5 < (s32) (&D_80147A40 + 0x500));
    func_800A5C94_ovl_01();
}
