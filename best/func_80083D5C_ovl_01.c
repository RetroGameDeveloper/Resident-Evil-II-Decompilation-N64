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

s32 func_80083D5C_ovl_01(void *arg0, void *arg1) {
    s16 temp_t1;
    s16 temp_t4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v1;

    temp_t4 = M2C_FIELD(arg1, s16 *, 4);
    temp_t1 = M2C_FIELD(arg1, s16 *, 6);
    temp_t2 = M2C_FIELD(arg0, s32 *, 8) - temp_t1;
    temp_t3 = M2C_FIELD(arg1, s16 *, 8) - temp_t4;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0) - temp_t4;
    temp_a2 = M2C_FIELD(arg1, s16 *, 0xA) - temp_t1;
    temp_a3 = M2C_FIELD(arg1, s16 *, 0x10) - temp_t4;
    temp_t0 = M2C_FIELD(arg1, s16 *, 0x12) - temp_t1;
    if (((temp_a2 * temp_a0) < (temp_t3 * temp_t2)) || ((temp_a3 * temp_t2) < (temp_t0 * temp_a0))) {
        /* Duplicate return node #2. Try simplifying control flow for better match */
        return 0;
    }
    temp_v1 = M2C_FIELD(arg1, s16 *, 0xE) - temp_t1;
    temp_t2_2 = temp_t2 - temp_v1;
    temp_v0 = M2C_FIELD(arg1, s16 *, 0xC) - temp_t4;
    temp_a0_2 = temp_a0 - temp_v0;
    if ((((temp_t3 - temp_v0) * temp_t2_2) >= ((temp_a2 - temp_v1) * temp_a0_2)) && (((temp_t0 - temp_v1) * temp_a0_2) >= ((temp_a3 - temp_v0) * temp_t2_2))) {
        return 1;
    }
    return 0;
}
