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

void *func_80010500(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 temp_a1;
    s32 temp_lo;

    temp_lo = arg1 / arg2;
    sp0 = temp_lo;
    temp_a1 = arg1 - (arg2 * temp_lo);
    sp4 = temp_a1;
    if ((temp_lo < 0) && (temp_a1 > 0)) {
        sp0 = temp_lo + 1;
        sp4 = temp_a1 - arg2;
    }
    M2C_FIELD(arg0, s32 *, 0) = sp0;
    M2C_FIELD(arg0, s32 *, 4) = sp4;
    return arg0;
}
