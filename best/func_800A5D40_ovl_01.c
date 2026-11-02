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

extern f64 D_800BA690_ovl_01;
extern f32 D_800BA698_ovl_01;
extern f32 D_800BA69C_ovl_01;
extern f64 D_800BA6A0_ovl_01;
extern f32 D_800BA6A8_ovl_01;
extern f32 D_800BA6AC_ovl_01;
extern f32 D_800BA6B0_ovl_01;
extern f64 D_800BA6B8_ovl_01;
extern f32 D_800BA6C0_ovl_01;
extern f64 D_800BA6C8_ovl_01;
extern f64 D_800BA6D0_ovl_01;
extern f64 D_800BA6D8_ovl_01;
extern f32 D_800BA6E0_ovl_01;
extern f32 D_800BA6E4_ovl_01;
extern f32 D_800BA6E8_ovl_01;
extern f32 D_800BA6EC_ovl_01;
extern M2C_UNK D_801360A0_ovl_01;
extern M2C_UNK D_801362A4_ovl_01;

void func_800A5D40_ovl_01(s16 *arg0, s16 *arg1, u32 arg2, u32 arg3, u32 arg4, s16 *arg5, u32 arg6, s16 *arg7) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft0_4;
    f32 temp_ft0_5;
    f32 temp_ft0_6;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 var_fv0;
    f64 var_ft0;
    f64 var_ft0_2;
    f64 var_ft0_3;
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    u32 temp_t0;
    u32 temp_t0_2;
    u32 temp_t0_3;
    u32 temp_t0_4;
    u32 temp_t0_5;
    u32 temp_t0_6;
    u32 var_a2;
    u32 var_a3;
    u32 var_t1;
    u32 var_t4;

    var_a2 = arg2;
    var_t4 = arg6;
    if (var_a2 > 0x7F0000U) {
        var_a2 = 0x7F0000;
    }
    temp_v0 = var_a2 & 0xFFFF;
    var_ft0 = (f64) temp_v0;
    temp_t0 = var_a2 >> 0x10;
    if (temp_v0 < 0) {
        var_ft0 += D_800BA690_ovl_01;
    }
    temp_ft0 = (f32) var_ft0 * D_800BA698_ovl_01;
    temp_t0_2 = arg4 >> 0x16;
    temp_v0_2 = arg4 & 0x3FFFFF;
    var_ft0_2 = (f64) temp_v0_2;
    temp_ft1 = ((D_800BA69C_ovl_01 - temp_ft0) * *((temp_t0 * 4) + &D_801360A0_ovl_01)) + (temp_ft0 * *(((temp_t0 + 1) * 4) + &D_801360A0_ovl_01));
    if (temp_v0_2 < 0) {
        var_ft0_2 += D_800BA6A0_ovl_01;
    }
    temp_ft0_2 = (f32) var_ft0_2 * D_800BA6A8_ovl_01;
    var_t1 = 0x800000 - arg4;
    *arg5 = (s16) (s32) (temp_ft1 * (((D_800BA69C_ovl_01 - temp_ft0_2) * *((temp_t0_2 * 4) + &D_801362A4_ovl_01)) + (temp_ft0_2 * *(((temp_t0_2 + 1) * 4) + &D_801362A4_ovl_01))) * D_800BA6AC_ovl_01 * D_800BA6B0_ovl_01);
    if (var_t1 > 0x7FFFFFU) {
        var_t1 = 0x7F0000;
    }
    temp_v0_3 = var_t1 & 0x3FFFFF;
    var_fv1 = (f64) temp_v0_3;
    temp_t0_3 = var_t1 >> 0x16;
    if (temp_v0_3 < 0) {
        var_fv1 += D_800BA6B8_ovl_01;
    }
    temp_ft0_3 = (f32) var_fv1 * D_800BA6A8_ovl_01;
    temp_ft1_2 = temp_ft1 * (((D_800BA69C_ovl_01 - temp_ft0_3) * *((temp_t0_3 * 4) + &D_801362A4_ovl_01)) + (temp_ft0_3 * *(((temp_t0_3 + 1) * 4) + &D_801362A4_ovl_01)));
    temp_v0_4 = arg3 & 0x3FFFFF;
    if (arg3 == 0x800000) {
        var_fv0 = temp_ft1_2 * D_800BA6C0_ovl_01 * D_800BA6B0_ovl_01;
        *arg0 = (s16) (s32) (temp_ft1_2 * D_800BA6AC_ovl_01 * D_800BA6B0_ovl_01);
    } else {
        var_fv1_2 = (f64) temp_v0_4;
        temp_t0_4 = arg3 >> 0x16;
        if (temp_v0_4 < 0) {
            var_fv1_2 += D_800BA6C8_ovl_01;
        }
        temp_ft0_4 = (f32) var_fv1_2 * D_800BA6A8_ovl_01;
        var_a3 = 0x800000 - arg3;
        *arg0 = (s16) (s32) (temp_ft1_2 * (((D_800BA69C_ovl_01 - temp_ft0_4) * *((temp_t0_4 * 4) + &D_801362A4_ovl_01)) + (temp_ft0_4 * *(((temp_t0_4 + 1) * 4) + &D_801362A4_ovl_01))) * D_800BA6B0_ovl_01);
        if (var_a3 > 0x7FFFFFU) {
            var_a3 = 0x7F0000;
        }
        temp_v0_5 = var_a3 & 0x3FFFFF;
        var_fv1_3 = (f64) temp_v0_5;
        temp_t0_5 = var_a3 >> 0x16;
        if (temp_v0_5 < 0) {
            var_fv1_3 += D_800BA6D0_ovl_01;
        }
        temp_ft0_5 = (f32) var_fv1_3 * D_800BA6A8_ovl_01;
        var_fv0 = temp_ft1_2 * (((D_800BA69C_ovl_01 - temp_ft0_5) * *((temp_t0_5 * 4) + &D_801362A4_ovl_01)) + (temp_ft0_5 * *(((temp_t0_5 + 1) * 4) + &D_801362A4_ovl_01))) * D_800BA6B0_ovl_01;
    }
    *arg1 = (s16) (s32) var_fv0;
    if (var_t4 > 0x7F0000U) {
        var_t4 = 0x7F0000;
    }
    temp_v0_6 = var_t4 & 0xFFFF;
    var_ft0_3 = (f64) temp_v0_6;
    temp_t0_6 = var_t4 >> 0x10;
    if (temp_v0_6 < 0) {
        var_ft0_3 += D_800BA6D8_ovl_01;
    }
    temp_ft0_6 = (f32) var_ft0_3 * D_800BA6E0_ovl_01;
    *arg7 = (s16) (s32) ((((D_800BA6E4_ovl_01 - temp_ft0_6) * *((temp_t0_6 * 4) + &D_801360A0_ovl_01)) + (temp_ft0_6 * *(((temp_t0_6 + 1) * 4) + &D_801360A0_ovl_01))) * D_800BA6E8_ovl_01 * D_800BA6EC_ovl_01);
}
