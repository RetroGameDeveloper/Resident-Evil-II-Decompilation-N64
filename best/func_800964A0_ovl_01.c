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

M2C_UNK func_8004789C_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800478DC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_800479EC_ovl_01(s32, u8, u8);          /* extern */
M2C_UNK func_80047B34_ovl_01(s32, M2C_UNK);         /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012F524_ovl_01;
extern M2C_UNK D_801310CC_ovl_01;

void func_800964A0_ovl_01(void) {
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s3;
    u32 temp_a0;
    u32 var_v1;
    void *var_s0;
    void *var_s2;

    var_v1 = D_800C527C_ovl_01 + 0x3BB64;
    temp_a0 = D_800C527C_ovl_01 + 0x3C004;
    if (var_v1 < temp_a0) {
        var_v1 = temp_a0;
    }
    var_s1 = var_v1 + 0xA3C;
    var_s3 = 2;
    var_s2 = var_v1 + 0xA46;
    var_s0 = &D_801310CC_ovl_01 + 8;
    do {
        var_s0 -= 4;
        var_s3 -= 1;
        func_80047B34_ovl_01(var_s1, 0);
        func_8004789C_ovl_01(var_s1, 0x80, 0x80, 0x80);
        func_800478DC_ovl_01(var_s1, M2C_FIELD(var_s0, u8 *, 0), M2C_FIELD(var_s0, u8 *, 1));
        temp_a0_2 = var_s1;
        var_s1 += 0x14;
        func_800479EC_ovl_01(temp_a0_2, M2C_FIELD(var_s0, u8 *, 2), M2C_FIELD(var_s0, u8 *, 3));
        M2C_FIELD(var_s2, M2C_UNK **, 2) = &D_8012F524_ovl_01;
        M2C_FIELD(var_s2, s16 *, 0) = 0x20;
        var_s2 += 0x14;
    } while (var_s3 != 0);
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x2B) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x2A) = 0x50;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x21) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x20) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x23) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, s8 *, 0x22) = 0;
    M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xF) = (u8) M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xE);
}
