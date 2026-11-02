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

M2C_UNK func_8004A7F8_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_801801DC_ovl_04;
extern void *D_801806F0_ovl_04;

void func_8017F0D0_ovl_04(void) {
    if (M2C_FIELD(D_801806F0_ovl_04, u8 *, 1) == 0) {
        func_8004A7F8_ovl_01(0, 0, &D_801801DC_ovl_04, 0);
    }
}
