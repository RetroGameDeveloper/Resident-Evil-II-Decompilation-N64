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

extern u8 D_801443E0;
extern M2C_UNK D_801443E8;
extern u8 D_801479F8;
extern u8 D_801479F9;
extern u8 D_80147F48;
extern M2C_UNK D_801583D8;
extern u8 D_801587D8;
extern u8 D_801587D9;
extern u16 D_801587DA;
extern u8 D_801587DC;
extern M2C_UNK D_801587E0;
extern M2C_UNK D_80158860;
extern M2C_UNK D_801588E0;
extern u8 D_801589E0;

u8 func_800AE654_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_t3;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;
    u16 var_t2;
    u16 var_t2_2;
    u32 temp_a1;
    u32 temp_v1_4;
    u32 var_v0_2;
    u32 var_v1_2;
    u8 temp_t0;
    u8 temp_t0_2;
    u8 var_t0;
    u8 var_t0_2;
    u8 var_t0_3;
    u8 var_t1;
    u8 var_v0;
    u8 var_v1;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_v1;
    void *temp_v1_3;

    if (D_80147F48 == 0) {
        if (arg3 & 0xFF) {
            var_v0 = D_801587DC;
            var_v1 = D_801443E0;
            var_a3 = 0;
        } else {
            var_v0 = D_801587D8;
            var_v1 = D_801479F9;
            var_a3 = 0;
        }
        var_v0_2 = arg1 & 0xFF;
        if (var_v0 >= var_v1) {
            var_a3 = var_v1 < (u8) D_801479F8;
            var_v0_2 = arg1 & 0xFF;
        }
        var_t3 = 0;
        if (var_v0_2 < var_v1) {
            var_t2 = D_801587DA;
            var_v1_2 = var_t2 & 0xFFFF;
            var_t1 = -1U;
            if ((var_v1_2 != 0xFFFF) && ((u32) (arg0 & 0xFF) >= var_v1_2)) {
loop_10:
                if (var_t1 == -1U) {
                    var_t0 = *(var_v1_2 + &D_801588E0);
                    if (var_t0 != 0xFF) {
                        var_v0_3 = var_t0 * 2;
                        do {
                            temp_v1 = ((((var_v0_3 + var_t0) * 4) + var_t0) << 5) + &D_801443E8;
                            var_v0_4 = var_t0 * 4;
                            if (M2C_FIELD(temp_v1, u8 *, 0xBD) == 0) {
                                var_v0_4 = var_t0 * 4;
                                if ((M2C_FIELD(temp_v1, u16 *, 0xBA) == (arg2 & 0xFFFF)) && ((var_t3 += 1, ((var_a3 & 0xFF) == 0)) || (var_v0_4 = var_t0 * 4, (M2C_FIELD(temp_v1, u8 *, 0x4C) == (arg3 & 0xFF))))) {
                                    var_v0_4 = var_t0 * 4;
                                    if (!(M2C_FIELD(temp_v1, s32 *, 0x24) & 2) && ((var_t1 == -1U) || (var_v0_4 = var_t0 * 4, (((u32) M2C_FIELD(temp_v1, u32 *, 0x28) < (u32) M2C_FIELD(((var_t1 * 0x1A0) + &D_801443E8), u32 *, 0x28)) != 0)))) {
                                        var_t1 = var_t0;
                                        var_v0_4 = var_t0 * 4;
                                    }
                                }
                            }
                            var_t0 = M2C_FIELD((var_v0_4 + &D_801587E0), u8 *, 1);
                            var_v0_3 = var_t0 * 2;
                        } while (var_t0 != 0xFF);
                    }
                    var_t2 = *((var_t2 * 4) + &D_801583D8);
                    var_v1_2 = var_t2 & 0xFFFF;
                    if ((var_v1_2 != 0xFFFF) && ((u32) (arg0 & 0xFF) >= var_v1_2)) {
                        goto loop_10;
                    }
                }
            }
            temp_v1_2 = arg1 & 0xFF;
            if (var_t3 < temp_v1_2) {
                if (var_t2 != 0xFFFF) {
                    var_v0_5 = var_t3 < temp_v1_2;
loop_27:
                    if (var_v0_5 != 0) {
                        var_t0_2 = *(var_t2 + &D_801588E0);
                        if (var_t0_2 != 0xFF) {
                            var_v0_6 = var_t0_2 * 2;
                            do {
                                temp_v1_3 = ((((var_v0_6 + var_t0_2) * 4) + var_t0_2) << 5) + &D_801443E8;
                                var_v0_7 = var_t0_2 * 4;
                                if (M2C_FIELD(temp_v1_3, u8 *, 0xBD) == 0) {
                                    if (M2C_FIELD(temp_v1_3, u16 *, 0xBA) == (arg2 & 0xFFFF)) {
                                        var_t3 += 1;
                                    }
                                    var_v0_7 = var_t0_2 * 4;
                                }
                                var_t0_2 = M2C_FIELD((var_v0_7 + &D_801587E0), u8 *, 1);
                                var_v0_6 = var_t0_2 * 2;
                            } while (var_t0_2 != 0xFF);
                        }
                        var_t2 = *((var_t2 * 4) + &D_801583D8);
                        var_v0_5 = var_t3 < temp_v1_2;
                        if (var_t2 == 0xFFFF) {
                            goto block_37;
                        }
                        goto loop_27;
                    }
                    goto block_61;
                }
block_37:
                if (var_t3 < (arg1 & 0xFF)) {
                    goto block_38;
                }
                goto block_62;
            }
            goto block_61;
        }
block_38:
        var_t1 = -1U;
        if (D_801589E0 != 0xFF) {
            if (!(var_a3 & 0xFF)) {
                var_t1 = D_801589E0;
                goto block_60;
            }
            goto block_42;
        }
block_42:
        temp_a1 = D_801587DA & 0xFFFF;
        if ((u32) (arg0 & 0xFF) >= temp_a1) {
            var_t2_2 = D_801587DA;
            if (temp_a1 != 0xFFFF) {
loop_45:
                if (var_t1 == -1U) {
                    var_t0_3 = *(var_t2_2 + &D_801588E0);
                    if (var_t0_3 != 0xFF) {
                        var_v0_8 = var_t0_3 * 2;
                        do {
                            temp_a1_2 = ((((var_v0_8 + var_t0_3) * 4) + var_t0_3) << 5) + &D_801443E8;
                            var_v0_9 = var_t0_3 * 4;
                            if ((M2C_FIELD(temp_a1_2, u8 *, 0xBD) == 0) && (!(var_a3 & 0xFF) || (var_v0_9 = var_t0_3 * 4, (M2C_FIELD(temp_a1_2, u8 *, 0x4C) == (arg3 & 0xFF))))) {
                                var_v0_9 = var_t0_3 * 4;
                                if (!(M2C_FIELD(temp_a1_2, s32 *, 0x24) & 2) && ((var_t1 == -1U) || (var_v0_9 = var_t0_3 * 4, (((u32) M2C_FIELD(temp_a1_2, u32 *, 0x28) < (u32) M2C_FIELD(((var_t1 * 0x1A0) + &D_801443E8), u32 *, 0x28)) != 0)))) {
                                    var_t1 = var_t0_3;
                                    var_v0_9 = var_t0_3 * 4;
                                }
                            }
                            var_t0_3 = M2C_FIELD((var_v0_9 + &D_801587E0), u8 *, 1);
                            var_v0_8 = var_t0_3 * 2;
                        } while (var_t0_3 != 0xFF);
                    }
                    var_t2_2 = *((var_t2_2 * 4) + &D_801583D8);
                    temp_v1_4 = var_t2_2 & 0xFFFF;
                    if ((temp_v1_4 == 0xFFFF) || ((u32) (arg0 & 0xFF) < temp_v1_4)) {
                        goto block_59;
                    }
                    goto loop_45;
                }
                goto block_60;
            }
block_59:
            if (var_t1 != -1U) {
block_60:
                if ((u32) (arg0 & 0xFF) >= (u8) M2C_FIELD(((var_t1 * 0x1A0) + &D_801443E8), u8 *, 0x2E)) {
block_61:
block_62:
                    if (var_t1 != -1U) {
                        temp_a0 = (var_t1 * 4) + &D_80158860;
                        if (M2C_FIELD(temp_a0, u16 *, 2) == 1) {
                            temp_t0 = M2C_FIELD(temp_a0, u8 *, 0);
                            if (temp_t0 != 0xFF) {
                                M2C_FIELD(((temp_t0 * 4) + &D_80158860), u8 *, 1) = (u8) M2C_FIELD(temp_a0, u8 *, 1);
                            } else {
                                D_801589E0 = M2C_FIELD(temp_a0, u8 *, 1);
                            }
                            temp_t0_2 = M2C_FIELD(temp_a0, u8 *, 1);
                            if (temp_t0_2 != 0xFF) {
                                *((temp_t0_2 * 4) + &D_80158860) = M2C_FIELD(temp_a0, u8 *, 0);
                            }
                            if (var_t1 != D_801587D9) {
                                M2C_FIELD(temp_a0, u16 *, 2) = 0U;
                            } else {
                                D_801587D9 = M2C_FIELD(temp_a0, u8 *, 0);
                                M2C_FIELD(temp_a0, u16 *, 2) = 0U;
                            }
                        } else if (M2C_FIELD(((var_t1 * 0x1A0) + &D_801443E8), u8 *, 0x4C) != 0) {
                            D_801587DC -= 1;
                        } else {
                            D_801587D8 -= 1;
                        }
                        if (arg3 & 0xFF) {
                            D_801587DC += 1;
                        } else {
                            D_801587D8 += 1;
                        }
                        return var_t1;
                    }
                    goto block_80;
                }
                /* Duplicate return node #81. Try simplifying control flow for better match */
                return -1U;
            }
            /* Duplicate return node #81. Try simplifying control flow for better match */
            return -1U;
        }
        /* Duplicate return node #81. Try simplifying control flow for better match */
        return -1U;
    }
block_80:
    return -1U;
}
