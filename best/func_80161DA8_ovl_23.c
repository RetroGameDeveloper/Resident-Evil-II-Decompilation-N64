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

M2C_UNK func_80040E88_ovl_01(void *, void *);       /* extern */
M2C_UNK func_80083800_ovl_01(s16, u16 *, u16 *, s32); /* extern */
extern M2C_UNK D_80166260_ovl_23;

void func_80161DA8_ovl_23(void *arg0) {
    u16 sp10;
    s16 sp14;
    M2C_UNK *var_s0;
    s16 temp_a0_2;
    s16 temp_a1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a3;
    u16 temp_v0;
    u16 temp_v1_2;
    u32 var_s3;
    void *temp_s1;

    var_s3 = 0;
    var_s0 = &D_80166260_ovl_23;
    do {
        temp_a1 = M2C_FIELD(var_s0, u16 *, 0xA) + 1;
        temp_a0 = temp_a1 * 0x62;
        temp_v1 = temp_a1 - 1;
        var_a3 = MULT_HI((temp_a1 * temp_a0), 0x66666667);
        M2C_FIELD(var_s0, u16 *, 0xA) = (u16) temp_a1;
        M2C_FIELD(var_s0, u16 *, 8) = (u16) (M2C_FIELD(var_s0, u16 *, 8) + (((temp_a1 * temp_a0) / 20) - ((temp_v1 * (temp_v1 * 0x62)) / 20)));
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(var_s0, u16 *, 0) * 0x178);
        if (M2C_FIELD(temp_s1, s32 *, 0x50) >= 0) {
            M2C_FIELD(var_s0, u16 *, 4) = (u16) (M2C_FIELD(var_s0, u16 *, 4) / 20);
            var_a3 = MULT_HI((s16) M2C_FIELD(var_s0, u16 *, 8), 0x92492493);
            M2C_FIELD(var_s0, u16 *, 8) = (u16) (M2C_FIELD(var_s0, u16 *, 8) / -28);
            M2C_FIELD(temp_s1, s32 *, 0x50) = 0;
            M2C_FIELD(var_s0, u16 *, 0xA) = 0U;
            temp_v1_2 = M2C_FIELD(temp_s1, u16 *, 0x5C) & 0xFFF;
            M2C_FIELD(temp_s1, u16 *, 0x5C) = temp_v1_2;
            if ((u32) (temp_v1_2 - 0x400) >= 0x800U) {
                if ((s32) temp_v1_2 < 0x400) {
                    M2C_FIELD(var_s0, u16 *, 0xE) = 0xAU;
                } else {
                    goto block_9;
                }
            } else if ((s32) temp_v1_2 >= 0x801) {
                M2C_FIELD(var_s0, u16 *, 0xE) = 0xAU;
            } else {
block_9:
                M2C_FIELD(var_s0, u16 *, 0xE) = -0xAU;
            }
        }
        M2C_FIELD(temp_s1, u16 *, 0x5C) = (u16) (M2C_FIELD(temp_s1, u16 *, 0x5C) + M2C_FIELD(var_s0, u16 *, 0xC));
        M2C_FIELD(var_s0, u16 *, 0xC) = (u16) (M2C_FIELD(var_s0, u16 *, 0xC) + M2C_FIELD(var_s0, u16 *, 0xE));
        temp_v0 = M2C_FIELD(temp_s1, u16 *, 0x5C) & 0xFFF;
        M2C_FIELD(temp_s1, u16 *, 0x5C) = temp_v0;
        temp_a0_2 = (u32) (temp_v0 - 0x400) < 0x800U;
        if ((s16) M2C_FIELD(var_s0, u16 *, 0xE) != 0) {
            if (temp_a0_2 != M2C_FIELD(var_s0, s16 *, 0x10)) {
                M2C_FIELD(var_s0, u16 *, 0xC) = (u16) (M2C_FIELD(var_s0, u16 *, 0xC) / -20);
            }
        } else {
            M2C_FIELD(var_s0, s16 *, 0x10) = temp_a0_2;
        }
        if ((s16) M2C_FIELD(var_s0, u16 *, 0xC) < 0xA) {
            temp_v1_3 = (s16) M2C_FIELD(temp_s1, u16 *, 0x5C);
            if ((temp_v1_3 >= 0x3F7) && (temp_v1_3 < 0x40A)) {
                M2C_FIELD(var_s0, u16 *, 0xC) = 0U;
                M2C_FIELD(var_s0, u16 *, 0xE) = 0U;
            }
            if ((s16) M2C_FIELD(var_s0, u16 *, 0xC) < 0xA) {
                temp_v1_4 = (s16) M2C_FIELD(temp_s1, u16 *, 0x5C);
                if ((temp_v1_4 >= 0xBF7) && (temp_v1_4 < 0xC0A)) {
                    M2C_FIELD(var_s0, u16 *, 0xC) = 0U;
                    M2C_FIELD(var_s0, u16 *, 0xE) = 0U;
                }
            }
        }
        sp14 = 0;
        sp10 = M2C_FIELD(var_s0, u16 *, 4);
        func_80083800_ovl_01((s16) (M2C_FIELD(arg0, u16 *, 0x66) + M2C_FIELD(var_s0, u16 *, 2)), &sp10, &sp10, var_a3);
        M2C_FIELD(temp_s1, s32 *, 0x4C) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x4C) + (s16) sp10);
        M2C_FIELD(temp_s1, s32 *, 0x50) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x50) + (s16) M2C_FIELD(var_s0, u16 *, 8));
        M2C_FIELD(temp_s1, s32 *, 0x54) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x54) + sp14);
        func_80040E88_ovl_01(temp_s1 + 0x58, temp_s1 + 0x38);
        var_s3 += 1;
        M2C_FIELD(var_s0, u16 *, 4) = (u16) (M2C_FIELD(var_s0, u16 *, 4) + M2C_FIELD(var_s0, u16 *, 6));
        var_s0 += 0x14;
    } while (var_s3 < 0xFU);
}
