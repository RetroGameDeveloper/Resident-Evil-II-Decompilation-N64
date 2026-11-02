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

f32 func_80048090_ovl_01(f32);                      /* extern */
extern f32 D_800B88E0_ovl_01;
extern f32 D_800B88E4_ovl_01;
extern f32 D_800B88E8_ovl_01;
extern f32 D_800B88EC_ovl_01;
extern f32 D_800B88F0_ovl_01;
extern f32 D_800B88F4_ovl_01;
extern f32 D_800B88F8_ovl_01;
extern f32 D_800B88FC_ovl_01;
extern f32 D_800B8900_ovl_01;
extern M2C_UNK D_800F145C_ovl_01;

f32 func_80047DA0_ovl_01(f32 arg0, f32 arg1) {
    f32 temp_fv0;
    f32 var_ft1;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    f32 var_fv1_4;
    f32 var_fv1_5;
    s32 temp_ft2;
    s32 temp_ft2_2;
    s32 temp_ft2_3;
    s32 temp_ft2_4;
    s32 temp_ft2_5;
    s32 var_v0;

    temp_fv0 = func_80048090_ovl_01((arg1 * arg1) + (arg0 * arg0));
    var_ft1 = arg0;
    if (arg0 < 0.0f) {
        var_ft1 = -arg0;
    }
    var_fv1_5 = arg1;
    if (arg1 < 0.0f) {
        var_fv1_5 = -arg1;
    }
    var_v0 = 1;
    if (!(var_ft1 < var_fv1_5)) {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        if (arg1 < 0.0f) {
            if (arg0 < 0.0f) {
                temp_ft2_2 = (s32) (arg0 * temp_fv0 * D_800B88E0_ovl_01);
                if (temp_ft2_2 >= 0) {
                    var_fv1_4 = *((temp_ft2_2 * 4) + &D_800F145C_ovl_01);
                } else {
                    var_fv1_4 = -*(&D_800F145C_ovl_01 - (temp_ft2_2 * 4));
                }
                return -(var_fv1_4 + D_800B88E4_ovl_01);
            }
            temp_ft2_3 = (s32) (arg0 * temp_fv0 * D_800B88E8_ovl_01);
            if (temp_ft2_3 >= 0) {
                var_fv1_3 = *((temp_ft2_3 * 4) + &D_800F145C_ovl_01);
            } else {
                var_fv1_3 = -*(&D_800F145C_ovl_01 - (temp_ft2_3 * 4));
            }
            return D_800B88EC_ovl_01 - var_fv1_3;
        }
        temp_ft2 = (s32) (arg0 * temp_fv0 * D_800B88F0_ovl_01);
        if (temp_ft2 >= 0) {
            return *((temp_ft2 * 4) + &D_800F145C_ovl_01);
        }
        return -*(&D_800F145C_ovl_01 - (temp_ft2 * 4));
    }
    if (arg0 < 0.0f) {
        temp_ft2_4 = (s32) (arg1 * temp_fv0 * D_800B88F4_ovl_01);
        if (temp_ft2_4 >= 0) {
            var_fv1_2 = *((temp_ft2_4 * 4) + &D_800F145C_ovl_01);
        } else {
            var_fv1_2 = -*(&D_800F145C_ovl_01 - (temp_ft2_4 * 4));
        }
        return var_fv1_2 + D_800B88F8_ovl_01;
    }
    temp_ft2_5 = (s32) (arg1 * temp_fv0 * D_800B88FC_ovl_01);
    if (temp_ft2_5 >= 0) {
        var_fv1 = *((temp_ft2_5 * 4) + &D_800F145C_ovl_01);
    } else {
        var_fv1 = -*(&D_800F145C_ovl_01 - (temp_ft2_5 * 4));
    }
    return D_800B8900_ovl_01 - var_fv1;
}
