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

M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern s8 D_80131304_ovl_01;
extern s8 D_80131310_ovl_01;

void func_80097344_ovl_01(s32 arg0, s32 arg1) {
    M2C_UNK var_a1;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_s1;
    s8 var_v1_2;
    u32 temp_a0;
    u32 var_s3;
    u32 var_v1;
    void *var_s0;
    void *var_s0_2;
    void *var_s2;
    void *var_s2_2;

    var_v1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_a0 = D_800C527C_ovl_01 + 0x3C004;
    if (var_v1 < temp_a0) {
        var_v1 = temp_a0;
    }
    var_s1 = var_v1 + 0x94C;
    var_s3 = 8;
    if (arg1 != 0) {
        var_s3 = 9;
    }
    if (arg0 & 1) {
        D_80131310_ovl_01 = 0;
    } else {
        D_80131310_ovl_01 = 0x30;
    }
    if (arg0 & 2) {
        M2C_FIELD(&D_80131304_ovl_01, s8 *, 0) = 0x68;
        var_v1_2 = 0x13;
    } else {
        M2C_FIELD(&D_80131304_ovl_01, s8 *, 0) = 0xC0;
        var_v1_2 = 0x38;
    }
    M2C_FIELD(&D_80131304_ovl_01, s8 *, 1) = var_v1_2;
    var_s2 = var_s1 + 0xA;
    var_s0 = (var_s3 * 4) + &D_80131304_ovl_01;
    do {
        var_s0 -= 4;
        var_s3 -= 1;
        func_80047B34_ovl_01(var_s1, 0);
        func_8004789C_ovl_01(var_s1, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s1, M2C_FIELD(var_s0, u8 *, 0), M2C_FIELD(var_s0, u8 *, 1));
        temp_a0_2 = var_s1;
        var_s1 += 0x14;
        func_800479EC_ovl_01(temp_a0_2, M2C_FIELD(var_s0, u8 *, 2), M2C_FIELD(var_s0, u8 *, 3));
        M2C_FIELD(var_s2, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s2, s16 *, 0) = 0;
        var_s2 += 0x14;
    } while (var_s3 >= 5U);
    var_s2_2 = var_s1 + 0xA;
    var_s0_2 = (var_s3 * 4) + &D_80131304_ovl_01;
    do {
        var_s0_2 -= 4;
        func_80047B34_ovl_01(var_s1, 0);
        var_s3 -= 1;
        if (var_s3 == M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xF)) {
            var_a1 = 0x40;
        } else {
            var_a1 = 0x80;
        }
        func_8004789C_ovl_01(var_s1, var_a1, var_a1, 0x80);
        func_800478DC_ovl_01(var_s1, M2C_FIELD(var_s0_2, u8 *, 0), M2C_FIELD(var_s0_2, u8 *, 1));
        temp_a0_3 = var_s1;
        var_s1 += 0x14;
        func_800479EC_ovl_01(temp_a0_3, M2C_FIELD(var_s0_2, u8 *, 2), M2C_FIELD(var_s0_2, u8 *, 3));
        M2C_FIELD(var_s2_2, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s2_2, s16 *, 0) = 0;
        var_s2_2 += 0x14;
    } while (var_s3 != 0);
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x48) = 0xA2;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x4A) = 0x46;
    M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xF) = 3U;
}
