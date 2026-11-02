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

M2C_UNK func_8000C9E0(M2C_UNK *, s32 *, M2C_UNK);   /* extern */
extern s32 D_80112780_ovl_01;
extern s32 D_8011278C_ovl_01;
extern M2C_UNK D_80139F50;

void func_8006BCFC_ovl_01(s32 arg0) {
loop_1:
    if (D_8011278C_ovl_01 != (D_80112780_ovl_01 + arg0)) {
        func_8000C9E0(&D_80139F50, &D_8011278C_ovl_01, 1);
        goto loop_1;
    }
}
