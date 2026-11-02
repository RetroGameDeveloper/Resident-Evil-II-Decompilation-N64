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
M2C_UNK func_800478BC_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80047B88_ovl_01(void *, M2C_UNK);      /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_801313F0_ovl_01;

void func_80098068_ovl_01(void) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s3;
    s32 var_s3_2;
    void *var_s1;
    void *var_s2;
    void *var_s4;

    var_s3 = 2;
    var_s1 = &D_801313F0_ovl_01 + 8;
    var_s0 = D_800C527C_ovl_01 + 0x3B800;
    var_s4 = D_800C527C_ovl_01 + 0x3B828;
    var_s2 = var_s0 + 0xA;
    do {
        var_s1 -= 4;
        var_s3 -= 1;
        func_80047B34_ovl_01(var_s0, 0);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s0, M2C_FIELD(var_s1, u8 *, 0), M2C_FIELD(var_s1, u8 *, 1));
        temp_a0 = var_s0;
        var_s0 += 0x14;
        func_800479EC_ovl_01(temp_a0, M2C_FIELD(var_s1, u8 *, 2), M2C_FIELD(var_s1, u8 *, 3));
        M2C_FIELD(var_s2, M2C_UNK **, 2) = &D_8012F4D0_ovl_01;
        M2C_FIELD(var_s2, s16 *, 0) = 0;
        var_s2 += 0x14;
    } while (var_s3 != 0);
    var_s3_2 = 0x20;
    do {
        func_80047B88_ovl_01(var_s4, 1);
        func_800478BC_ovl_01(var_s4, 0x80, 0x80, 0x80);
        M2C_FIELD(var_s4, s8 *, 3) = 4;
        var_s3_2 -= 1;
        var_s4 += 0x10;
    } while (var_s3_2 != 0);
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x64) = 0xA;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x66) = 0x46;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x3C) = 0x3A;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x60) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x63) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x62) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x3E) = 0x1D;
}
