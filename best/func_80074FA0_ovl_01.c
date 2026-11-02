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

M2C_UNK func_80074FEC_ovl_01(M2C_UNK);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80074FA0_ovl_01(void) {
    M2C_UNK var_a0;

    var_a0 = 1;
    if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 8) || (var_a0 = 2, ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 4) != 0))) {
        func_80074FEC_ovl_01(var_a0);
    }
}
