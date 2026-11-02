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

f32 func_800482C4_ovl_01();                         /* extern */
extern f32 D_800B895C_ovl_01;
extern f32 D_800B8960_ovl_01;
extern f32 D_800B8964_ovl_01;
extern M2C_UNK D_800F578C_ovl_01;

f32 func_800483C0_ovl_01(f32 arg0) {
    f32 var_fv0;
    f32 var_fv1;
    s32 temp_ft1;

    var_fv0 = (f32) (s32) (arg0 * D_800B895C_ovl_01);
    if (var_fv0 < 0.0f) {
        var_fv0 = -var_fv0;
    }
    temp_ft1 = (s32) var_fv0;
    if (temp_ft1 >= 0x191) {
        return func_800482C4_ovl_01();
    }
    var_fv1 = D_800B8960_ovl_01;
    if (arg0 < 0.0f) {
        var_fv1 = D_800B8964_ovl_01;
    }
    return var_fv1 * *((temp_ft1 * 4) + &D_800F578C_ovl_01);
}
