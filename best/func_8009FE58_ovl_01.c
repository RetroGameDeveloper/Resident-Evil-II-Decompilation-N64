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

M2C_UNK func_800A1570_ovl_01(void *, s32, M2C_UNK, u8); /* extern */
s32 func_800A67C0_ovl_01(s32, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_800AC5B4_ovl_01(s32, s32, u8, s32);    /* extern */
extern void *D_8013BC20;
extern M2C_UNK D_80143BF0;
extern u8 D_80143BF4;
extern void *D_80143BF8;

u8 func_8009FE58_ovl_01(void) {
    s32 sp28;
    u8 sp37;
    s32 temp_a1_2;
    s32 temp_a2_2;
    s32 temp_a3_2;
    s32 temp_t0_2;
    s32 temp_t3;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_s2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_t2;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 var_v0;
    void **temp_v1_8;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_9;

    var_s3 = 0;
    sp37 = 0;
    sp28 = 0;
    do {
        if (M2C_FIELD((D_80143BF8 + var_s3), s32 *, 0x574) != 0) {
            sp37 = 1;
loop_3:
            temp_t0 = D_80143BF8 + var_s3;
            temp_s2 = M2C_FIELD(M2C_FIELD(temp_t0, void **, 0x574), u16 *, 0) + M2C_FIELD(temp_t0, u32 *, 0x570);
            if ((u32) (M2C_FIELD(temp_t0, s32 *, 0x56C) + M2C_FIELD(D_80143BF8, s32 *, 0x120)) >= temp_s2) {
                temp_v0 = M2C_FIELD(temp_t0, void **, 0x574);
                temp_a1 = M2C_FIELD(temp_t0, u8 *, 0x58C);
                M2C_FIELD(temp_t0, u32 *, 0x570) = temp_s2;
                temp_a3 = M2C_FIELD(temp_v0, u8 *, 2);
                temp_a2 = M2C_FIELD(temp_v0, u8 *, 3);
                if ((temp_a3 == 0xFF) && (temp_a2 == temp_a3)) {
                    M2C_FIELD(temp_t0, void **, 0x574) = NULL;
                } else {
                    var_s5 = 4;
                    if (temp_a3 & 0x80) {
                        if (temp_a2 == 0) {
                            temp_v0_2 = temp_a3 & 0x7F;
                            temp_a1_2 = temp_a1 & 0xFF;
                            if (temp_a1_2 != 9) {
                                temp_v1 = M2C_FIELD((temp_v0_2 + D_80143BF8), u8 *, 8);
                                if (temp_v1 != 0xFF) {
                                    temp_v1_2 = (temp_v1 * 8) + M2C_FIELD(D_80143BF8, s32 *, 4);
                                    M2C_FIELD((D_80143BF8 + (temp_a1_2 * 4)), s32 *, 0xF80) = (s32) ((M2C_FIELD(temp_v1_2, u16 *, 0) << 0x10) | (M2C_FIELD(temp_v1_2, u8 *, 2) << 8) | M2C_FIELD(temp_v1_2, u8 *, 3));
                                }
                            } else {
                                temp_v1_3 = M2C_FIELD((temp_v0_2 + D_80143BF8), u8 *, 0x8C);
                                if (temp_v1_3 != 0xFF) {
                                    temp_v1_4 = (temp_v1_3 * 8) + M2C_FIELD(D_80143BF8, s32 *, 0x88);
                                    M2C_FIELD(D_80143BF8, s32 *, 0xFA4) = (s32) ((M2C_FIELD(temp_v1_4, u16 *, 0) << 0x10) | (M2C_FIELD(temp_v1_4, u8 *, 2) << 8) | M2C_FIELD(temp_v1_4, u8 *, 3));
                                }
                            }
                        } else {
                            if (temp_a2 == 1) {
                                var_a0 = 0x82;
                                goto block_20;
                            }
                            var_a0 = temp_a2 & 0x7F;
                            if (temp_a2 & 0x80) {
                                if (var_a0 == 0x68) {
                                    if (M2C_FIELD(D_80143BF8, u8 *, 0xFF4) != 0) {
                                        func_800A1570_ovl_01(D_80143BF8 + 0xFC8, M2C_FIELD(D_80143BF8, s32 *, 0xFF0), 1, temp_a3);
                                        M2C_FIELD(D_80143BF8, u8 *, 0xFF4) = 0U;
                                    }
                                } else {
block_20:
                                    func_800AC5B4_ovl_01(var_a0, temp_a1 & 0xFF, M2C_FIELD(&D_80143BF0, u8 *, 3), temp_a3 & 0x7F);
                                }
                            } else {
                                goto block_21;
                            }
                        }
                    } else {
block_21:
                        if ((temp_a3 != 0) || (temp_a2 != 0)) {
                            temp_t1 = D_80143BF8 + var_s3;
                            temp_t2 = M2C_FIELD(temp_t1, u8 *, 0x58F);
                            var_s5 = 6;
                            var_v0 = temp_t2;
                            if ((s32) temp_t2 < 0) {
                                var_v0 = temp_t2 + 0x1F;
                            }
                            if (M2C_FIELD((D_80143BF8 + (((s32) var_v0 >> 5) * 4)), s32 *, 0x110) & (1 << (temp_t2 & 0x1F))) {
                                temp_t0_2 = M2C_FIELD((D_80143BF8 + ((temp_a1 & 0xFF) * 4)), s32 *, 0xF80);
                                if (temp_t0_2 != -1) {
                                    temp_a3_2 = temp_a3 + M2C_FIELD(temp_t1, s8 *, 0x58E);
                                    var_v1 = 0x7F;
                                    if (temp_a3_2 < 0x80) {
                                        var_v1 = temp_a3_2;
                                        if (temp_a3_2 < 0) {
                                            var_v1 = 0;
                                        }
                                    }
                                    temp_a2_2 = temp_a2 + M2C_FIELD((D_80143BF8 + var_s3), s8 *, 0x58D);
                                    if (temp_a2_2 < 0x80) {
                                        var_v0_2 = temp_a2_2;
                                        if (temp_a2_2 < 0) {
                                            var_v0_2 = 0;
                                        }
                                    } else {
                                        var_v0_2 = 0x7F;
                                    }
                                    temp_v1_5 = D_8013BC20;
                                    if (temp_v1_5 != NULL) {
                                        temp_v0_3 = M2C_FIELD(temp_v1_5, void **, 0);
                                        D_8013BC20 = temp_v0_3;
                                        if (temp_v0_3 != NULL) {
                                            M2C_FIELD(temp_v0_3, s32 *, 4) = 0;
                                        }
                                        M2C_FIELD(temp_v1_5, void ***, 4) = NULL;
                                        temp_v0_4 = M2C_FIELD(D_80143BF8, void **, 0xF78);
                                        M2C_FIELD(temp_v1_5, void **, 0) = temp_v0_4;
                                        if (temp_v0_4 != NULL) {
                                            M2C_FIELD(M2C_FIELD(D_80143BF8, void **, 0xF78), void **, 4) = temp_v1_5;
                                        }
                                        M2C_FIELD(D_80143BF8, void **, 0xF78) = temp_v1_5;
                                    }
                                    if (temp_v1_5 != NULL) {
                                        if (D_80143BF4 != 0) {

                                        }
                                        temp_v0_5 = func_800A67C0_ovl_01(temp_t0_2, var_v1 & 0xFF, var_v0_2 & 0xFF, 0x40);
                                        if (temp_v0_5 != -1) {
                                            M2C_FIELD(temp_v1_5, s32 *, 8) = temp_v0_5;
                                            temp_v1_6 = D_80143BF8 + var_s3;
                                            M2C_FIELD(temp_v1_5, s32 *, 0xC) = (s32) (temp_s2 + M2C_FIELD(M2C_FIELD(temp_v1_6, void **, 0x574), u16 *, 4));
                                            M2C_FIELD(temp_v1_5, s32 *, 0x10) = (s32) M2C_FIELD(temp_v1_6, s32 *, 0x568);
                                            M2C_FIELD(temp_v1_5, s32 *, 0x14) = (s32) M2C_FIELD(temp_v1_6, s32 *, 0x56C);
                                        } else {
                                            temp_v1_7 = M2C_FIELD(temp_v1_5, void **, 0);
                                            if (temp_v1_7 != NULL) {
                                                M2C_FIELD(temp_v1_7, void ***, 4) = (void **) M2C_FIELD(temp_v1_5, void ***, 4);
                                            }
                                            temp_v1_8 = M2C_FIELD(temp_v1_5, void ***, 4);
                                            if (temp_v1_8 != NULL) {
                                                *temp_v1_8 = M2C_FIELD(temp_v1_5, void **, 0);
                                            } else {
                                                M2C_FIELD(D_80143BF8, void **, 0xF78) = (void *) M2C_FIELD(temp_v1_5, void **, 0);
                                            }
                                            M2C_FIELD(temp_v1_5, void **, 0) = (void *) D_8013BC20;
                                            if (D_8013BC20 != NULL) {
                                                M2C_FIELD(D_8013BC20, void **, 4) = temp_v1_5;
                                            }
                                            M2C_FIELD(temp_v1_5, void ***, 4) = NULL;
                                            D_8013BC20 = temp_v1_5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    temp_v1_9 = D_80143BF8 + var_s3;
                    M2C_FIELD(temp_v1_9, s32 *, 0x574) = (s32) (M2C_FIELD(temp_v1_9, s32 *, 0x574) + var_s5);
                }
                if (M2C_FIELD((D_80143BF8 + var_s3), s32 *, 0x574) != 0) {
                    goto loop_3;
                }
            }
        }
        var_s3 += 0x28;
        temp_t3 = sp28 + 1;
        sp28 = temp_t3;
    } while (temp_t3 < 0x40);
    return sp37;
}
