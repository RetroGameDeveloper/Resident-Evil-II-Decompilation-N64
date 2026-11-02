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

extern M2C_UNK D_8001F7C0_ovl_01;
extern f64 D_800B69D0_ovl_01;
extern f32 D_800B69D8_ovl_01;
extern f64 D_800B69E0_ovl_01;
extern f64 D_800B69E8_ovl_01;
extern f64 D_800B69F0_ovl_01;
extern M2C_UNK D_800BC5D0_ovl_01;
extern void *D_800C5690_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800D0F80_ovl_01;
extern M2C_UNK D_800DE400_ovl_01;
extern M2C_UNK D_800EFC00_ovl_01;
extern M2C_UNK D_800EFC68_ovl_01;
extern s32 D_8010B69C_ovl_01;
extern s32 D_80113778_ovl_01;
extern s32 D_8011377C_ovl_01;

void func_80025130_ovl_01(void) {
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    f64 var_fv1_4;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    var_fv1 = (f64) D_80113778_ovl_01;
    M2C_FIELD(D_800C5690_ovl_01, M2C_UNK **, 0x10) = &D_8001F7C0_ovl_01;
    temp_a2 = M2C_FIELD(D_800C5690_ovl_01, void **, 0x30);
    M2C_FIELD(D_800C5690_ovl_01, M2C_UNK **, 0x18) = &D_800BC5D0_ovl_01;
    temp_a2_2 = temp_a2 + 8;
    temp_a2_3 = temp_a2_2 + 8;
    temp_a2_4 = temp_a2_3 + 8;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xDB060000;
    M2C_FIELD(temp_a2, s32 *, 4) = 0;
    M2C_FIELD(temp_a2, s32 *, 8) = 0xDE000000;
    M2C_FIELD(temp_a2_2, M2C_UNK **, 4) = &D_800EFC68_ovl_01;
    M2C_FIELD(temp_a2_2, s32 *, 8) = 0xED000000;
    if (D_80113778_ovl_01 < 0) {
        var_fv1 += D_800B69D0_ovl_01;
    }
    var_fv1_2 = (f64) D_8011377C_ovl_01;
    if (D_8011377C_ovl_01 < 0) {
        var_fv1_2 += D_800B69E0_ovl_01;
    }
    M2C_FIELD(temp_a2_3, s32 *, 4) = (s32) ((((s32) ((f32) var_fv1 * D_800B69D8_ovl_01) & 0xFFF) << 0xC) | ((s32) ((f32) var_fv1_2 * D_800B69D8_ovl_01) & 0xFFF));
    M2C_FIELD(temp_a2_3, s32 *, 8) = 0xFE000000;
    M2C_FIELD(temp_a2_4, s32 *, 4) = (s32) D_8010B69C_ovl_01;
    M2C_FIELD((temp_a2_4 + 8), M2C_UNK **, 4) = &D_800D0F80_ovl_01;
    M2C_FIELD(temp_a2_4, s32 *, 8) = 0xDE010000;
    temp_v1 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204);
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204) = (void *) (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204) + 8);
    M2C_FIELD(temp_v1, s32 *, 0) = 0xDE000000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = &D_800EFC00_ovl_01;
    temp_v1_2 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204);
    var_fv1_3 = (f64) D_80113778_ovl_01;
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204) = (void *) (temp_v1_2 + 8);
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xED000000;
    if (D_80113778_ovl_01 < 0) {
        var_fv1_3 += D_800B69E8_ovl_01;
    }
    var_fv1_4 = (f64) D_8011377C_ovl_01;
    if (D_8011377C_ovl_01 < 0) {
        var_fv1_4 += D_800B69F0_ovl_01;
    }
    M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) ((((s32) ((f32) var_fv1_3 * D_800B69D8_ovl_01) & 0xFFF) << 0xC) | ((s32) ((f32) var_fv1_4 * D_800B69D8_ovl_01) & 0xFFF));
    temp_v1_3 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204);
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204) = (void *) (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18204) + 8);
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xDE010000;
    M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = &D_800DE400_ovl_01;
    temp_v1_4 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208);
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208) = (void *) (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208) + 8);
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xE9000000;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0;
    temp_v1_5 = M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208);
    M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208) = (void *) (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18208) + 8);
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xDF000000;
    M2C_FIELD(temp_v1_5, s32 *, 4) = 0;
    M2C_FIELD(D_800C5690_ovl_01, s32 *, 4) = 6;
    M2C_FIELD(D_800C5690_ovl_01, s32 *, 0x34) = 0;
}
