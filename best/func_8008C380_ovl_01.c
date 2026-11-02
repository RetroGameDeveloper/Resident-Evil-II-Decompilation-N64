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

extern M2C_UNK D_800C7650_ovl_01;

s32 func_8008C380_ovl_01(void) {
    s32 var_v0;

    if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19D34) != 0) {
        return 4;
    }
    if ((u32) ((u32) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C7E) >> 1) < (u32) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72)) {
        return 0;
    }
    if ((u32) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) < 0x29U) {
        var_v0 = 2;
        if ((u32) M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) < 0x15U) {
            return 3;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 1;
    return var_v0;
}
