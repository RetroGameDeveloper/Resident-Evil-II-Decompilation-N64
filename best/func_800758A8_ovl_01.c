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

s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
M2C_UNK func_800AA658_ovl_01(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern f64 D_800B9998_ovl_01;
extern M2C_UNK D_80119D28_ovl_01;
extern M2C_UNK D_80119D34_ovl_01;
extern M2C_UNK D_80119D40_ovl_01;
extern M2C_UNK D_80119D4C_ovl_01;
extern M2C_UNK D_8013A110;

void func_800758A8_ovl_01(void *arg0, void *arg1) {
    f32 temp_fv1;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    M2C_FIELD(&D_80119D28_ovl_01, f32 *, 0) = (f32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_80119D28_ovl_01, f32 *, 4) = (f32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_80119D28_ovl_01, f32 *, 8) = (f32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_80119D34_ovl_01, f32 *, 0) = (f32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(&D_80119D34_ovl_01, f32 *, 4) = (f32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(&D_80119D34_ovl_01, f32 *, 8) = (f32) M2C_FIELD(arg1, s32 *, 8);
    temp_s0 = M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0);
    temp_lo = temp_s0 * temp_s0;
    temp_s1 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg0, s32 *, 4);
    temp_s2 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg0, s32 *, 8);
    temp_fv1 = (f32) (D_800B9998_ovl_01 / (f64) (f32) func_80040BE4_ovl_01(temp_lo + (temp_s1 * temp_s1) + (temp_s2 * temp_s2), temp_lo));
    M2C_FIELD(&D_80119D40_ovl_01, f32 *, 0) = (f32) (temp_fv1 * (f32) temp_s0);
    M2C_FIELD(&D_80119D40_ovl_01, f32 *, 4) = (f32) (temp_fv1 * (f32) temp_s1);
    M2C_FIELD(&D_80119D40_ovl_01, f32 *, 8) = (f32) (temp_fv1 * (f32) temp_s2);
    func_800AA658_ovl_01(&D_8013A110, &D_80119D28_ovl_01, &D_80119D34_ovl_01, &D_80119D40_ovl_01, &D_80119D4C_ovl_01, 0x7F);
}
