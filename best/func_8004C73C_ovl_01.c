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

s32 func_80043898_ovl_01(s32, s32 *, s32 *, M2C_UNK); /* extern */
s16 func_800844FC_ovl_01(s16);                      /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800F9E60_ovl_01;
extern M2C_UNK D_800FE228_ovl_01;
extern M2C_UNK D_8010B25C_ovl_01;

s32 func_8004C73C_ovl_01(void *arg0, u32 arg1, void *arg2) {
    s16 temp_t5;
    s16 temp_v0;
    s32 *var_s2;
    s32 temp_a0_2;
    s32 temp_t0;
    s32 var_a2;
    s8 temp_v1;
    u32 temp_a0;
    u32 var_s0;
    u8 *var_s1;
    u8 var_v0;
    void *temp_s0;
    void *temp_s3;
    void *var_a1;

    var_s2 = M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800);
    temp_s3 = &D_800FE228_ovl_01 + 0x1400;
    var_s0 = arg1;
    if (var_s2 == temp_s3) {
        return M2C_FIELD(arg2, s32 *, 0xD008);
    }
    var_s1 = arg0 + 2;
    temp_v0 = func_800844FC_ovl_01(M2C_FIELD(arg0, s16 *, 0));
    temp_t0 = temp_v0 & 0x4000;
    temp_t5 = (((u32) (temp_v0 & 0xF0) >> 3) + (((u32) temp_v0 >> 8) & 1)) << 6;
    var_a1 = var_s2 + 0xC;
    var_v0 = M2C_FIELD(arg0, u8 *, 2);
loop_3:
    var_a2 = 0xE;
    if (var_v0 != 0x20) {
        temp_a0 = var_v0 - 0x24;
        if (temp_t0 != 0) {
            temp_a0_2 = temp_a0 * 2;
            if (temp_a0 < 0x57U) {
                temp_v1 = *(temp_a0_2 + &D_800F9E60_ovl_01);
                var_s0 -= temp_v1;
                var_a2 = *(temp_a0_2 + 1 + &D_800F9E60_ovl_01) + temp_v1;
            }
        }
        *var_s2 = 0x80808000;
        M2C_FIELD(var_a1, s8 *, -9) = 0;
        M2C_FIELD(var_a1, s32 *, -8) = (s32) ((var_s0 << 0x10) | (var_s0 >> 0x10));
        M2C_FIELD(var_a1, s8 *, -4) = (s8) (((*var_s1 % 18) & 0xFF) * 0xE);
        var_s2 += 0x14;
        M2C_FIELD(var_a1, s16 *, -2) = temp_t5;
        M2C_FIELD(var_a1, s32 *, 4) = 0xE000E;
        M2C_FIELD(var_a1, M2C_UNK **, 0) = &D_8010B25C_ovl_01;
        M2C_FIELD(var_a1, s8 *, -3) = (s8) (((*var_s1 / 18) & 0xFF) * 0xE);
        var_a1 += 0x14;
        if (var_s2 != temp_s3) {
            var_s1 += 1;
            goto block_11;
        }
    } else {
        var_s1 += 1;
        if (temp_t0 != 0) {
            var_s0 -= M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 0);
            var_a2 = M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 1) + M2C_FIELD(&D_800F9E60_ovl_01, s8 *, 0);
        }
block_11:
        var_v0 = *var_s1;
        var_s0 += var_a2;
        if (var_v0 != 0) {
            goto loop_3;
        }
    }
    if (M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800) != var_s2) {
        temp_s0 = &D_800C7650_ovl_01 + (0x10000 | 0x8000);
        M2C_FIELD(temp_s0, s32 *, 0x204) = func_80043898_ovl_01(M2C_FIELD(temp_s0, s32 *, 0x204), M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800), var_s2, 0x38E38E39);
    }
    M2C_FIELD(&D_800FE228_ovl_01, s32 **, 0xC800) = var_s2;
    return ((u32) (var_s1 + 2) >> 1) * 2;
}
