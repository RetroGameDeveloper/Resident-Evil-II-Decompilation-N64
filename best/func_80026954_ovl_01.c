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

extern f64 D_800B6A38_ovl_01;
extern f64 D_800B6A40_ovl_01;
extern f32 D_80112798_ovl_01;
extern f32 D_8011279C_ovl_01;

void func_80026954_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    D_80112798_ovl_01 = (f32) ((f64) (f32) ((arg0 - arg2) - arg3) / D_800B6A38_ovl_01);
    D_8011279C_ovl_01 = (f32) ((f64) (f32) ((arg1 - arg4) - arg5) / D_800B6A40_ovl_01);
}
