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

extern f32 D_800B8904_ovl_01;
extern f32 D_800B8908_ovl_01;
extern M2C_UNK D_800F01A0_ovl_01;

f32 func_80048090_ovl_01(f32 arg0) {
    s32 sp0;
    f32 temp_fa0;
    f32 temp_fv0;

    temp_fa0 = arg0 * D_800B8904_ovl_01;
    sp0 = (((u32) (0x17C - ((M2C_BITWISE(u32, arg0) >> 0x17) & 0xFF)) >> 1) << 0x17) | (*(((M2C_BITWISE(u32, arg0) >> 0x10) & 0xFF) + &D_800F01A0_ovl_01) << 0xF);
    if (temp_fa0 == 0.0f) {
        sp0 = 0;
    }
    temp_fv0 = M2C_BITWISE(f32, sp0) * (D_800B8908_ovl_01 - (M2C_BITWISE(f32, sp0) * M2C_BITWISE(f32, sp0) * temp_fa0));
    return (D_800B8908_ovl_01 - (temp_fv0 * temp_fv0 * temp_fa0)) * temp_fv0;
}
