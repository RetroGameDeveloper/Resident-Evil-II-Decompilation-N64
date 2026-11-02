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

M2C_UNK func_80043650_ovl_01();                     /* extern */
s32 func_800439B8_ovl_01(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478E8_ovl_01(s32, s32, s32);        /* extern */
M2C_UNK func_800479EC_ovl_01(s32, M2C_UNK, s32);    /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_800E7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_80131368_ovl_01;

void func_80097884_ovl_01(void) {
    s16 temp_s6;
    s16 temp_s7;
    s32 temp_a1;
    s32 temp_fp;
    s32 var_s0;
    s32 var_v0;
    u32 temp_v1;
    u32 var_a1;
    u32 var_s2;
    u8 temp_s5;
    u8 temp_v1_2;
    void *var_s1;
    void *var_s1_2;
    void *var_s1_3;
    void *var_s3;

    var_a1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_v1 = D_800C527C_ovl_01 + 0x3C004;
    if (var_a1 < temp_v1) {
        var_a1 = temp_v1;
    }
    var_s0 = var_a1 + 0x6CC;
    var_s2 = 7;
    temp_s7 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x34);
    temp_s5 = M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21488);
    temp_s6 = M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x36);
    temp_fp = (temp_s5 >> 1) * 0x1E;
    M2C_FIELD(&D_80131368_ovl_01, s16 *, 0x12) = (s16) (((temp_s5 - 6) * 0xF) + 0x5D);
    var_s1 = (&D_80131368_ovl_01 + 0x1C) - 4;
    do {
        var_s2 -= 1;
        func_800479EC_ovl_01(var_s0, 5, temp_fp & 0xFFFF);
        func_800478E8_ovl_01(var_s0, (M2C_FIELD(var_s1, u16 *, 0) + temp_s7) & 0xFFFF, (M2C_FIELD(var_s1, u16 *, 2) + temp_s6) & 0xFFFF);
        func_80043650_ovl_01();
        temp_a1 = var_s0;
        var_s0 += 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), temp_a1, 0, 0);
        var_s1 -= 4;
    } while (var_s2 >= 6U);
    var_s1_2 = (var_s2 * 4) + &D_80131368_ovl_01;
    do {
        var_s1_2 -= 4;
        func_800478E8_ovl_01(var_s0, (M2C_FIELD(var_s1_2, u16 *, 0) + temp_s7) & 0xFFFF, (M2C_FIELD(var_s1_2, u16 *, 2) + temp_s6) & 0xFFFF);
        var_s2 -= 1;
        if ((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x10) != 1) || (var_v0 = var_s2 < 3U, (var_s2 != 2))) {
            M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s0, 0, 0);
            var_v0 = var_s2 < 3U;
        }
        var_s0 += 0x14;
    } while (var_v0 == 0);
    var_s3 = var_s0 + 0xA;
    var_s1_3 = (var_s2 * 4) + &D_80131368_ovl_01;
    do {
        var_s1_3 -= 4;
        var_s2 -= 1;
        func_800478E8_ovl_01(var_s0, (M2C_FIELD(var_s1_3, u16 *, 0) + temp_s7) & 0xFFFF, (M2C_FIELD(var_s1_3, u16 *, 2) + temp_s6) & 0xFFFF);
        if (var_s2 != 0) {
            func_800479EC_ovl_01(var_s0, 0x50, ((temp_s5 >> 1) * 0x1E) & 0xFFFF);
        } else {
            temp_v1_2 = M2C_FIELD(&D_800E7650_ovl_01, u8 *, 0x1840);
            if (temp_v1_2 == 0x4E) {
                func_800478DC_ovl_01(var_s0, 0x50, 0x5A);
            }
            if (temp_v1_2 == 0x52) {
                func_800478DC_ovl_01(var_s0, 0x50, 0x78);
            }
        }
        M2C_FIELD(var_s3, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s3, s16 *, 0) = 0x200;
        var_s3 += 0x14;
        var_s0 += 0x14;
        M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204) = func_800439B8_ovl_01(M2C_FIELD(&D_800DF650_ovl_01, s32 *, 0x204), var_s0, 0, 0);
    } while (var_s2 != 0);
}
