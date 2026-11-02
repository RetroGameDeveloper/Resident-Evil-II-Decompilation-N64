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

void func_80165CEC_ovl_15(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 var_t0;
    void *var_v1;

    var_t0 = 0;
    if (arg1 != 0) {
        var_v1 = M2C_FIELD(arg0, void **, 0x234);
        do {
            var_t0 += 1;
            M2C_FIELD(var_v1, s32 *, 0x60) = (s32) ((M2C_FIELD(var_v1, s32 *, 0x60) & 0xFF000000) | ((arg4 << 0x10) | (arg3 << 8) | arg2));
            var_v1 += 0x178;
        } while (var_t0 < arg1);
    }
}
