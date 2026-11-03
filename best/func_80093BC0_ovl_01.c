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

M2C_UNK func_80047854_ovl_01(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478AC_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478BC_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478CC_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80047B50_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80047B6C_ovl_01(s32, M2C_UNK);         /* extern */
M2C_UNK func_80047B88_ovl_01(void *, M2C_UNK);      /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F4EC_ovl_01;
extern M2C_UNK D_8012F508_ovl_01;
extern M2C_UNK D_8012FA40_ovl_01;

void func_80093BC0_ovl_01(void) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s4;
    s32 var_s6;
    void *var_s0_2;
    void *var_s1;
    void *var_s3;
    void *var_s5;

    var_s2 = 0x19;
    var_s1 = &D_8012FA40_ovl_01 + 0x64;
    var_s6 = D_800C527C_ovl_01 + 0x3B8F0;
    var_s5 = D_800C527C_ovl_01 + 0x3B910;
    var_s4 = D_800C527C_ovl_01 + 0x3B800;
    var_s0 = D_800C527C_ovl_01 + 0x3B970;
    var_s3 = var_s0 + 0xC;
    do {
        var_s1 -= 4;
        var_s2 -= 1;
        func_80047B34_ovl_01(var_s0, 0);
        func_8004789C_ovl_01(var_s0, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s0, M2C_FIELD(var_s1, u8 *, 0), M2C_FIELD(var_s1, u8 *, 1));
        temp_a0 = var_s0;
        var_s0 += 0x14;
        func_800479EC_ovl_01(temp_a0, M2C_FIELD(var_s1, u8 *, 2), M2C_FIELD(var_s1, u8 *, 3));
        M2C_FIELD(var_s3, s16 *, -2) = 0;
        M2C_FIELD(var_s3, M2C_UNK **, 0) = &D_8012F4EC_ovl_01;
        var_s3 += 0x14;
    } while (var_s2 != 0);
    var_s2_2 = 6;
    var_s0_2 = var_s4 + 0xA;
    var_s1_2 = 0xD2;
    do {
        var_s1_2 -= 0x1E;
        var_s2_2 -= 1;
        func_80047854_ovl_01(var_s4, 0x28, var_s1_2 & 0xFFFF, 0x28, 0x1E);
        M2C_FIELD(var_s0_2, M2C_UNK **, 0x1A) = &D_8012F508_ovl_01;
        M2C_FIELD(var_s0_2, s16 *, 0) = 0x200;
        func_80047B6C_ovl_01(var_s4, 0);
        func_800478AC_ovl_01(var_s4, 0x80, 0x80, 0x80);
        var_s0_2 += 0x28;
        var_s4 += 0x28;
    } while (var_s2_2 != 0);
    var_s2_3 = 2;
    do {
        var_s2_3 -= 1;
        func_80047B50_ovl_01(var_s6, 0);
        func_800478CC_ovl_01(var_s6, 0x20, 0x20, 0x40);
        var_s6 += 0x10;
    } while (var_s2_3 != 0);
    var_s2_4 = 6;
    do {
        var_s2_4 -= 1;
        func_800478BC_ovl_01(var_s5, 0x80, 0x20, 0x20);
        func_80047B88_ovl_01(var_s5, 0);
        M2C_FIELD(var_s5, s8 *, 3) = 0;
        var_s5 += 0x10;
    } while (var_s2_4 != 0);
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x50) = 7;
    M2C_FIELD(&D_8012BF38_ovl_01, s16 *, 0x52) = 0xE;
}
