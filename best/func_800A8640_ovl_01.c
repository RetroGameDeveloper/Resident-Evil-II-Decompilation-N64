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

s32 func_800A5C38_ovl_01(s32);                      /* extern */
M2C_UNK func_800ACB60_ovl_01(u16, void *);          /* extern */
M2C_UNK func_800ACDBC_ovl_01(u16, void *, u16);     /* extern */
M2C_UNK func_800AD060_ovl_01(u16, void *);          /* extern */
s32 func_800AD2D0_ovl_01(M2C_UNK, s32);             /* extern */
M2C_UNK func_800AD5CC_ovl_01(u16, void *);          /* extern */
M2C_UNK func_800ADAE8_ovl_01(s32, void *, u16);     /* extern */
M2C_UNK func_800ADCC8_ovl_01(u16, M2C_UNK);         /* extern */
extern u8 D_801362B0_ovl_01;
extern s16 D_80147F70;
extern M2C_UNK D_80147F80;

s32 func_800A8640_ovl_01(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, void *arg4) {
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 *var_s1;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v0_4;
    u16 *var_s0;
    u16 *var_s0_2;
    u16 *var_s0_3;
    u16 *var_s0_4;
    u16 *var_s0_5;
    u16 temp_a0;
    u16 var_v1;
    u16 var_v1_2;
    u16 var_v1_3;
    u16 var_v1_4;
    void *temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    if (D_801362B0_ovl_01 != 0) {
        var_s1 = arg0;
        if ((D_80147F70 < 0x80) && (*var_s1 != -1)) {
loop_4:
            if (M2C_FIELD(var_s1, u16 *, 4) == (arg1 & 0xFFFF)) {
                *((D_80147F70 * 4) + &D_80147F80) = var_s1;
                temp_v0 = M2C_FIELD(var_s1, s32 *, 8) + var_s1;
                var_s0 = temp_v0 + 8;
                var_v1 = M2C_FIELD(temp_v0, u16 *, 8);
                if (var_v1 != 0xFFFF) {
                    do {
                        var_a1 = arg4 + M2C_FIELD(arg4, s32 *, 0);
                        if (*var_a1 != -1) {
loop_9:
                            var_v0 = var_a1;
                            if (M2C_FIELD(var_a1, u16 *, 4) != (var_v1 & 0xFFFF)) {
                                var_a1 += M2C_FIELD(var_a1, s32 *, 0);
                                if (*var_a1 == -1) {
                                    goto block_11;
                                }
                                goto loop_9;
                            }
                        } else {
block_11:
                            var_v0 = NULL;
                        }
                        if (var_v0 != NULL) {
                            func_800AD5CC_ovl_01(*var_s0, var_v0 + 8);
                        }
                        var_s0 += 2;
                        var_v1 = *var_s0;
                    } while (var_v1 != 0xFFFF);
                }
                temp_v0_2 = M2C_FIELD(var_s1, s32 *, 0xC) + var_s1;
                var_s0_2 = temp_v0_2 + 8;
                if ((func_800AD2D0_ovl_01(arg3, func_800A5C38_ovl_01(arg2)) & 0xFF) && (M2C_FIELD(temp_v0_2, u16 *, 8) != 0xFFFF)) {
                    do {
                        temp_a0 = *var_s0_2;
                        var_s0_2 += 2;
                        func_800ADCC8_ovl_01(temp_a0, arg3);
                    } while (*var_s0_2 != 0xFFFF);
                }
                temp_v0_3 = M2C_FIELD(var_s1, s32 *, 0x10) + var_s1;
                var_s0_3 = temp_v0_3 + 8;
                var_v1_2 = M2C_FIELD(temp_v0_3, u16 *, 8);
                if (var_v1_2 != 0xFFFF) {
                    do {
                        var_a1_2 = arg4 + M2C_FIELD(arg4, s32 *, 4);
                        if (*var_a1_2 != -1) {
loop_23:
                            var_v0_2 = var_a1_2;
                            if (M2C_FIELD(var_a1_2, u16 *, 4) != (var_v1_2 & 0xFFFF)) {
                                var_a1_2 += M2C_FIELD(var_a1_2, s32 *, 0);
                                if (*var_a1_2 == -1) {
                                    goto block_25;
                                }
                                goto loop_23;
                            }
                        } else {
block_25:
                            var_v0_2 = NULL;
                        }
                        if (var_v0_2 != NULL) {
                            func_800AD060_ovl_01(*var_s0_3, var_v0_2 + 8);
                        }
                        var_s0_3 += 2;
                        var_v1_2 = *var_s0_3;
                    } while (var_v1_2 != 0xFFFF);
                }
                temp_v0_4 = M2C_FIELD(var_s1, s32 *, 0x14) + var_s1;
                var_s0_4 = temp_v0_4 + 8;
                var_v1_3 = M2C_FIELD(temp_v0_4, u16 *, 8);
                if (var_v1_3 != 0xFFFF) {
                    do {
                        var_a1_3 = arg4 + M2C_FIELD(arg4, s32 *, 8);
                        if (*var_a1_3 != -1) {
loop_32:
                            var_v0_3 = var_a1_3;
                            if (M2C_FIELD(var_a1_3, u16 *, 4) != (var_v1_3 & 0xFFFF)) {
                                var_a1_3 += M2C_FIELD(var_a1_3, s32 *, 0);
                                if (*var_a1_3 == -1) {
                                    goto block_34;
                                }
                                goto loop_32;
                            }
                        } else {
block_34:
                            var_v0_3 = NULL;
                        }
                        if (var_v0_3 != NULL) {
                            func_800ACB60_ovl_01(*var_s0_4, var_v0_3 + 8);
                        }
                        var_s0_4 += 2;
                        var_v1_3 = *var_s0_4;
                    } while (var_v1_3 != 0xFFFF);
                }
                temp_v0_5 = M2C_FIELD(var_s1, s32 *, 0x18) + var_s1;
                var_s0_5 = temp_v0_5 + 8;
                var_v1_4 = M2C_FIELD(temp_v0_5, u16 *, 8);
                if (var_v1_4 != 0xFFFF) {
                    do {
                        var_a1_4 = arg4 + M2C_FIELD(arg4, s32 *, 0xC);
                        if (*var_a1_4 != -1) {
loop_41:
                            var_v0_4 = var_a1_4;
                            if (M2C_FIELD(var_a1_4, u16 *, 4) != (var_v1_4 & 0xFFFF)) {
                                var_a1_4 += M2C_FIELD(var_a1_4, s32 *, 0);
                                if (*var_a1_4 == -1) {
                                    goto block_43;
                                }
                                goto loop_41;
                            }
                        } else {
block_43:
                            var_v0_4 = NULL;
                        }
                        if (var_v0_4 != NULL) {
                            func_800ACDBC_ovl_01(*var_s0_5, var_v0_4 + 0xC, M2C_FIELD(var_v0_4, u16 *, 0xA));
                        }
                        var_s0_5 += 2;
                        var_v1_4 = *var_s0_5;
                    } while (var_v1_4 != 0xFFFF);
                }
                if (M2C_FIELD(var_s1, u16 *, 6) == 1) {
                    temp_a1 = M2C_FIELD(var_s1, s32 *, 0x1C) + var_s1;
                    func_800ADAE8_ovl_01(arg1 & 0xFFFF, temp_a1 + 8 + 4, M2C_FIELD(temp_a1, u16 *, 8));
                }
                D_80147F70 = (u16) D_80147F70 + 1;
                return 1;
            }
            var_s1 += M2C_FIELD(var_s1, s32 *, 0);
            if (*var_s1 == -1) {
                goto block_51;
            }
            goto loop_4;
        }
    }
block_51:
    return 0;
}
