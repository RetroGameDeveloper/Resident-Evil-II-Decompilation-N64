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

extern M2C_UNK D_800FE228_ovl_01;

void func_8004CA04_ovl_01(void) {
    s32 var_v0;

    var_v0 = 7;
    do {
        var_v0 -= 1;
    } while (var_v0 != 0);
    M2C_FIELD(&D_800FE228_ovl_01, M2C_UNK **, 0xC800) = &D_800FE228_ovl_01;
    M2C_FIELD(&D_800FE228_ovl_01, void **, 0xC804) = (void *) (&D_800FE228_ovl_01 + 0x2800);
}
