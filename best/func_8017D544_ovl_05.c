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

M2C_UNK func_80043650_ovl_01(s32);                  /* extern */
s32 func_8004500C_ovl_01(s32, void *, M2C_UNK, s32); /* extern */
s32 func_80084514_ovl_01(s32);                      /* extern */
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8017DDA0_ovl_05;
extern M2C_UNK D_8017DDAC_ovl_05;
extern M2C_UNK D_8017DECC_ovl_05;
extern M2C_UNK D_8017E0C4_ovl_05;
extern u8 D_8017E184_ovl_05;
extern M2C_UNK D_8017E4DC_ovl_05;
extern u8 D_8017E53F_ovl_05;
extern M2C_UNK D_8017E544_ovl_05;
extern u8 D_8017E54A_ovl_05;
extern u8 D_8017E54C_ovl_05;
extern s32 D_8017E550_ovl_05;
extern void *D_8017E558_ovl_05;

void func_8017D544_ovl_05(void) {
    s32 sp10;
    s32 sp18;
    void **sp1C;
    u8 *sp20;
    s32 sp24;
    M2C_UNK *sp28;
    M2C_UNK *var_t3;
    s16 temp_s0_2;
    s16 temp_s1_2;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t2;
    s32 var_v1;
    s8 temp_s2;
    s8 temp_s3;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 var_a3;
    u16 var_s7;
    u8 *temp_v0;
    u8 *var_fp;
    u8 *var_s6;
    u8 *var_t1;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_v0_4;
    u8 temp_v1;
    u8 temp_v1_2;
    void **var_t0;
    void *temp_s4;
    void *temp_s5;

    if (D_8017E54A_ovl_05 & 0x20) {
        var_a0 = 0x20202;
    } else {
        var_a0 = 0xFFFDFDFE;
    }
    D_8017E550_ovl_05 += var_a0;
    var_fp = &D_8017E184_ovl_05 + 6;
    sp20 = &D_8017E184_ovl_05;
    sp24 = M2C_ERROR(/* Read from unset register $t2 */);
    D_8017E54A_ovl_05 += 1;
    func_80043650_ovl_01(var_a0);
    var_t3 = &D_800DF650_ovl_01;
    var_t2 = M2C_ERROR(/* Read from unset register $t2 */);
    var_t1 = &D_8017E184_ovl_05;
    do {
        var_t1 -= 8;
        var_fp -= 8;
        if (*var_t1 & 1) {
            temp_v1 = M2C_FIELD(var_fp, u8 *, -5);
            var_a0_2 = 0;
            if (temp_v1 == D_8017E54C_ovl_05) {
                temp_v0 = ((*((D_8017E54C_ovl_05 * 2) + &D_8017DDA0_ovl_05) + *(D_8017E54C_ovl_05 + &D_8017E544_ovl_05)) * 8) + &D_8017DECC_ovl_05;
                *temp_v0 |= 0x22;
                temp_v1_2 = *var_t1;
                var_t2 = 0x2C808080;
                if (temp_v1_2 & 4) {
                    var_t2 = 0x2EA07070;
                }
                if (temp_v1_2 & 0x20) {
                    var_t2 = D_8017E550_ovl_05;
                }
                if (temp_v1_2 & 0x40) {
                    var_t2 = 0x2EFF5858;
                }
                var_a0_2 = ((D_8017E53F_ovl_05 & 2) == 0) << 0xF;
            } else {
                if (temp_v1 >= 5U) {
                    var_t2 = 0x2C606060;
                    var_a0_2 = 0x200;
                    if (M2C_FIELD(var_t3, u8 *, 0x538) != 0) {
                        if (temp_v1 == 6) {
                            temp_v0_2 = M2C_FIELD(var_fp, u16 *, -2) + 1;
                            M2C_FIELD(var_fp, u16 *, -2) = temp_v0_2;
                            if ((s16) temp_v0_2 >= 0x169) {
                                M2C_FIELD(var_fp, u16 *, -2) = -0x77U;
                            }
                        }
                        if (M2C_FIELD(var_fp, u8 *, -5) == 7) {
                            temp_v0_3 = M2C_FIELD(var_fp, u16 *, -2) - 1;
                            M2C_FIELD(var_fp, u16 *, -2) = temp_v0_3;
                            if ((s16) temp_v0_3 < -0x78) {
                                M2C_FIELD(var_fp, u16 *, -2) = 0x167U;
                            }
                        }
                    }
                }
                if (D_8017E53F_ovl_05 & 1) {
                    var_a0_2 = 0;
                }
            }
            if (var_a0_2 & 0xFFFF) {
                var_s6 = &D_8017E184_ovl_05;
                temp_v0_4 = M2C_FIELD(var_fp, u8 *, -3);
                var_v1 = 0;
                if (temp_v0_4 != 0) {
                    do {
                        if (*var_s6 == 0xFF) {
                            var_v1 += 1;
                        }
                        var_s6 += 1;
                    } while (temp_v0_4 != var_v1);
                }
                var_s7 = M2C_FIELD(var_fp, u16 *, -2);
                var_a3 = M2C_FIELD(var_fp, u16 *, 0);
                if (*var_s6 != 0xFF) {
                    var_t0 = &D_8017E558_ovl_05;
                    sp10 = (u32) var_t1 < (u32) &D_8017E0C4_ovl_05;
                    do {
                        temp_s4 = M2C_FIELD(var_t0, void **, 0);
                        temp_s5 = (*var_s6 * 4) + &D_8017DDAC_ovl_05;
                        temp_s1 = M2C_FIELD(temp_s5, u8 *, 2);
                        temp_s0 = M2C_FIELD(temp_s5, u8 *, 3);
                        sp18 = (s32) var_a3;
                        sp1C = var_t0;
                        sp20 = var_t1;
                        sp24 = var_t2;
                        sp28 = var_t3;
                        temp_s3 = M2C_FIELD(temp_s5, u8 *, 0) + temp_s1;
                        temp_s2 = M2C_FIELD(temp_s5, u8 *, 1) + temp_s0;
                        temp_s1_2 = temp_s1 + var_s7;
                        temp_s0_2 = temp_s0 + var_a3;
                        M2C_FIELD(temp_s4, s32 *, 0) = func_80084514_ovl_01(var_t2);
                        M2C_FIELD(temp_s4, u16 *, 4) = var_s7;
                        M2C_FIELD(temp_s4, u16 *, 6) = var_a3;
                        M2C_FIELD(temp_s4, u8 *, 8) = (u8) M2C_FIELD(temp_s5, u8 *, 0);
                        M2C_FIELD(temp_s4, s16 *, 0xA) = 0;
                        M2C_FIELD(temp_s4, s16 *, 0xC) = temp_s1_2;
                        M2C_FIELD(temp_s4, u16 *, 0xE) = var_a3;
                        M2C_FIELD(temp_s4, s8 *, 0x10) = temp_s3;
                        M2C_FIELD(temp_s4, u8 *, 9) = (u8) M2C_FIELD(temp_s5, u8 *, 1);
                        M2C_FIELD(temp_s4, s16 *, 0x12) = 0x9E;
                        M2C_FIELD(temp_s4, u16 *, 0x14) = var_s7;
                        M2C_FIELD(temp_s4, s16 *, 0x16) = temp_s0_2;
                        M2C_FIELD(temp_s4, u8 *, 0x11) = (u8) M2C_FIELD(temp_s5, u8 *, 1);
                        M2C_FIELD(temp_s4, s8 *, 0x19) = temp_s2;
                        M2C_FIELD(temp_s4, s16 *, 0x1C) = temp_s1_2;
                        M2C_FIELD(temp_s4, s16 *, 0x1E) = temp_s0_2;
                        M2C_FIELD(temp_s4, s8 *, 0x20) = temp_s3;
                        M2C_FIELD(temp_s4, s8 *, 0x21) = temp_s2;
                        M2C_FIELD(temp_s4, s8 *, 3) = 0;
                        M2C_FIELD(temp_s4, s16 *, 0x1A) = 0;
                        M2C_FIELD(temp_s4, u8 *, 0x18) = (u8) M2C_FIELD(temp_s5, u8 *, 0);
                        M2C_FIELD(temp_s4, M2C_UNK **, 0x24) = &D_8017E4DC_ovl_05;
                        var_s6 += 1;
                        sp18 = (s32) var_a3;
                        sp1C = var_t0;
                        sp20 = var_t1;
                        sp24 = var_t2;
                        sp28 = var_t3;
                        temp_v0_5 = func_8004500C_ovl_01(M2C_FIELD(var_t3, s32 *, 0x200), temp_s4, 0, (s32) var_a3);
                        M2C_FIELD(var_t3, s32 *, 0x200) = temp_v0_5;
                        M2C_FIELD(var_t0, s32 *, -0x1AA8) = (s32) (M2C_FIELD(var_t0, s32 *, -0x1AA8) + 0x28);
                        var_s7 += M2C_FIELD(temp_s5, u8 *, 2);
                    } while (*var_s6 != 0xFF);
                }
            }
        }
    } while (var_t1 != &D_8017DECC_ovl_05);
}
