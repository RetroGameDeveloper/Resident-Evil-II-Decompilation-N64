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

extern f32 D_800B8828_ovl_01;
extern f32 D_800B882C_ovl_01;
extern f32 D_800B8830_ovl_01;
extern f32 D_800B8834_ovl_01;
extern f32 D_800B8838_ovl_01;
extern f64 D_800B8840_ovl_01;
extern f64 D_800B8848_ovl_01;
extern f64 D_800B8850_ovl_01;
extern u16 D_800EFD30_ovl_01;
extern s32 D_800EFD34_ovl_01;
extern s32 D_800EFD38_ovl_01;
extern s32 D_800EFD3C_ovl_01;
extern s32 D_800EFD40_ovl_01;
extern s32 D_800EFD44_ovl_01;
extern M2C_UNK D_800EFD90_ovl_01;
extern M2C_UNK D_800EFE08_ovl_01;
extern f32 D_80112798_ovl_01;
extern f32 D_8011279C_ovl_01;

void *func_800439B8_ovl_01(void *arg0, void *arg1, u16 arg2, u16 arg3) {
    u16 sp6;
    u16 spE;
    u16 sp16;
    u32 sp18;
    u32 sp1C;
    s32 sp20;
    u32 sp24;
    s32 sp28;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 var_ft2;
    f32 var_ft3;
    f64 temp_fv0_5;
    f64 temp_fv0_6;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_t0;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_9;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a1;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_a0;
    u16 var_s1;
    u16 var_s2;
    u32 temp_a0_2;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_t4;
    u32 temp_t7;
    u32 temp_v1_8;
    u32 var_s3;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 var_s4;
    u8 var_t4;
    void *temp_a0;
    void *temp_a1_5;
    void *temp_a2_10;
    void *temp_a2_11;
    void *temp_a2_12;
    void *temp_a2_13;
    void *temp_a2_14;
    void *temp_a2_15;
    void *temp_a2_16;
    void *temp_a2_17;
    void *temp_a2_18;
    void *temp_a2_19;
    void *temp_a2_20;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_a2_5;
    void *temp_a2_6;
    void *temp_a2_7;
    void *temp_a2_8;
    void *temp_a2_9;
    void *temp_t2;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t2_4;
    void *temp_t2_5;
    void *temp_t2_6;
    void *temp_t3;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v1_7;
    void *var_a2;
    void *var_a2_2;
    void *var_t2;
    void *var_t2_2;
    void *var_t2_3;
    void *var_v1;
    void *var_v1_2;

    var_t2 = arg0;
    var_s0 = 0;
    var_a0 = arg2;
    D_800EFD30_ovl_01 = 0;
    var_s4 = M2C_FIELD(arg1, u8 *, 9);
    if (!(var_a0 & 0xFFFF)) {
        var_a0 = M2C_FIELD(arg1, u16 *, 0x10);
    }
    var_s1 = arg3;
    if (!(var_s1 & 0xFFFF)) {
        var_s1 = M2C_FIELD(arg1, u16 *, 0x12);
    }
    if (var_a0 & 0xFFFF) {
        temp_a2 = arg2 & 0xFFFF;
        if (var_s1 & 0xFFFF) {
            spE = M2C_FIELD(arg1, u16 *, 4);
            var_s2 = M2C_FIELD(arg1, u16 *, 6);
            if (temp_a2 != 0) {
                var_ft3 = (f32) temp_a2 / (f32) M2C_FIELD(arg1, u16 *, 0x10);
            } else {
                var_ft3 = D_800B8828_ovl_01;
            }
            temp_v1 = arg3 & 0xFFFF;
            if (temp_v1 != 0) {
                var_ft2 = (f32) temp_v1 / (f32) M2C_FIELD(arg1, u16 *, 0x12);
            } else {
                var_ft2 = D_800B882C_ovl_01;
            }
            temp_t3 = M2C_FIELD(arg1, void **, 0xC);
            if ((s16) spE < 0) {
                var_a0 += spE;
                if (-(s16) spE < (var_a0 & 0xFFFF)) {
                    var_t4 = M2C_FIELD(arg1, u8 *, 8) - spE;
                    spE = 0;
                    goto block_16;
                }
            } else {
                var_t4 = M2C_FIELD(arg1, u8 *, 8);
block_16:
                temp_v1_2 = M2C_FIELD(temp_t3, s32 *, 0);
                if (temp_v1_2 == 1) {
                    temp_v0 = var_t4 & 7 & 0xFF;
                    sp16 = temp_v0;
                    temp_v1_3 = (temp_v0 + var_a0 + 7) & 0xFFF8 & 0xFFFF;
                    var_t4 &= 0xF8;
                    if ((temp_v1_3 * (var_s1 & 0xFFFF)) >= 0x801) {
                        if (D_800B8830_ovl_01 <= ((f32) (0x800 / temp_v1_3) / var_ft2)) {

                        }
                    }
                } else if ((temp_v1_2 == 0) || ((temp_v1_2 & 0xFF) == 0xFF)) {
                    temp_v0_2 = var_t4 & 0xF & 0xFF;
                    sp16 = temp_v0_2;
                    temp_v1_4 = (temp_v0_2 + var_a0 + 0xF) & ~0xF & 0xFFFF;
                    var_t4 &= 0xF0;
                    if ((temp_v1_4 * (var_s1 & 0xFFFF)) >= 0x1001) {
                        if (D_800B8834_ovl_01 <= ((f32) ((0x1000 / temp_v1_4) & ~0xF) / var_ft2)) {

                        }
                    }
                }
                sp6 = spE + M2C_FIELD(arg1, u16 *, 0x10);
                if ((D_800EFD34_ovl_01 == -1) || (D_800EFD44_ovl_01 != 1)) {
                    var_v1 = var_t2;
                    if (D_800EFD30_ovl_01 == 0) {
                        temp_v0_3 = var_t2;
                        var_t2 += 8;
                        M2C_FIELD(temp_v0_3, s32 *, 0) = 0xE7000000;
                        M2C_FIELD(temp_v0_3, s32 *, 4) = 0;
                        D_800EFD30_ovl_01 = 1;
                        var_v1 = var_t2;
                    }
                    temp_t2 = var_t2 + 8;
                    temp_a0 = temp_t2;
                    var_t2 = temp_t2 + 8;
                    M2C_FIELD(var_v1, s32 *, 0) = 0xDE000000;
                    M2C_FIELD(var_v1, M2C_UNK **, 4) = &D_800EFD90_ovl_01;
                    M2C_FIELD(temp_a0, s32 *, 0) = 0xD7000002;
                    M2C_FIELD(temp_a0, s32 *, 4) = 0x80008000;
                    D_800EFD44_ovl_01 = 1;
                } else {
                    var_v1_2 = var_t2;
                    if (D_800EFD30_ovl_01 == 0) {
                        var_t2 += 8;
                        M2C_FIELD(var_v1_2, s32 *, 0) = 0xE7000000;
                        M2C_FIELD(var_v1_2, s32 *, 4) = 0;
                        D_800EFD30_ovl_01 = (u16) D_800EFD44_ovl_01;
                        var_v1_2 = var_t2;
                    }
                    var_t2 += 8;
                    M2C_FIELD(var_v1_2, s32 *, 0) = 0xDE000000;
                    M2C_FIELD(var_v1_2, M2C_UNK **, 4) = &D_800EFE08_ovl_01;
                }
                if ((D_800EFD34_ovl_01 != M2C_FIELD(arg1, s32 *, 0)) || (var_s3 = var_s1 & 0xFFFF, (D_800EFD38_ovl_01 != M2C_FIELD(temp_t3, s32 *, 0)))) {
                    temp_v1_5 = M2C_FIELD(arg1, u8 *, 3);
                    if (temp_v1_5 != 1) {
                        if ((s32) temp_v1_5 < 2) {
                            if (temp_v1_5 != 0) {
                                var_t2_2 = var_t2 + 8;
                                goto block_50;
                            }
                            var_t2_3 = var_t2 + 8;
                            var_v1_3 = 0x5041C8;
                            goto block_47;
                        }
                        if ((temp_v1_5 != 2) && (temp_v1_5 == 3)) {
                            var_t2_3 = var_t2 + 8;
                            var_v1_3 = 0x0F0A4000;
block_47:
                            temp_t2_2 = var_t2_3 + 8;
                            var_t2 = temp_t2_2 + 8;
                            M2C_FIELD(var_t2, s32 *, 0) = 0xE200001C;
                            M2C_FIELD(var_t2, s32 *, 4) = var_v1_3;
                            M2C_FIELD(var_t2_3, s32 *, 0) = 0xFA000000;
                            M2C_FIELD(var_t2_3, s32 *, 4) = (s32) (((((u8) M2C_FIELD(arg1, s32 *, 0) * 2) - 1) << 0x18) | ((((M2C_FIELD(arg1, u8 *, 1) * 2) - 1) & 0xFF) << 0x10) | ((((M2C_FIELD(arg1, u8 *, 2) * 2) - 1) & 0xFF) << 8));
                            M2C_FIELD(var_t2_3, s32 *, 8) = 0xFC11FE23;
                            M2C_FIELD(temp_t2_2, s32 *, 4) = -0xC07;
                        } else {
                            var_t2_2 = var_t2 + 8;
block_50:
                            M2C_FIELD(var_t2, s32 *, 0) = 0xE200001C;
                            M2C_FIELD(var_t2, s32 *, 4) = 0x504240;
                            temp_v1_6 = (u8) M2C_FIELD(arg1, s32 *, 0);
                            M2C_FIELD(var_t2_2, s32 *, 0) = 0xFA000000;
                            temp_a0_2 = temp_v1_6 + (temp_v1_6 >> 1);
                            temp_t2_3 = var_t2_2 + 8;
                            if (temp_a0_2 < 0xFFU) {
                                var_v0 = (temp_a0_2 & 0xFF) | 0xBCBCBC00;
                            } else {
                                var_v0 = 0xBCBCBCFF;
                            }
                            M2C_FIELD(var_t2_2, s32 *, 4) = var_v0;
                            var_t2 = temp_t2_3 + 8;
                            M2C_FIELD(var_t2_2, s32 *, 8) = 0xFCFF97FF;
                            M2C_FIELD(temp_t2_3, s32 *, 4) = 0xFF2CFE7F;
                        }
                    } else {
                        temp_v0_4 = var_t2;
                        temp_t2_4 = var_t2 + 8;
                        temp_a2_2 = temp_t2_4;
                        temp_t2_5 = temp_t2_4 + 8;
                        temp_v1_7 = temp_t2_5;
                        var_t2 = temp_t2_5 + 8;
                        M2C_FIELD(temp_v0_4, s32 *, 0) = 0xE200001C;
                        M2C_FIELD(temp_v0_4, s32 *, 4) = 0x504240;
                        M2C_FIELD(temp_a2_2, s32 *, 0) = 0xFA000000;
                        M2C_FIELD(temp_a2_2, s32 *, 4) = 0x3E3E3E5C;
                        M2C_FIELD(temp_v1_7, s32 *, 0) = 0xFCF197E3;
                        M2C_FIELD(temp_v1_7, s32 *, 4) = 0x112FFFFF;
                    }
                    D_800EFD34_ovl_01 = M2C_FIELD(arg1, s32 *, 0);
                    D_800EFD38_ovl_01 = M2C_FIELD(temp_t3, s32 *, 0);
                    var_s3 = var_s1 & 0xFFFF;
                }
                temp_t7 = M2C_ERROR(/* Read from unset register $t7 */) & 0xFFFF;
                sp18 = var_s3;
                temp_s3 = temp_t7 - 1;
                temp_t4 = var_t4 & 0xFF;
                sp20 = temp_s3;
                var_a2 = var_t2 - 8;
                sp28 = ((temp_s3 * 4) & 0xFFF) << 0xC;
                sp1C = temp_t4;
                sp24 = temp_t4 >> 1;
loop_56:
                temp_v1_8 = var_s0 & 0xFFFF;
                if (temp_v1_8 < sp18) {
                    if ((temp_v1_8 + (M2C_ERROR(/* Read from unset register $t5 */) & 0xFFFF)) >= (s32) sp18) {
                        if (D_800B8838_ovl_01 <= ((f32) ((var_s1 - var_s0) & 0xFFFF) / var_ft2)) {

                        }
                    }
                    var_s0 += M2C_ERROR(/* Read from unset register $t5 */);
                    temp_v1_9 = M2C_FIELD(temp_t3, s32 *, 0);
                    temp_t0 = var_s2 + M2C_ERROR(/* Read from unset register $t9 */);
                    if (temp_v1_9 == 1) {
                        temp_a1 = M2C_FIELD(temp_t3, u32 *, 4);
                        temp_a0_3 = M2C_FIELD(temp_t3, s32 *, 0x14) + sp1C + (temp_a1 * (var_s4 & 0xFF));
                        if (D_800EFD3C_ovl_01 != (temp_a0_3 | (temp_t7 << 0x10))) {
                            temp_a2_3 = var_a2 + 8;
                            M2C_FIELD(var_a2, s32 *, 8) = (s32) (((temp_a1 - 1) & 0xFFF) | 0xFD480000);
                            M2C_FIELD(temp_a2_3, s32 *, 4) = temp_a0_3;
                            temp_a2_4 = temp_a2_3 + 8;
                            temp_a0_4 = ((((s32) (temp_t7 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
                            M2C_FIELD(temp_a2_3, s32 *, 8) = temp_a0_4;
                            M2C_FIELD(temp_a2_4, s32 *, 4) = 0x07080200;
                            temp_a2_5 = temp_a2_4 + 8;
                            M2C_FIELD(temp_a2_4, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_a2_5, s32 *, 4) = 0;
                            temp_a2_6 = temp_a2_5 + 8;
                            temp_v1_10 = (((M2C_ERROR(/* Read from unset register $t5 */) & 0xFFFF) - 1) * 4) & 0xFFF;
                            M2C_FIELD(temp_a2_5, s32 *, 8) = 0xF4000000;
                            var_t2 += 0x38;
                            M2C_FIELD(temp_a2_6, s32 *, 4) = (s32) (sp28 | (temp_v1_10 | 0x07000000));
                            temp_a2_7 = temp_a2_6 + 8;
                            M2C_FIELD(temp_a2_6, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(temp_a2_7, s32 *, 4) = 0;
                            temp_a2_8 = temp_a2_7 + 8;
                            M2C_FIELD(temp_a2_7, s32 *, 8) = temp_a0_4;
                            M2C_FIELD(temp_a2_8, s32 *, 4) = 0x80200;
                            var_a2 = temp_a2_8 + 8;
                            M2C_FIELD(temp_a2_8, s32 *, 8) = 0xF2000000;
                            M2C_FIELD(var_a2, s32 *, 4) = (s32) (sp28 | temp_v1_10);
                        }
                        if (D_800EFD40_ovl_01 != (M2C_FIELD(temp_t3, s32 *, 0x18) + M2C_FIELD(arg1, u16 *, 0xA))) {
                            var_a2_2 = var_a2 + 8;
                            var_a0_2 = 0xF5000100;
                            var_a1 = 0x073F0000;
                            goto block_73;
                        }
                    } else if (temp_v1_9 == 0) {
                        temp_a1_2 = (u32) M2C_FIELD(temp_t3, u32 *, 4) >> 1;
                        temp_a0_5 = M2C_FIELD(temp_t3, s32 *, 0x14) + sp24 + (temp_a1_2 * (var_s4 & 0xFF));
                        if (D_800EFD3C_ovl_01 != (temp_a0_5 | (temp_t7 << 0x10))) {
                            temp_a2_9 = var_a2 + 8;
                            M2C_FIELD(var_a2, s32 *, 8) = (s32) (((temp_a1_2 - 1) & 0xFFF) | 0xFD480000);
                            M2C_FIELD(temp_a2_9, s32 *, 4) = temp_a0_5;
                            temp_a2_10 = temp_a2_9 + 8;
                            temp_a1_3 = (((s32) ((temp_t7 >> 1) + 7) >> 3) & 0x1FF) << 9;
                            M2C_FIELD(temp_a2_9, s32 *, 8) = (s32) (temp_a1_3 | 0xF5480000);
                            M2C_FIELD(temp_a2_10, s32 *, 4) = 0x07080200;
                            temp_a2_11 = temp_a2_10 + 8;
                            M2C_FIELD(temp_a2_10, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_a2_11, s32 *, 4) = 0;
                            temp_a2_12 = temp_a2_11 + 8;
                            temp_a0_6 = (((M2C_ERROR(/* Read from unset register $t5 */) & 0xFFFF) - 1) * 4) & 0xFFF;
                            M2C_FIELD(temp_a2_11, s32 *, 8) = 0xF4000000;
                            M2C_FIELD(temp_a2_12, s32 *, 4) = (s32) ((((sp20 * 2) & 0xFFF) << 0xC) | (temp_a0_6 | 0x07000000));
                            temp_a2_13 = temp_a2_12 + 8;
                            M2C_FIELD(temp_a2_12, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(temp_a2_13, s32 *, 4) = 0;
                            temp_a2_14 = temp_a2_13 + 8;
                            M2C_FIELD(temp_a2_13, s32 *, 8) = (s32) (temp_a1_3 | 0xF5400000);
                            M2C_FIELD(temp_a2_14, s32 *, 4) = 0xF80200;
                            var_a2 = temp_a2_14 + 8;
                            M2C_FIELD(temp_a2_14, s32 *, 8) = 0xF2000000;
                            var_t2 += 0x38;
                            M2C_FIELD(var_a2, s32 *, 4) = (s32) (sp28 | temp_a0_6);
                        }
                        if (D_800EFD40_ovl_01 != (M2C_FIELD(temp_t3, s32 *, 0x18) + M2C_FIELD(arg1, u16 *, 0xA))) {
                            var_a2_2 = var_a2 + 8;
                            var_a0_2 = 0xF50001F0;
                            var_a1 = 0x07030000;
block_73:
                            M2C_FIELD(var_a2_2, s32 *, 0) = 0xFD100000;
                            M2C_FIELD(var_a2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_t3, s32 *, 0x18) + M2C_FIELD(arg1, u16 *, 0xA));
                            temp_a2_15 = var_a2_2 + 8;
                            M2C_FIELD(var_a2_2, s32 *, 8) = 0xE8000000;
                            M2C_FIELD(temp_a2_15, s32 *, 4) = 0;
                            temp_a2_16 = temp_a2_15 + 8;
                            M2C_FIELD(temp_a2_15, s32 *, 8) = var_a0_2;
                            M2C_FIELD(temp_a2_16, s32 *, 4) = 0x07000000;
                            temp_a2_17 = temp_a2_16 + 8;
                            M2C_FIELD(temp_a2_16, s32 *, 8) = 0xE6000000;
                            M2C_FIELD(temp_a2_17, s32 *, 4) = 0;
                            temp_a2_18 = temp_a2_17 + 8;
                            M2C_FIELD(temp_a2_17, s32 *, 8) = 0xF0000000;
                            M2C_FIELD(temp_a2_18, s32 *, 4) = (s32) (var_a1 | 0xC000);
                            var_a2 = temp_a2_18 + 8;
                            M2C_FIELD(temp_a2_18, s32 *, 8) = 0xE7000000;
                            M2C_FIELD(var_a2, s32 *, 4) = 0;
                            var_t2 += 0x30;
                            D_800EFD40_ovl_01 = M2C_FIELD(temp_t3, s32 *, 0x18) + M2C_FIELD(arg1, u16 *, 0xA);
                        }
                    }
                    temp_fv0 = (f32) spE * D_80112798_ovl_01;
                    if (D_800B8838_ovl_01 <= temp_fv0) {
                        var_v1_4 = (s32) (temp_fv0 - D_800B8838_ovl_01) | 0x80000000;
                    } else {
                        var_v1_4 = (s32) temp_fv0;
                    }
                    temp_fv0_2 = (f32) sp6 * D_80112798_ovl_01;
                    if (!(D_800B8838_ovl_01 <= temp_fv0_2)) {
                        var_a0_3 = (s32) temp_fv0_2;
                        var_v1_5 = var_s2 & 0xFFFF;
                    } else {
                        var_a0_3 = (s32) (temp_fv0_2 - D_800B8838_ovl_01) | 0x80000000;
                        var_v1_5 = var_s2 & 0xFFFF;
                    }
                    temp_fv0_3 = (f32) var_v1_5 * D_8011279C_ovl_01;
                    if (!(D_800B8838_ovl_01 <= temp_fv0_3)) {
                        var_a0_4 = (s32) temp_fv0_3;
                        var_v1_6 = temp_t0 & 0xFFFF;
                    } else {
                        var_a0_4 = (s32) (temp_fv0_3 - D_800B8838_ovl_01) | 0x80000000;
                        var_v1_6 = temp_t0 & 0xFFFF;
                    }
                    temp_fv0_4 = (f32) var_v1_6 * D_8011279C_ovl_01;
                    if (!(D_800B8838_ovl_01 <= temp_fv0_4)) {
                        var_v1_7 = (s32) temp_fv0_4;
                    } else {
                        var_v1_7 = (s32) (temp_fv0_4 - D_800B8838_ovl_01) | 0x80000000;
                    }
                    if (M2C_FIELD(arg1, u16 *, 0x10) != 0) {
                        temp_a1_4 = var_a0_4 & 0xFFFF;
                        if (M2C_FIELD(arg1, u16 *, 0x12) != 0) {
                            temp_v0_5 = var_v1_7 & 0xFFFF;
                            if (temp_a1_4 != temp_v0_5) {
                                temp_a2_19 = var_a2 + 8;
                                M2C_FIELD(var_a2, s32 *, 8) = (s32) ((((var_a0_3 * 4) & 0xFFC) << 0xC) | (((temp_v0_5 * 4) & 0xFFF) | 0xE4000000));
                                M2C_FIELD(temp_a2_19, s32 *, 4) = (s32) ((((var_v1_4 * 4) & 0xFFC) << 0xC) | ((temp_a1_4 * 4) & 0xFFF));
                                temp_a2_20 = temp_a2_19 + 8;
                                temp_t2_6 = var_t2 + 0x10;
                                temp_a1_5 = temp_t2_6;
                                var_t2 = temp_t2_6 + 8;
                                M2C_FIELD(temp_a2_19, s32 *, 8) = 0xE1000000;
                                M2C_FIELD(temp_a2_20, s32 *, 4) = (s32) (sp16 << 0x15);
                                var_a2 = temp_a2_20 + 8;
                                temp_fv0_5 = ((f64) var_ft3 * D_800B8848_ovl_01) / (f64) D_80112798_ovl_01;
                                M2C_FIELD(temp_a2_20, s32 *, 8) = 0xF1000000;
                                if (!(D_800B8840_ovl_01 <= temp_fv0_5)) {
                                    var_a0_5 = (s32) temp_fv0_5;
                                    var_v0_2 = M2C_ERROR(/* Read from unset register $t5 */) & 0xFFFF;
                                } else {
                                    var_a0_5 = (s32) (temp_fv0_5 - D_800B8840_ovl_01) | 0x80000000;
                                    var_v0_2 = M2C_ERROR(/* Read from unset register $t5 */) & 0xFFFF;
                                }
                                temp_fv0_6 = (f64) ((f32) var_v0_2 / (f32) ((var_v1_7 & 0xFFFF) - (var_a0_4 & 0xFFFF))) * D_800B8850_ovl_01;
                                if (!(D_800B8840_ovl_01 <= temp_fv0_6)) {
                                    var_v0_3 = (s32) temp_fv0_6 & 0xFFFF;
                                } else {
                                    var_v0_3 = ((s32) (temp_fv0_6 - D_800B8840_ovl_01) | 0x80000000) & 0xFFFF;
                                }
                                M2C_FIELD(temp_a1_5, s32 *, 4) = (s32) ((var_a0_5 << 0x10) | var_v0_3);
                            }
                        }
                    }
                    var_s4 += M2C_ERROR(/* Read from unset register $t5 */);
                    var_s2 += M2C_ERROR(/* Read from unset register $t9 */);
                    goto loop_56;
                }
            }
        }
    }
    return var_t2;
}
