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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_800A3204_ovl_01(u16);                  /* extern */
M2C_UNK func_800A3458_ovl_01(s32);                  /* extern */
extern f64 D_800BA570_ovl_01;
extern f32 D_800BA578_ovl_01;
extern f32 D_800BA57C_ovl_01;
extern f32 D_800BA580_ovl_01;
extern f32 D_800BA584_ovl_01;
extern f64 D_800BA588_ovl_01;
extern f32 D_800BA590_ovl_01;
extern f32 D_800BA594_ovl_01;
extern f32 D_800BA598_ovl_01;
extern f32 D_800BA59C_ovl_01;
extern f64 D_800BA5A0_ovl_01;
extern f32 D_800BA5A8_ovl_01;
extern f32 D_800BA5AC_ovl_01;
extern M2C_UNK D_80135C40_ovl_01;
extern u16 D_80143EC0;
extern s32 D_80143EC4;
extern M2C_UNK D_80143ED0;
extern M2C_UNK D_80143EE8;
extern s8 D_80143EEC;
extern u8 D_80143F88;
extern s32 D_80143F8C;
extern s32 (*D_80143FA8)(s32, M2C_UNK, s32 *, u16);

void func_800A2B70_ovl_01(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_fv0;
    f32 var_fv0;
    f32 var_fv0_2;
    f64 var_ft0;
    f64 var_fv1;
    f64 var_fv1_2;
    s32 temp_lo_2;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;
    u16 temp_lo;

    if (D_80143F88 == 0) {
        var_fv1 = (f64) arg1;
        var_a0 = arg0 & 0xFFFF;
        if (arg1 < 0) {
            var_fv1 += D_800BA570_ovl_01;
        }
        var_fv0 = (((f32) var_fv1 / D_800BA578_ovl_01) * D_800BA57C_ovl_01) / D_800BA580_ovl_01;
        if (D_800BA584_ovl_01 <= var_fv0) {
            var_fv0_2 = var_fv0 - D_800BA584_ovl_01;
            goto block_11;
        }
        goto block_10;
    }
    var_fv1_2 = (f64) arg1;
    var_a0 = arg0 & 0xFFFF;
    if (arg1 < 0) {
        var_fv1_2 += D_800BA588_ovl_01;
    }
    var_fv0 = (((f32) var_fv1_2 / D_800BA590_ovl_01) * D_800BA594_ovl_01) / D_800BA598_ovl_01;
    if (D_800BA59C_ovl_01 <= var_fv0) {
        var_fv0_2 = var_fv0 - D_800BA59C_ovl_01;
block_11:
        var_v0 = ((s32) var_fv0_2 | 0x80000000) & 0xFFFF;
    } else {
block_10:
        var_v0 = (s32) var_fv0 & 0xFFFF;
    }
    temp_lo = var_a0 * (var_v0 + 1);
    D_80143EC0 = temp_lo;
    temp_lo_2 = D_80143EC0 * 0x310;
    D_80143EC4 = 0x310;
    var_ft0 = (f64) temp_lo_2;
    if (temp_lo_2 < 0) {
        var_ft0 += D_800BA5A0_ovl_01;
    }
    temp_fv0 = (f32) var_ft0 * D_800BA5A8_ovl_01;
    if (D_800BA5AC_ovl_01 <= temp_fv0) {
        var_v1 = (s32) (temp_fv0 - D_800BA5AC_ovl_01) | 0x80000000;
    } else {
        var_v1 = (s32) temp_fv0;
    }
    D_80143EC4 = var_v1;
    D_80143EC4 = ((((u32) (D_80143EC4 + 0x3F) >> 6) * 0x28) + 0xF) & 0xFFF0;
    D_80143F8C = D_80143FA8(D_80143EC0 * 0x18, 0, &D_80143EC4, temp_lo);
    func_80006D30(&D_80143ED0, &D_80143EE8, 1);
    D_80143EEC = 0;
    func_800A3204_ovl_01(D_80143EC0);
    func_800A3458_ovl_01((*(((arg2 & 0xFF) * 2) + &D_80135C40_ovl_01) * arg0) & 0xFFFF);
}
