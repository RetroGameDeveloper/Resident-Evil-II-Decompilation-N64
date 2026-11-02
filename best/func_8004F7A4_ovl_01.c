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

s32 func_8004F7A4_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = M2C_FIELD(arg1, u16 *, 0x12C) + arg2;
    temp_a0 = M2C_FIELD(arg1, u16 *, 0x12E) + arg2;
    if (((u32) (temp_v0 * 2) >= (u32) ((M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0x120)) + temp_v0)) && ((u32) (temp_a0 * 2) >= (u32) ((M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 0x128)) + temp_a0))) {
        var_v0 = 1;
        if (arg3 != 0) {
            temp_v1 = M2C_FIELD(arg1, u16 *, 0x13A) - 1;
            if (temp_v1 < 0) {
                /* Duplicate return node #4. Try simplifying control flow for better match */
                return 0;
            }
            var_v0 = 0;
            if ((u32) ((temp_v1 * 2) + 1) >= (u32) ((M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 0x124)) + temp_v1)) {
                var_v0 = 1;
            }
            /* Duplicate return node #7. Try simplifying control flow for better match */
            return var_v0;
        }
        return var_v0;
    }
    return 0;
}
