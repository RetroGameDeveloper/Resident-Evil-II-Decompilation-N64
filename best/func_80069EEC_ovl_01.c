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

s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */

s32 func_80069EEC_ovl_01(void *arg0, s32 arg1, void *arg3) {
    s32 temp_lo;
    s32 temp_v0;
    u32 temp_s0;

    temp_s0 = (u16) M2C_FIELD(arg3, u16 *, 6) >> 1;
    temp_lo = temp_s0 * temp_s0;
    temp_v0 = (M2C_FIELD(arg3, s16 *, 2) + temp_s0) - M2C_FIELD(arg0, s32 *, 8);
    return (arg1 - temp_s0) + func_80040BE4_ovl_01(temp_lo - (temp_v0 * temp_v0), temp_lo);
}
