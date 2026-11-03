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
extern M2C_UNK D_8012F4D0_ovl_01;
extern M2C_UNK D_80131384_ovl_01;

void func_80097B48_ovl_01(void) {
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
    var_s1 = var_v1 + 0x640;
    var_s3 = 7;
    var_s2 = var_v1 + 0x64A;
    var_s0 = &D_80131384_ovl_01 + 0x1C;
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
    } while (var_s3 != 0);
}
