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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_800472C8_ovl_01(s32, u32);                 /* extern */
M2C_UNK func_800478DC_ovl_01(void *, s32, M2C_UNK, void *); /* extern */
M2C_UNK func_800478E8_ovl_01(void *, s32, u16);     /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern M2C_UNK D_801313BC_ovl_01;
extern M2C_UNK D_801313DC_ovl_01;

void func_800981B8_ovl_01(s32 arg0, void *arg3) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 var_a1;
    s32 var_a2;
    s8 *var_s1;
    s8 var_a1_3;
    s8 var_a1_4;
    u32 temp_a0;
    void *temp_a0_2;
    void *temp_s3;
    void *var_a1_2;
    void *var_a3;
    void *var_s3;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;

    var_a3 = arg3;
    temp_s3 = D_800C527C_ovl_01 + 0x3B800;
    var_s1 = D_800C527C_ovl_01 + 0x3B828;
    M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x60) = (u16) ((M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x60) + 1) & 0x7F);
    var_a2 = 0x20;
    if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) != 1) {
        if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) < 2) {
            if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) != 0) {
                var_a1 = arg0 * 2;
            } else {
                var_a3 = (arg0 * 6) + &D_801313BC_ovl_01;
                var_a1_2 = var_s1 + 0xA;
                do {
                    var_a2 -= 1;
                    temp_a0 = (s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x60) - var_a2;
                    if (temp_a0 < 0x50U) {
                        *var_s1 = M2C_FIELD(var_a3, u8 *, 0) - (M2C_FIELD(var_a3, u8 *, 3) * var_a2);
                        M2C_FIELD(var_a1_2, s8 *, -9) = (s8) (M2C_FIELD(var_a3, u8 *, 1) - (M2C_FIELD(var_a3, u8 *, 4) * var_a2));
                        M2C_FIELD(var_a1_2, s8 *, -8) = (s8) (M2C_FIELD(var_a3, u8 *, 2) - (M2C_FIELD(var_a3, u8 *, 5) * var_a2));
                        temp_v0 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + 0xC + temp_a0;
                        temp_a0_2 = (temp_a0 * 2) + *((arg0 * 4) + &D_801313DC_ovl_01);
                        M2C_FIELD(var_a1_2, s16 *, -6) = temp_v0;
                        M2C_FIELD(var_a1_2, s16 *, -2) = temp_v0;
                        temp_v1 = M2C_FIELD(temp_a0_2, u8 *, 0) + (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 2);
                        M2C_FIELD(var_a1_2, s16 *, -4) = temp_v1;
                        var_s1 += 0x10;
                        M2C_FIELD(var_a1_2, s16 *, 0) = (s16) (temp_v1 + M2C_FIELD(temp_a0_2, u8 *, 1));
                        var_a1_2 += 0x10;
                    }
                } while (var_a2 != 0);
                var_a1 = arg0 * 2;
            }
        } else if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) != 2) {
            if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) != 3) {
                var_a1 = arg0 * 2;
            } else {
                if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) != 0) {
                    goto block_27;
                }
                var_a3 = (void *)0x10;
                var_v1 = var_s1 + 0xA;
                var_a1_3 = -1;
                M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) = (u16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) + 3);
                do {
                    var_a2 -= 1;
                    temp_a0_3 = (s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) - var_a2;
                    var_a1_3 += 8;
                    if ((u32) (temp_a0_3 - 0xB) < 0x52U) {
                        *var_s1 = var_a1_3;
                        M2C_FIELD(var_v1, s8 *, -9) = var_a1_3;
                        M2C_FIELD(var_v1, s8 *, -8) = 0x10;
                        temp_v0_2 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + temp_a0_3;
                        M2C_FIELD(var_v1, s16 *, -2) = temp_v0_2;
                        M2C_FIELD(var_v1, s16 *, -6) = temp_v0_2;
                        M2C_FIELD(var_v1, s16 *, -4) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 4);
                        var_s1 += 0x10;
                        M2C_FIELD(var_v1, s16 *, 0) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 0x23);
                        var_v1 += 0x10;
                    }
                } while (var_a2 != 0);
                goto block_33;
                goto block_36;
            }
        } else {
            if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) != 0) {
                M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x66) = 0x46U;
                goto block_28;
            }
            var_v1_2 = var_s1 + 6;
            M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x66) = (u16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x66) - 3);
            do {
                var_a2 -= 1;
                temp_a0_4 = (s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x66) - var_a2;
                if ((u32) (temp_a0_4 - 3) < 0x21U) {
                    M2C_FIELD(var_v1_2, s8 *, -5) = 0x10;
                    *var_s1 = 0x10;
                    M2C_FIELD(var_v1_2, s8 *, -4) = (s8) (var_a2 * 8);
                    M2C_FIELD(var_v1_2, s16 *, -2) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + 0xB);
                    M2C_FIELD(var_v1_2, s16 *, 2) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + 0x5C);
                    var_s1 += 0x10;
                    temp_v0_3 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + temp_a0_4;
                    M2C_FIELD(var_v1_2, s16 *, 4) = temp_v0_3;
                    M2C_FIELD(var_v1_2, s16 *, 0) = temp_v0_3;
                    var_v1_2 += 0x10;
                }
            } while (var_a2 != 0);
            if ((s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x66) < -0x14) {
                M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) = 1;
            }
            goto block_35;
        }
    } else {
        if (M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) == 0) {
            var_a3 = (void *)0x10;
            var_v1_3 = var_s1 + 0xA;
            var_a1_4 = -1;
            M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) = (u16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) + 3);
loop_14:
            var_a2 -= 1;
            temp_a0_5 = (s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) - var_a2;
            var_a1_4 += 8;
            if ((u32) (temp_a0_5 - 0xB) < 0x52U) {
                *var_s1 = 0x10;
                M2C_FIELD(var_v1_3, s8 *, -9) = var_a1_4;
                M2C_FIELD(var_v1_3, s8 *, -8) = 0x10;
                temp_v0_4 = M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + temp_a0_5;
                M2C_FIELD(var_v1_3, s16 *, -2) = temp_v0_4;
                M2C_FIELD(var_v1_3, s16 *, -6) = temp_v0_4;
                M2C_FIELD(var_v1_3, s16 *, -4) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 4);
                var_s1 += 0x10;
                M2C_FIELD(var_v1_3, s16 *, 0) = (s16) (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 0x23);
                var_v1_3 += 0x10;
            }
            if (var_a2 != 0) {
                goto loop_14;
            }
block_33:
            if ((s16) M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) >= 0x81) {
                M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) = 1;
            }
        } else {
block_27:
            M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x64) = 0xAU;
block_28:
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) = 0;
            M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) = 0;
            M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x60) = 0U;
block_35:
        }
block_36:
        var_a1 = arg0 * 2;
    }
    func_800478DC_ovl_01(temp_s3, ((((var_a1 + arg0) * 8) - arg0) * 2) & 0xFFFE, 0x23, var_a3);
    func_800478E8_ovl_01(temp_s3, (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + 0x2F) & 0xFFFF, (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E) + 0x19) & 0xFFFF);
    M2C_FIELD(temp_s3, M2C_UNK **, 0xC) = &D_8012F524_ovl_01;
    M2C_FIELD(temp_s3, s16 *, 0xA) = 0x20;
    var_s3 = temp_s3 + 0x14;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), temp_s3, 0, 0);
    func_800478E8_ovl_01(var_s3, (M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3C) + 2) & 0xFFFF, M2C_FIELD(&D_8012BF38_ovl_01, u16 *, 0x3E));
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), var_s3, 0, 0);
    do {
        var_s3 -= 0x14;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), var_s3, 0, 0);
    } while ((u32) (D_800C527C_ovl_01 + 0x3B814) < (u32) var_s3);
    if ((u32) (D_800C527C_ovl_01 + 0x3B828) < (u32) var_s1) {
        do {
            var_s1 -= 0x10;
            M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800472C8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), (u32) var_s1);
        } while ((u32) (D_800C527C_ovl_01 + 0x3B828) < (u32) var_s1);
    }
}
