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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

s32 func_80059E30_ovl_01(s32 arg0, s32 arg1) {
    s32 var_a0;
    u16 temp_a0;

    var_a0 = arg0;
    if (var_a0 < 0x29) {
        var_a0 += var_a0 >> 1;
    }
    temp_a0 = M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) - var_a0;
    M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) = temp_a0;
    if (arg1 == 1) {
        if (temp_a0 & 0x8000) {
            M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) = 0U;
            M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) = (u16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) | 0x1000);
            return 1;
        }
        return 0;
    }
    if (arg1 == 0) {
        if ((s16) temp_a0 >= 0) {
            return 0;
        }
        if ((s16) temp_a0 >= -0xE) {
            if (!(M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) & 0x1000)) {
                M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F2) = 0U;
                M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) = (u16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x1F0) | 0x1000);
                return 1;
            }
            /* Duplicate return node #14. Try simplifying control flow for better match */
            M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) = (u8) (M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) | 0x80);
            M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x04000000);
            return 2;
        }
        M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) = (u8) (M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 0x26F) | 0x80);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x04000000);
        return 2;
    }
    return 1;
}
