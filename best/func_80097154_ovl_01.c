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

s32 func_800439B8_ovl_01(s32, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern M2C_UNK D_801312E4_ovl_01;

void func_80097154_ovl_01(void) {
    M2C_UNK var_a1_2;
    M2C_UNK var_a2;
    M2C_UNK var_a3;
    s16 temp_s5;
    s16 temp_s6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_a0;
    u32 var_a1;
    u32 var_s1_2;
    u32 var_s2;
    void *var_s0;
    void *var_s0_2;
    void *var_s3;

    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s1 = var_a1 + 0x8AC;
    var_s2 = 8;
    var_s0 = &D_801312E4_ovl_01 + 0x20;
    temp_s6 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x44);
    temp_s5 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x46);
    do {
        var_s0 -= 4;
        var_s2 -= 1;
        temp_a0 = var_s1;
        var_s1 += 0x14;
        func_800478E8_ovl_01(temp_a0, (M2C_FIELD(var_s0, u16 *, 0) + temp_s6) & 0xFFFF, (M2C_FIELD(var_s0, u16 *, 2) + temp_s5) & 0xFFFF);
    } while (var_s2 >= 5U);
    var_s3 = var_s1 + 0xA;
    var_s0_2 = (var_s2 * 4) + &D_801312E4_ovl_01;
    do {
        var_s0_2 -= 4;
        var_s2 -= 1;
        if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x10) == 0) {
            if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xE) == var_s2) {
                var_a1_2 = 0x80;
                if ((u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 1) >= 3U) {
                    var_a2 = 0x40;
                    var_a3 = 0x40;
                } else {
                    goto block_11;
                }
            } else {
                goto block_10;
            }
        } else {
block_10:
            var_a1_2 = 0x28;
block_11:
            var_a2 = var_a1_2;
            var_a3 = var_a1_2;
        }
        func_8004789C_ovl_01(var_s1, var_a1_2, var_a2, var_a3);
        temp_a0_2 = var_s1;
        var_s1 += 0x14;
        func_800478E8_ovl_01(temp_a0_2, (M2C_FIELD(var_s0_2, u16 *, 0) + temp_s6) & 0xFFFF, (M2C_FIELD(var_s0_2, u16 *, 2) + temp_s5) & 0xFFFF);
        M2C_FIELD(var_s3, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s3, s16 *, 0) = 0xC0;
        var_s3 += 0x14;
    } while (var_s2 != 0);
    var_s1_2 = var_s1 - 0x14;
    do {
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s1_2, 0, 0);
        var_a0 = D_800C527C_ovl_01 + 0x3BB64;
        temp_v1_2 = D_800C527C_ovl_01 + 0x3C004;
        if (var_a0 < temp_v1_2) {
            var_a0 = temp_v1_2;
        }
        var_s1_2 -= 0x14;
    } while ((u32) (var_a0 + 0x8AC) < var_s1_2);
}
