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

f32 func_80006BE0(M2C_UNK);                         /* extern */
f32 func_8000D050(M2C_UNK);                         /* extern */
f32 func_80048090_ovl_01(f32);                      /* extern */
extern f32 D_800B8990_ovl_01;
extern f32 D_800B8994_ovl_01;
extern f32 D_800B8998_ovl_01;
extern f32 D_800B899C_ovl_01;
extern f32 D_800B89A0_ovl_01;

void func_80048DC0_ovl_01(void *arg0, void *arg1, M2C_UNK arg2) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 var_fs2;
    f32 var_fs3;
    f32 var_fs4;
    f32 var_fv0;
    f32 var_fv1;
    void *temp_v0;
    void *temp_v0_2;

    temp_ft3 = M2C_FIELD(arg1, f32 *, 0);
    temp_ft1 = M2C_FIELD(arg1, f32 *, 4);
    temp_ft2 = M2C_FIELD(arg1, f32 *, 8);
    temp_fv1 = (temp_ft3 * temp_ft3) + (temp_ft1 * temp_ft1) + (temp_ft2 * temp_ft2);
    if (temp_fv1 < D_800B8990_ovl_01) {
        temp_v0 = arg0 + 0xC;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0xC) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0) = (f32) D_800B8994_ovl_01;
        M2C_FIELD(temp_v0, f32 *, 4) = (f32) D_800B8994_ovl_01;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        temp_v0_2 = arg0 + 0x18;
        M2C_FIELD(arg0, f32 *, 0x18) = 0.0f;
        M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
        M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) D_800B8994_ovl_01;
        return;
    }
    var_fs4 = temp_ft3;
    var_fs3 = temp_ft1;
    var_fs2 = temp_ft2;
    if ((D_800B8998_ovl_01 < temp_fv1) || (temp_fv1 < D_800B899C_ovl_01)) {
        temp_fv0 = func_80048090_ovl_01(temp_fv1);
        var_fs4 *= temp_fv0;
        var_fs3 *= temp_fv0;
        var_fs2 *= temp_fv0;
    }
    temp_ft1_2 = func_80006BE0(arg2);
    temp_fv0_2 = D_800B89A0_ovl_01 - temp_ft1_2;
    if (var_fs4 == 0.0f) {
        temp_fs0 = temp_fv0_2 * var_fs3;
        M2C_FIELD(arg0, f32 *, 0) = temp_ft1_2;
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_fs0 * var_fs3) + temp_ft1_2);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_fv0_2 * var_fs2 * var_fs2) + temp_ft1_2);
        temp_fv0_3 = func_8000D050(arg2);
        temp_fv1_2 = -temp_fv0_3;
        temp_fs0_2 = temp_fs0 * var_fs2;
        M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_fv0_3 * var_fs2);
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_fv1_2 * var_fs2);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_fv1_2 * var_fs3);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_fv0_3 * var_fs3);
        M2C_FIELD(arg0, f32 *, 0x14) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_fs0_2;
        return;
    }
    if (var_fs3 == 0.0f) {
        temp_fs0_3 = temp_fv0_2 * var_fs4;
        M2C_FIELD(arg0, f32 *, 0x10) = temp_ft1_2;
        M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fs0_3 * var_fs4) + temp_ft1_2);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_fv0_2 * var_fs2 * var_fs2) + temp_ft1_2);
        temp_fv0_4 = func_8000D050(arg2);
        temp_fv1_3 = -temp_fv0_4;
        temp_fs0_4 = temp_fs0_3 * var_fs2;
        var_fv0 = temp_fv0_4 * var_fs4;
        var_fv1 = temp_fv1_3 * var_fs4;
        M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_fv0_4 * var_fs2);
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_fv1_3 * var_fs2);
        M2C_FIELD(arg0, f32 *, 8) = temp_fs0_4;
        M2C_FIELD(arg0, f32 *, 0x18) = temp_fs0_4;
        goto block_13;
    }
    if (var_fs2 != 0.0f) {
        temp_fs0_5 = temp_fv0_2 * var_fs4;
        temp_fs1 = temp_fv0_2 * var_fs3;
        M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fs0_5 * var_fs4) + temp_ft1_2);
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_fs1 * var_fs3) + temp_ft1_2);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((temp_fv0_2 * var_fs2 * var_fs2) + temp_ft1_2);
        temp_fv0_5 = func_8000D050(arg2);
        temp_fv1_4 = temp_fs0_5 * var_fs3;
        temp_ft0 = temp_fv0_5 * var_fs2;
        temp_fs0_6 = temp_fs0_5 * var_fs2;
        temp_ft1_3 = temp_fv0_5 * var_fs3;
        temp_fs1_2 = temp_fs1 * var_fs2;
        temp_fv0_6 = temp_fv0_5 * var_fs4;
        M2C_FIELD(arg0, f32 *, 4) = (f32) (temp_fv1_4 + temp_ft0);
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (temp_fv1_4 - temp_ft0);
        M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_fs0_6 - temp_ft1_3);
        M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_fs0_6 + temp_ft1_3);
        M2C_FIELD(arg0, f32 *, 0x14) = (f32) (temp_fs1_2 + temp_fv0_6);
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (temp_fs1_2 - temp_fv0_6);
        return;
    }
    temp_fs0_7 = temp_fv0_2 * var_fs4;
    M2C_FIELD(arg0, f32 *, 0x20) = temp_ft1_2;
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_fs0_7 * var_fs4) + temp_ft1_2);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) ((temp_fv0_2 * var_fs3 * var_fs3) + temp_ft1_2);
    temp_fv0_7 = func_8000D050(arg2);
    temp_fs0_8 = temp_fs0_7 * var_fs3;
    temp_fv1_5 = -temp_fv0_7;
    var_fv0 = temp_fv0_7 * var_fs4;
    var_fv1 = temp_fv1_5 * var_fs4;
    M2C_FIELD(arg0, f32 *, 4) = temp_fs0_8;
    M2C_FIELD(arg0, f32 *, 0xC) = temp_fs0_8;
    M2C_FIELD(arg0, f32 *, 8) = (f32) (temp_fv1_5 * var_fs3);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (temp_fv0_7 * var_fs3);
block_13:
    M2C_FIELD(arg0, f32 *, 0x14) = var_fv0;
    M2C_FIELD(arg0, f32 *, 0x1C) = var_fv1;
}
