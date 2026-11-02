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

void func_801661AC_ovl_35(s32 arg0) {
    M2C_UNK *var_v1;

    if (arg0 != 0) {
        var_v1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_v1 = &D_800E10D0_ovl_01;
    }
    M2C_FIELD(var_v1, s8 *, 4) = 3;
    M2C_FIELD(var_v1, s8 *, 5) = 0;
    M2C_FIELD(var_v1, s8 *, 6) = 0;
    M2C_FIELD(var_v1, s8 *, 7) = 0;
}
