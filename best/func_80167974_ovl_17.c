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

s32 func_80167974_ovl_17(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_t0;
    s16 temp_v1;

    temp_t0 = M2C_FIELD(arg0, s16 *, 0x1A8);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x25E);
    if (temp_t0 < temp_v1) {
        if ((M2C_FIELD(arg0, s32 *, 0x2C) + arg1) >= temp_t0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_t0 + arg3);
            M2C_FIELD(arg0, s8 *, 0x2D6) = -1;
            return -1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x2C) + arg1) < temp_v1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v1 + arg2);
    M2C_FIELD(arg0, s8 *, 0x2D6) = 1;
    return 1;
}
