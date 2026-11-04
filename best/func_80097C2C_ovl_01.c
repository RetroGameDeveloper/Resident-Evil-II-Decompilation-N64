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

s32 func_800439B8_ovl_01(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(void *, s32, s32);     /* extern */
M2C_UNK func_800478E8_ovl_01(void *, s32, s32);     /* extern */
M2C_UNK func_800479EC_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_801313A0_ovl_01;

void func_80097C2C_ovl_01(void) {
    s16 var_s4;
    s32 temp_s5;
    s32 var_s3;
    u32 temp_s3;
    u32 temp_v1;
    u32 var_a1;
    u32 var_s1;
    u8 temp_fp;
    u8 var_s6;
    void *temp_a0;
    void *temp_s2;
    
    void *var_s0_2;
    void *var_s2;

    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s2 = var_a1 + 0x640;
    var_s1 = 7;
    var_s6 = M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8);
    temp_s5 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x36) - 0x29;
    temp_fp = M2C_FIELD(((var_s6 * 4) + &D_800C7650_ovl_01), u8 *, 0x2181A);
    var_s4 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x34) - 0x34;
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x10) == 1) {
        var_s1 = 6;
        var_s4 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x34);
        var_s2 = var_a1 + 0x654;
    }
    temp_s3 = var_s1;
    temp_s2 = ((var_s1 * 4) + &D_801313A0_ovl_01) - 4;
    do {
        var_s1 -= 1;
        temp_a0 = var_s2;
        var_s2 += 0x14;
        func_800478E8_ovl_01(temp_a0, (M2C_FIELD(temp_s2, u16 *, 0) + var_s4) & 0xFFFF, (M2C_FIELD(temp_s2, u16 *, 2) + temp_s5) & 0xFFFF);
        temp_s2 -= 4;
    } while (var_s1 >= 3U);
    var_s0_2 = var_s2;
    var_s3 = temp_s3 - 1;
    do {
        var_s0_2 -= 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s0_2, 0, 0);
        var_s3 -= 1;
    } while ((u32) (var_s3 & 0xFFFF) >= 3U);
    func_800478E8_ovl_01(var_s2, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 4) + var_s4) & 0xFFFF, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 6) + temp_s5) & 0xFFFF);
    M2C_FIELD(var_s2, M2C_UNK **, 0xC) = &D_8012F4D0_ovl_01;
    M2C_FIELD(var_s2, s16 *, 0xA) = 0x200;
    temp_s2 = var_s2 + 0x14;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), var_s2, 0, 0);
    if (temp_fp != 0) {
        func_800478E8_ovl_01(temp_s2, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 0) + var_s4) & 0xFFFF, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 2) + temp_s5) & 0xFFFF);
        func_800479EC_ovl_01(temp_s2, 0x50, 0x1E);
        if (temp_fp == 2) {
            var_s6 -= 1;
        }
    } else {
        func_800478E8_ovl_01(temp_s2, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 0) + var_s4 + 0x14) & 0xFFFF, (M2C_FIELD(&D_801313A0_ovl_01, u16 *, 2) + temp_s5) & 0xFFFF);
        func_800479EC_ovl_01(temp_s2, 0x28, 0x1E);
    }
    func_800478DC_ovl_01(temp_s2, (var_s6 & 1) * 0x28, ((var_s6 >> 1) * 0x1E) & 0xFFFE);
    M2C_FIELD(temp_s2, M2C_UNK **, 0xC) = &D_8012F4D0_ovl_01;
    M2C_FIELD(temp_s2, s16 *, 0xA) = 0x200;
    if (M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 8) != 0x80) {
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204) = func_800439B8_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18204), temp_s2, 0, 0);
    }
}
