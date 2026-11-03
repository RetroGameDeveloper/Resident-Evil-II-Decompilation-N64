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

extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_80139DE4;
extern M2C_UNK func_80112698_ovl_01;

s32 func_8006AB70_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s16 temp_a2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_lo_6;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t3_3;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t6;
    s32 temp_t6_2;
    s32 temp_t6_3;
    s32 temp_t7;
    s32 temp_t8_2;
    s32 temp_t8_3;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 var_t5;
    s32 var_v0;
    s32 var_v1;
    u16 temp_t5;
    u16 temp_t7_2;
    u16 temp_t7_3;
    u16 temp_t8;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_fp;
    void *var_t2;

    var_t2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), void **, 0x20);
    temp_fp = var_t2 + (M2C_FIELD(var_t2, s32 *, 4) * 0x10);
loop_1:
    var_t2 += 0x10;
loop_2:
    var_v0 = 0;
    if (var_t2 != temp_fp) {
        temp_v1 = M2C_FIELD(var_t2, u16 *, 8);
        if ((temp_v1 & arg2) && (*((temp_v1 & 0xF) + &func_80112698_ovl_01) == 0)) {
            D_80139DE4 = 3;
            if (((u32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(var_t2, s16 *, 0)) < (u16) M2C_FIELD(var_t2, u16 *, 4)) && ((u32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(var_t2, s16 *, 2)) < (u16) M2C_FIELD(var_t2, u16 *, 6))) {
                D_80139DE4 = 2;
                goto block_13;
            }
            if (((u32) (M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(var_t2, s16 *, 0)) < (u16) M2C_FIELD(var_t2, u16 *, 4)) && ((u32) (M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(var_t2, s16 *, 2)) < (u16) M2C_FIELD(var_t2, u16 *, 6))) {
                D_80139DE4 ^= 1;
                goto block_13;
            }
            temp_a2 = M2C_FIELD(var_t2, s16 *, 2);
            temp_t3 = M2C_FIELD(arg0, s32 *, 8);
            temp_t8 = M2C_FIELD(var_t2, u16 *, 4);
            temp_t0 = M2C_FIELD(var_t2, s16 *, 0);
            temp_t1 = M2C_FIELD(arg0, s32 *, 0);
            temp_t5 = M2C_FIELD(var_t2, u16 *, 6);
            temp_lo = temp_t5 * (temp_t1 - temp_t0);
            sp0 = temp_lo;
            temp_a1 = M2C_FIELD(arg1, s32 *, 8);
            temp_t9 = M2C_FIELD(arg1, s32 *, 0);
            temp_t7 = temp_t1 - temp_t9;
            temp_t6 = temp_t3 - temp_a1;
            temp_t4 = temp_a2 + temp_t5;
            temp_s2 = temp_t0 + temp_t8;
            temp_lo_2 = temp_t6 * (temp_s2 - temp_t1);
            sp4 = temp_lo_2;
            if ((((((temp_t8 * (temp_t3 - temp_a2)) - temp_lo) ^ ((temp_t8 * (temp_a1 - temp_a2)) - (temp_t5 * (temp_t9 - temp_t0)))) & (((temp_t7 * (temp_a2 - temp_t3)) - (temp_t6 * (temp_t0 - temp_t1))) ^ ((temp_t7 * (temp_t4 - temp_t3)) - temp_lo_2))) < 0) || (((((temp_t8 * (temp_t4 - temp_t3)) - (temp_t5 * (temp_t1 - temp_t0))) ^ ((temp_t8 * (temp_t4 - temp_a1)) - (temp_t5 * (temp_t9 - temp_t0)))) & (((temp_t7 * (temp_t4 - temp_t3)) - (temp_t6 * (temp_t0 - temp_t1))) ^ ((temp_t7 * (temp_a2 - temp_t3)) - (temp_t6 * (temp_s2 - temp_t1))))) < 0)) {
block_13:
                var_v0 = 1;
                if (arg3 != 0) {
                    var_v1 = M2C_FIELD(var_t2, s32 *, 0xC);
                    var_t5 = 0;
                    if (!(var_v1 & 1)) {
                        do {
                            var_v1 = var_v1 >> 1;
                            var_t5 -= 0x708;
                        } while (!(var_v1 & 1));
                    }
                    temp_v1_2 = M2C_FIELD(var_t2, u16 *, 0xA);
                    temp_t4_2 = -((temp_v1_2 >> 0xB) * 0x64) - (((temp_v1_2 >> 6) & 0x1F) * 0x708);
                    if ((((u32) (M2C_FIELD(arg0, s32 *, 4) - temp_t4_2) < (u32) (var_t5 - temp_t4_2)) && ((u32) (M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(var_t2, s16 *, 2)) < (u16) M2C_FIELD(var_t2, u16 *, 6))) || (((u32) (M2C_FIELD(arg1, s32 *, 4) - temp_t4_2) < (u32) (var_t5 - temp_t4_2)) && ((u32) (M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(var_t2, s16 *, 2)) < (u16) M2C_FIELD(var_t2, u16 *, 6)))) {
                        D_80139DE4 ^= 2;
                        goto block_23;
                    }
                    temp_t3_2 = M2C_FIELD(arg0, s32 *, 4);
                    temp_t7_2 = M2C_FIELD(var_t2, u16 *, 6);
                    temp_t0_2 = M2C_FIELD(var_t2, s16 *, 2);
                    temp_t1_2 = M2C_FIELD(arg0, s32 *, 8);
                    temp_t9_2 = var_t5 - temp_t4_2;
                    temp_lo_3 = temp_t9_2 * (temp_t1_2 - temp_t0_2);
                    sp0 = temp_lo_3;
                    temp_a2_2 = M2C_FIELD(arg1, s32 *, 4);
                    temp_a1_2 = M2C_FIELD(arg1, s32 *, 8);
                    temp_t8_2 = temp_t1_2 - temp_a1_2;
                    temp_t6_2 = temp_t3_2 - temp_a2_2;
                    temp_s3 = temp_t0_2 + temp_t7_2;
                    temp_lo_4 = temp_t6_2 * (temp_s3 - temp_t1_2);
                    sp4 = temp_lo_4;
                    if ((((((temp_t7_2 * (temp_t3_2 - temp_t4_2)) - temp_lo_3) ^ ((temp_t7_2 * (temp_a2_2 - temp_t4_2)) - (temp_t9_2 * (temp_a1_2 - temp_t0_2)))) & (((temp_t8_2 * (temp_t4_2 - temp_t3_2)) - (temp_t6_2 * (temp_t0_2 - temp_t1_2))) ^ ((temp_t8_2 * (var_t5 - temp_t3_2)) - temp_lo_4))) < 0) || (((((temp_t7_2 * (var_t5 - temp_t3_2)) - (temp_t9_2 * (temp_t1_2 - temp_t0_2))) ^ ((temp_t7_2 * (var_t5 - temp_a2_2)) - (temp_t9_2 * (temp_a1_2 - temp_t0_2)))) & (((temp_t8_2 * (var_t5 - temp_t3_2)) - (temp_t6_2 * (temp_t0_2 - temp_t1_2))) ^ ((temp_t8_2 * (temp_t4_2 - temp_t3_2)) - (temp_t6_2 * (temp_s3 - temp_t1_2))))) < 0)) {
block_23:
                        if ((((u32) (M2C_FIELD(arg0, s32 *, 4) - temp_t4_2) < (u32) (var_t5 - temp_t4_2)) && ((u32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(var_t2, s16 *, 0)) < (u16) M2C_FIELD(var_t2, u16 *, 4))) || (((u32) (M2C_FIELD(arg1, s32 *, 4) - temp_t4_2) < (u32) (var_t5 - temp_t4_2)) && ((u32) (M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(var_t2, s16 *, 0)) < (u16) M2C_FIELD(var_t2, u16 *, 4)))) {
                            if (D_80139DE4 != 0) {
                                return 1;
                            }
                            goto loop_1;
                        }
                        temp_t3_3 = M2C_FIELD(arg0, s32 *, 4);
                        temp_t7_3 = M2C_FIELD(var_t2, u16 *, 4);
                        temp_t0_3 = M2C_FIELD(var_t2, s16 *, 0);
                        temp_t1_3 = M2C_FIELD(arg0, s32 *, 0);
                        temp_t9_3 = var_t5 - temp_t4_2;
                        temp_lo_5 = temp_t9_3 * (temp_t1_3 - temp_t0_3);
                        sp0 = temp_lo_5;
                        temp_a2_3 = M2C_FIELD(arg1, s32 *, 4);
                        temp_a1_3 = M2C_FIELD(arg1, s32 *, 0);
                        temp_t8_3 = temp_t1_3 - temp_a1_3;
                        temp_t6_3 = temp_t3_3 - temp_a2_3;
                        temp_s3_2 = temp_t0_3 + temp_t7_3;
                        temp_lo_6 = temp_t6_3 * (temp_s3_2 - temp_t1_3);
                        sp4 = temp_lo_6;
                        if ((((((temp_t7_3 * (temp_t3_3 - temp_t4_2)) - temp_lo_5) ^ ((temp_t7_3 * (temp_a2_3 - temp_t4_2)) - (temp_t9_3 * (temp_a1_3 - temp_t0_3)))) & (((temp_t8_3 * (temp_t4_2 - temp_t3_3)) - (temp_t6_3 * (temp_t0_3 - temp_t1_3))) ^ ((temp_t8_3 * (var_t5 - temp_t3_3)) - temp_lo_6))) < 0) || (var_t2 += 0x10, (((((temp_t7_3 * (var_t5 - temp_t3_3)) - (temp_t9_3 * (temp_t1_3 - temp_t0_3))) ^ ((temp_t7_3 * (var_t5 - temp_a2_3)) - (temp_t9_3 * (temp_a1_3 - temp_t0_3)))) & (((temp_t8_3 * (var_t5 - temp_t3_3)) - (temp_t6_3 * (temp_t0_3 - temp_t1_3))) ^ ((temp_t8_3 * (temp_t4_2 - temp_t3_3)) - (temp_t6_3 * (temp_s3_2 - temp_t1_3))))) < 0))) {
                            var_v0 = 1;
                            /* Duplicate return node #32. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        goto loop_2;
                    }
                    goto loop_1;
                }
                /* Duplicate return node #32. Try simplifying control flow for better match */
                return var_v0;
            }
            goto loop_1;
        }
        goto loop_1;
    }
    return var_v0;
}
