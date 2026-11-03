/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80009470(void *, void *, f32, f32, f32, f32, f32); /* extern */
f32 func_80047DA0_ovl_01(f32, f32, s16 *);          /* extern */
extern f64 D_800B87F0_ovl_01;
extern f64 D_800B87F8_ovl_01;
extern f32 D_800B8800_ovl_01;
extern f32 D_800B8804_ovl_01;
extern f32 D_800B8808_ovl_01;
extern f32 D_800B880C_ovl_01;
extern f32 D_800B8810_ovl_01;
extern f32 D_800EFBE4_ovl_01;
extern f32 D_800EFBE8_ovl_01;
extern f32 D_800EFBEC_ovl_01;
extern s16 D_800EFBF0_ovl_01;
extern s16 D_800EFBF2_ovl_01;
extern f32 D_800EFBF4_ovl_01;
extern f32 D_800EFBF8_ovl_01;
extern M2C_UNK D_801314F0_ovl_01;

void func_80042910_ovl_01(s16 arg0) {
    f32 temp_fv0_2;
    f64 temp_ft1;
    f64 temp_fv0;
    s32 temp_v1;

    temp_v1 = arg0 << 7;
    temp_fv0 = (f64) temp_v1;
    temp_ft1 = D_800B87F0_ovl_01 - temp_fv0;
    D_800EFBF0_ovl_01 = arg0;
    M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x98) = temp_v1;
    D_800EFBF4_ovl_01 = (f32) ((temp_fv0 + D_800B87F0_ovl_01) / temp_ft1);
    D_800EFBF2_ovl_01 = (arg0 * 0xF0) / 224;
    D_800EFBF8_ovl_01 = (f32) ((temp_fv0 * D_800B87F8_ovl_01) / temp_ft1);
    temp_fv0_2 = func_80047DA0_ovl_01(D_800EFBEC_ovl_01 / (f32) arg0, D_800B8800_ovl_01, &D_800EFBF2_ovl_01);
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1B8) = (f32) ((f32) M2C_FIELD(&D_801314F0_ovl_01, s32 *, 0x98) * D_800B8804_ovl_01);
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1BC) = (f32) (D_800EFBE8_ovl_01 / D_800B8808_ovl_01);
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1B4) = (f32) D_800B880C_ovl_01;
    M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1B0) = (f32) (temp_fv0_2 * D_800B8810_ovl_01);
    func_80009470(&D_801314F0_ovl_01 + 0xB0, &D_801314F0_ovl_01 + 0x1C0, M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1B0), M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1BC), D_800B880C_ovl_01, M2C_FIELD(&D_801314F0_ovl_01, f32 *, 0x1B8), D_800EFBE4_ovl_01);
}
