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

M2C_UNK func_800ACCBC_ovl_01(u16);                  /* extern */
M2C_UNK func_800ACF48_ovl_01(u16);                  /* extern */
M2C_UNK func_800AD1D0_ovl_01(u16);                  /* extern */
M2C_UNK func_800AD3F8_ovl_01(u16);                  /* extern */
M2C_UNK func_800AD7B8_ovl_01(u16);                  /* extern */
M2C_UNK func_800ADBE4_ovl_01(u16);                  /* extern */
extern u8 D_801362B0_ovl_01;
extern s16 D_80147F70;
extern M2C_UNK D_80147F80;

s32 func_800A89A4_ovl_01(void) {
    s16 temp_a0;
    s32 var_v0;
    u16 *temp_s1_2;
    u16 *var_s0;
    u16 *var_s0_2;
    u16 *var_s0_3;
    u16 *var_s0_4;
    u16 *var_s0_5;
    u16 *var_s0_6;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_a0_6;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((D_801362B0_ovl_01 != 0) && (D_80147F70 != 0)) {
        temp_a0 = (u16) D_80147F70 - 1;
        temp_s2 = *(((s32) (temp_a0 << 0x10) >> 0xE) + &D_80147F80);
        D_80147F70 = temp_a0;
        temp_v0 = M2C_FIELD(temp_s2, s32 *, 8) + temp_s2;
        var_s0 = temp_v0 + 8;
        if (M2C_FIELD(temp_v0, u16 *, 8) != 0xFFFF) {
            do {
                temp_a0_2 = *var_s0;
                var_s0 += 2;
                func_800AD7B8_ovl_01(temp_a0_2);
            } while (*var_s0 != 0xFFFF);
        }
        temp_s1 = M2C_FIELD(temp_s2, s32 *, 0xC) + temp_s2;
        temp_s1_2 = temp_s1 + 8;
        var_s0_2 = temp_s1_2;
        if (M2C_FIELD(temp_s1, u16 *, 8) != 0xFFFF) {
            do {
                var_s0_2 += 2;
            } while (*var_s0_2 != 0xFFFF);
        }
        var_s0_3 = var_s0_2 - 2;
        if ((u32) var_s0_3 >= (u32) temp_s1_2) {
            do {
                temp_a0_3 = *var_s0_3;
                var_s0_3 -= 2;
                func_800AD3F8_ovl_01(temp_a0_3);
            } while ((u32) var_s0_3 >= (u32) temp_s1_2);
        }
        temp_v0_2 = M2C_FIELD(temp_s2, s32 *, 0x10) + temp_s2;
        var_s0_4 = temp_v0_2 + 8;
        if (M2C_FIELD(temp_v0_2, u16 *, 8) != 0xFFFF) {
            do {
                temp_a0_4 = *var_s0_4;
                var_s0_4 += 2;
                func_800AD1D0_ovl_01(temp_a0_4);
            } while (*var_s0_4 != 0xFFFF);
        }
        temp_v0_3 = M2C_FIELD(temp_s2, s32 *, 0x14) + temp_s2;
        var_s0_5 = temp_v0_3 + 8;
        if (M2C_FIELD(temp_v0_3, u16 *, 8) != 0xFFFF) {
            do {
                temp_a0_5 = *var_s0_5;
                var_s0_5 += 2;
                func_800ACCBC_ovl_01(temp_a0_5);
            } while (*var_s0_5 != 0xFFFF);
        }
        temp_v0_4 = M2C_FIELD(temp_s2, s32 *, 0x18) + temp_s2;
        var_s0_6 = temp_v0_4 + 8;
        if (M2C_FIELD(temp_v0_4, u16 *, 8) != 0xFFFF) {
            do {
                temp_a0_6 = *var_s0_6;
                var_s0_6 += 2;
                func_800ACF48_ovl_01(temp_a0_6);
            } while (*var_s0_6 != 0xFFFF);
        }
        var_v0 = 1;
        if (M2C_FIELD(temp_s2, u16 *, 6) == 1) {
            func_800ADBE4_ovl_01(M2C_FIELD(temp_s2, u16 *, 4));
            return 1;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}
