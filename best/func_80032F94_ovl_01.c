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

s16 func_80032F94_ovl_01(void *arg0, s32 arg1, s16 arg2) {
    s32 temp_a1;

    temp_a1 = (arg2 + (arg1 - M2C_FIELD(arg0, u16 *, 0x66))) & 0xFFF;
    if (temp_a1 < (arg2 * 2)) {
        return 0;
    }
    if ((u32) temp_a1 < 0x801U) {
        return arg2;
    }
    return -arg2;
}
