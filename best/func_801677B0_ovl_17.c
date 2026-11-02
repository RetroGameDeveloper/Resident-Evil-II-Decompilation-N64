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
extern M2C_UNK D_800E10D0_ovl_01;

void func_801677B0_ovl_17(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0;

    if (arg0 != 0) {
        var_a0 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_a0 = &D_800E10D0_ovl_01;
    }
    M2C_FIELD(var_a0, s8 *, 4) = 2;
    M2C_FIELD(var_a0, s8 *, 5) = (s8) (arg1 + 2);
    M2C_FIELD(var_a0, s8 *, 6) = 0;
    M2C_FIELD(var_a0, s8 *, 7) = 0;
    M2C_FIELD(var_a0, u8 *, 0x26F) = (u8) (M2C_FIELD(var_a0, u8 *, 0x26F) | 0x80);
}
