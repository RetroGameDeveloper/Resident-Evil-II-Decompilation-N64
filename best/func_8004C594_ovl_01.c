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

s32 func_80043898_ovl_01(s32, s32 *, s32 *, M2C_UNK); /* extern */
s16 func_800844FC_ovl_01(s16);                      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800FE228_ovl_01;
extern M2C_UNK D_8010B25C_ovl_01;

s32 func_8004C594_ovl_01(void *arg0, u32 arg1, void *arg2) {
    M2C_UNK var_a3;
    s16 temp_s5;
    s16 temp_v0;
    s32 *var_s2;
    s32 temp_a0;
    u32 var_s3;
    u8 *var_s1;
    u8 var_v0;
    void *temp_s0;
    void *temp_s6;
    void *var_s0;

    var_s2 = M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC804);
    temp_s6 = &D_800FE228_ovl_01 + 0x7800;
    var_s3 = arg1;
    if (var_s2 == temp_s6) {
        return M2C_FIELD(arg2, s32 *, 0xD008);
    }
    var_s0 = var_s2 + 0xC;
    temp_v0 = func_800844FC_ovl_01(M2C_FIELD(arg0, s16 *, 0));
    temp_s5 = (((u32) (temp_v0 & 0xF0) >> 3) + (((u32) temp_v0 >> 8) & 1)) << 6;
    var_s1 = arg0 + 2;
    var_v0 = M2C_FIELD(arg0, u8 *, 2);
loop_3:
    var_a3 = 0x20;
    if (var_v0 != 0x20) {
        *var_s2 = 0x80808000;
        M2C_FIELD(var_s0, s8 *, -9) = 0;
        M2C_FIELD(var_s0, s32 *, -8) = (s32) ((var_s3 << 0x10) | (var_s3 >> 0x10));
        temp_a0 = *var_s1 - 0x20;
        M2C_FIELD(var_s0, s16 *, -4) = func_800844FC_ovl_01(((temp_a0 & 0x1F) * 8) | ((temp_a0 & 0xE0) << 6));
        var_a3 = 0x10;
        if (M2C_FIELD(var_s0, u8 *, -3) != 0x10) {
            M2C_FIELD(var_s0, s16 *, 6) = 8;
        } else {
            var_a3 = 0xB;
            M2C_FIELD(var_s0, s16 *, 6) = 0xB;
        }
        M2C_FIELD(var_s0, s16 *, 4) = 8;
        M2C_FIELD(var_s0, s16 *, -2) = temp_s5;
        M2C_FIELD(var_s0, M2C_UNK **, 0) = &D_8010B25C_ovl_01;
        var_s2 += 0x14;
        var_s0 += 0x14;
        if (var_s2 != temp_s6) {
            goto block_9;
        }
    } else {
block_9:
        var_s1 += 1;
        var_v0 = *var_s1;
        var_s3 += 8;
        if (var_v0 != 0) {
            goto loop_3;
        }
    }
    if (M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC804) != var_s2) {
        temp_s0 = &D_800C7650_ovl_01 + (0x10000 | 0x8000);
        M2C_FIELD(temp_s0, s32 *, 0x204) = func_80043898_ovl_01(M2C_FIELD(temp_s0, s32 *, 0x204), M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC804), var_s2, var_a3);
    }
    M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC804) = var_s2;
    return ((u32) (var_s1 + 2) >> 1) * 2;
}
