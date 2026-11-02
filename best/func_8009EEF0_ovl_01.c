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

M2C_UNK func_8000EFA0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_8000F020();                            /* extern */
s32 func_80031A50_ovl_01(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8006C074_ovl_01(M2C_UNK *, M2C_UNK);   /* extern */
extern f64 D_800BA4A0_ovl_01;
extern f64 D_800BA4A8_ovl_01;
extern f64 D_800BA4B0_ovl_01;
extern f64 D_800BA4B8_ovl_01;
extern f64 D_800BA4C0_ovl_01;
extern f64 D_800BA4C8_ovl_01;
extern f64 D_800BA4D0_ovl_01;
extern f64 D_800BA4D8_ovl_01;
extern f64 D_800BA4E0_ovl_01;
extern f64 D_800BA4E8_ovl_01;
extern f64 D_800BA4F0_ovl_01;
extern f64 D_800BA4F8_ovl_01;
extern f64 D_800BA500_ovl_01;
extern f64 D_800BA508_ovl_01;
extern f64 D_800BA510_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_801331F0_ovl_01;
extern M2C_UNK D_80133230_ovl_01;
extern M2C_UNK D_80134338_ovl_01;
extern s32 D_80134494_ovl_01;

void func_8009EEF0_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    f64 temp_fv0;
    f64 temp_fv0_2;
    f64 temp_fv0_3;
    f64 var_ft0;
    f64 var_ft0_2;
    f64 var_fv1;
    f64 var_fv1_2;
    f64 var_fv1_3;
    s32 var_s1;
    s32 var_s4;
    s32 var_s7;
    s32 var_t2;
    s32 var_v0;
    s32 var_v1;
    u32 var_s0;
    u32 var_s3;

    var_fv1 = (f64) arg2;
    if (arg2 < 0) {
        var_fv1 += D_800BA4A0_ovl_01;
    }
    var_ft0 = (f64) arg4;
    if (arg4 < 0) {
        var_ft0 += D_800BA4B0_ovl_01;
    }
    temp_fv0 = (((f64) (f32) var_fv1 * D_800BA4A8_ovl_01) / (f64) (f32) var_ft0) + D_800BA4B8_ovl_01;
    if (D_800BA4C0_ovl_01 <= temp_fv0) {
        var_t2 = (s32) (temp_fv0 - D_800BA4C0_ovl_01) | 0x80000000;
        var_v0 = arg3 - 1;
    } else {
        var_t2 = (s32) temp_fv0;
        var_v0 = arg3 - 1;
    }
    var_fv1_2 = (f64) var_v0;
    if (var_v0 < 0) {
        var_fv1_2 += D_800BA4C8_ovl_01;
    }
    var_ft0_2 = (f64) arg5;
    if (arg5 < 0) {
        var_ft0_2 += D_800BA4D8_ovl_01;
    }
    temp_fv0_2 = (((f64) (f32) var_fv1_2 * D_800BA4D0_ovl_01) / (f64) (f32) var_ft0_2) + D_800BA4E0_ovl_01;
    if (D_800BA4E8_ovl_01 <= temp_fv0_2) {
        var_s4 = (s32) (temp_fv0_2 - D_800BA4E8_ovl_01) | 0x80000000;
    } else {
        var_s4 = (s32) temp_fv0_2;
    }
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0) = (s32) (arg0 & 0x0FFFFFFF);
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 4) = (s32) (arg1 & 0x0FFFFFFF);
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 8) = arg4;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x10) = var_t2;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x14) = var_s4;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x20) = 0;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x24) = 0;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x40) = 0xFFFF7FFF;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x44) = 0x30004;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x48) = 0x100F8;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x4C) = 0x40000008;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x50) = 0x800007;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x54) = 0x800000FF;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x18) = (s32) (arg6 * 2);
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x1C) = (s32) ((s32) &D_80133230_ovl_01 & 0x0FFFFFFF);
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x58) = (s32) (var_t2 * 8);
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x5C) = var_s4;
    M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x60) = (s32) (func_80031A50_ovl_01(((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215F8) + 1) << 0xC) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FA) * 0x10) + M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC), 0x800007, 0x40000008, 0x100F8) | 0x03C00000);
    func_8000F020();
    var_fv1_3 = (f64) arg5;
    if (arg5 < 0) {
        var_fv1_3 += D_800BA4F0_ovl_01;
    }
    temp_fv0_3 = (((f64) (f32) var_fv1_3 * D_800BA4F8_ovl_01) / D_800BA500_ovl_01) + D_800BA508_ovl_01;
    if (D_800BA510_ovl_01 <= temp_fv0_3) {
        var_v1 = (s32) (temp_fv0_3 - D_800BA510_ovl_01) | 0x80000000;
        var_s7 = var_v1 & 0xFFFF;
    } else {
        var_v1 = (s32) temp_fv0_3;
        var_s7 = var_v1 & 0xFFFF;
    }
    var_s1 = 0;
    var_s3 = 0;
    do {
        var_s1 += var_s7;
        var_s0 = (u32) var_v1 >> 0x10;
        if (var_s1 & 0xFFFF0000) {
            var_s1 &= 0xFFFF;
            var_s0 += 1;
        }
        M2C_FIELD(&D_80134338_ovl_01, u32 *, 0xC) = var_s0;
        func_8000EFA0(&D_80134338_ovl_01, 0x80);
        D_80134494_ovl_01 = 2;
        func_8006C074_ovl_01(&D_801331F0_ovl_01, 1);
        if (D_80134494_ovl_01 != 0) {
            do {

            } while (D_80134494_ovl_01 != 0);
        }
        var_s3 += 1;
        M2C_FIELD(&D_80134338_ovl_01, s32 *, 4) = (s32) (M2C_FIELD(&D_80134338_ovl_01, s32 *, 4) + (arg6 * (var_s0 * 2)));
        M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x24) = (s32) (M2C_FIELD(&D_80134338_ovl_01, s32 *, 0x24) + (var_s0 * var_s4));
    } while (var_s3 < 6U);
}
