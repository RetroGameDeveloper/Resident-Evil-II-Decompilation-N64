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

s32 func_800675A8_ovl_01(void *arg0, s32 arg1, void *arg2) {
    s32 temp_t0;
    u16 temp_t1;

    temp_t0 = arg1 * 2;
    temp_t1 = M2C_FIELD(arg2, u16 *, 6);
    return ((s32) ((M2C_FIELD(arg0, s32 *, 0) - (M2C_FIELD(arg2, s16 *, 0) - arg1)) * (-(s32) temp_t1 - temp_t0)) / (s32) (M2C_FIELD(arg2, u16 *, 4) + temp_t0)) < (M2C_FIELD(arg0, s32 *, 8) - (M2C_FIELD(arg2, s16 *, 2) + temp_t1 + arg1));
}
