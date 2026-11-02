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

s32 func_8006B294_ovl_01(void *arg0) {
    s32 var_a0;
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a0 = 0;
    if (!(var_v1 & 1)) {
        do {
            var_v1 = var_v1 >> 1;
            var_a0 -= 0x708;
        } while (!(var_v1 & 1));
    }
    return var_a0;
}
