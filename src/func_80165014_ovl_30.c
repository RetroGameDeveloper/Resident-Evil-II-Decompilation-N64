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

M2C_UNK func_80165060_ovl_30();                     /* extern */
M2C_UNK func_801652F4_ovl_30(void *);               /* extern */
M2C_UNK func_80167B9C_ovl_30(void *);               /* extern */

void func_80165014_ovl_30(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_80165060_ovl_30();
    } else {
        func_801652F4_ovl_30(arg0);
    }
    func_80167B9C_ovl_30(arg0);
}
