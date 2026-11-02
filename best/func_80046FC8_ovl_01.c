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

extern f32 D_800B88A4_ovl_01;
extern f32 D_800B88A8_ovl_01;
extern f32 D_800B88AC_ovl_01;
extern f32 D_800B88B0_ovl_01;
extern s32 D_800EFD34_ovl_01;
extern s32 D_800EFD44_ovl_01;
extern M2C_UNK D_800EFD90_ovl_01;
extern M2C_UNK D_800EFE08_ovl_01;
extern f32 D_80112798_ovl_01;
extern f32 D_8011279C_ovl_01;

void *func_80046FC8_ovl_01(void *arg0, void *arg1) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    s16 temp_v0;
    s16 var_t3;
    s32 temp_t4;
    s32 temp_t6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 temp_t5;
    void *temp_a1;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *var_t1;
    void *var_t1_2;

    temp_v0 = M2C_FIELD(arg1, s16 *, 8);
    temp_t5 = M2C_FIELD(arg1, u16 *, 0xA);
    var_t3 = temp_v0;
    if (temp_v0 < 0) {
        var_t3 = 0;
        if (-temp_v0 >= (s32) M2C_FIELD(arg1, u16 *, 0xC)) {
            return arg0;
        }
    }
    temp_t1 = arg0 + 8;
    M2C_FIELD(arg0, s32 *, 0) = 0xE7000000;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_t6 = M2C_FIELD(arg1, u16 *, 0xA) + M2C_FIELD(arg1, u16 *, 0xE);
    temp_t4 = (u16) M2C_FIELD(arg1, s16 *, 8) + M2C_FIELD(arg1, u16 *, 0xC);
    if ((D_800EFD34_ovl_01 == -1) || (D_800EFD44_ovl_01 != 0)) {
        temp_t1_2 = temp_t1 + 8;
        var_t1_2 = temp_t1_2 + 8;
        M2C_FIELD(arg0, s32 *, 8) = 0xDE000000;
        M2C_FIELD(temp_t1, M2C_UNK **, 4) = &D_800EFD90_ovl_01;
        M2C_FIELD(temp_t1, s32 *, 8) = 0xD7000000;
        M2C_FIELD(temp_t1_2, s32 *, 4) = 0x80008000;
        D_800EFD44_ovl_01 = 0;
    } else {
        var_t1_2 = temp_t1 + 8;
        M2C_FIELD(arg0, s32 *, 8) = 0xDE000000;
        M2C_FIELD(temp_t1, M2C_UNK **, 4) = &D_800EFE08_ovl_01;
    }
    temp_t1_3 = var_t1_2 + 8;
    temp_t1_4 = temp_t1_3 + 8;
    var_t1 = temp_t1_4 + 8;
    M2C_FIELD(var_t1_2, s32 *, 0) = 0xE200001C;
    M2C_FIELD(var_t1_2, s32 *, 4) = 0x504240;
    M2C_FIELD(var_t1_2, s32 *, 8) = 0xFA000000;
    temp_fv0 = (f32) (var_t3 & 0xFFFF) * D_80112798_ovl_01;
    M2C_FIELD(temp_t1_3, s32 *, 4) = (s32) ((M2C_FIELD(arg1, u8 *, 4) << 0x18) | (M2C_FIELD(arg1, u8 *, 5) << 0x10) | (M2C_FIELD(arg1, u8 *, 6) << 8) | M2C_FIELD(arg1, u8 *, 7));
    M2C_FIELD(temp_t1_3, s32 *, 8) = 0xFCFFFFFF;
    M2C_FIELD(temp_t1_4, s32 *, 4) = 0xFFFDF6FB;
    if (!(D_800B88A4_ovl_01 <= temp_fv0)) {
        var_a0 = (s32) temp_fv0;
        var_v1 = temp_t4 & 0xFFFF;
    } else {
        var_a0 = (s32) (temp_fv0 - D_800B88A4_ovl_01) | 0x80000000;
        var_v1 = temp_t4 & 0xFFFF;
    }
    temp_fv0_2 = (f32) var_v1 * D_80112798_ovl_01;
    if (!(D_800B88A8_ovl_01 <= temp_fv0_2)) {
        var_a0_2 = (s32) temp_fv0_2;
        var_v1_2 = temp_t5 & 0xFFFF;
    } else {
        var_a0_2 = (s32) (temp_fv0_2 - D_800B88A8_ovl_01) | 0x80000000;
        var_v1_2 = temp_t5 & 0xFFFF;
    }
    temp_fv0_3 = (f32) var_v1_2 * D_8011279C_ovl_01;
    if (!(D_800B88AC_ovl_01 <= temp_fv0_3)) {
        var_a0_3 = (s32) temp_fv0_3;
        var_v1_3 = temp_t6 & 0xFFFF;
    } else {
        var_a0_3 = (s32) (temp_fv0_3 - D_800B88AC_ovl_01) | 0x80000000;
        var_v1_3 = temp_t6 & 0xFFFF;
    }
    temp_fv0_4 = (f32) var_v1_3 * D_8011279C_ovl_01;
    if (!(D_800B88B0_ovl_01 <= temp_fv0_4)) {
        var_v1_4 = (s32) temp_fv0_4;
    } else {
        var_v1_4 = (s32) (temp_fv0_4 - D_800B88B0_ovl_01) | 0x80000000;
    }
    if (M2C_FIELD(arg1, u16 *, 0xC) != 0) {
        temp_a1 = var_t1;
        if (M2C_FIELD(arg1, u16 *, 0xE) != 0) {
            var_t1 += 8;
            M2C_FIELD(temp_a1, s32 *, 0) = (s32) (((var_a0_2 & 0x3FF) << 0xE) | (((var_v1_4 & 0x3FF) * 4) | 0xF6000000));
            M2C_FIELD(temp_a1, s32 *, 4) = (s32) (((var_a0 & 0x3FF) << 0xE) | ((var_a0_3 & 0x3FF) * 4));
        }
    }
    return var_t1;
}
