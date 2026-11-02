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

extern M2C_UNK D_80119ECC_ovl_01;

void func_80075F28_ovl_01(void) {
    s32 var_a0;
    s32 var_a0_2;
    void *var_v1;

    var_a0 = 0x18;
    do {
        var_a0 -= 1;
    } while (var_a0 != 0);
    var_a0_2 = 0x18;
    var_v1 = (&D_80119ECC_ovl_01 + 0x360) - 0x24;
    do {
        var_a0_2 -= 1;
        if ((M2C_FIELD(var_v1, s16 *, 4) != 4) || (M2C_FIELD(var_v1, u8 *, 1) != 3)) {
            M2C_FIELD(var_v1, s8 *, 0) = 0;
            M2C_FIELD(var_v1, s16 *, 0x12) = 0;
        }
        var_v1 -= 0x24;
    } while (var_a0_2 != 0);
}
