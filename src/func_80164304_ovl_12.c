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

M2C_UNK func_80164350_ovl_12();                     /* extern */
M2C_UNK func_801644B0_ovl_12(void *);               /* extern */
M2C_UNK func_80166458_ovl_12(void *);               /* extern */

void func_80164304_ovl_12(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80164350_ovl_12();
    } else {
        func_801644B0_ovl_12(arg0);
    }
    func_80166458_ovl_12(arg0);
}
