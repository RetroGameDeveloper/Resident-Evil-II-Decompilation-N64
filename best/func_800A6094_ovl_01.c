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

extern f64 D_800BA6F0_ovl_01;
extern f64 D_800BA6F8_ovl_01;
extern f32 D_800BA700_ovl_01;
extern f32 D_800BA704_ovl_01;
extern M2C_UNK D_80135CA0_ovl_01;
extern M2C_UNK D_80135EA0_ovl_01;
extern s32 D_80147F44;

s32 func_800A6094_ovl_01(s32 arg0, u32 arg1) {
    M2C_UNK *var_v0;
    f32 temp_fv0;
    f32 var_fv1_2;
    f64 var_fv1;
    f64 var_fv1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    
    u32 temp_a0;
    u32 temp_v1;
    u32 var_a1;

    var_a1 = arg1;
    temp_a0 = arg0 & 0xFF;
    if (var_a1 == -1U) {
        var_a1 = 0x40005622;
    }
    temp_v1 = var_a1 >> 0x18;
    if (temp_a0 != temp_v1) {
        temp_v0 = var_a1 & 0xFFFFFF;
        var_fv1 = (f64) temp_v0;
        if (temp_v0 < 0) {
            var_fv1 += D_800BA6F0_ovl_01;
        }
        if (temp_v1 >= temp_a0) {
            var_v0 = &D_80135EA0_ovl_01;
            temp_v0 = temp_v1 - temp_a0;
        } else {
            var_v0 = &D_80135CA0_ovl_01;
            temp_v0 = temp_a0 - temp_v1;
        }
        var_fv1_2 = (f32) var_fv1 * *((temp_v0 * 4) + var_v0);
    } else {
        temp_v0_2 = var_a1 & 0xFFFFFF;
        var_fv1_3 = (f64) temp_v0_2;
        if (temp_v0_2 < 0) {
            var_fv1_3 += D_800BA6F8_ovl_01;
        }
        var_fv1_2 = (f32) var_fv1_3;
    }
    temp_fv0 = (var_fv1_2 * D_800BA700_ovl_01) / (f32) D_80147F44;
    if (D_800BA704_ovl_01 <= temp_fv0) {
        return (s32) (temp_fv0 - D_800BA704_ovl_01) | 0x80000000;
    }
    return (s32) temp_fv0;
}
