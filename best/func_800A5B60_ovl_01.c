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

M2C_UNK func_800A56F0_ovl_01();                     /* extern */
extern s32 D_80143F08;
extern M2C_UNK (*D_80143FAC)(s32);

void func_800A5B60_ovl_01(void) {
    if (D_80143F08 != 0) {
        func_800A56F0_ovl_01();
        D_80143FAC(D_80143F08);
        D_80143F08 = 0;
    }
}
