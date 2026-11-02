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

s32 func_800042F4(void *arg0, void *arg1) {
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;
    void *var_a1;
    void *var_s0;

    var_a1 = NULL;
    var_s0 = arg0;
    if (var_s0 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_s0, void **, -4);
            M2C_FIELD(var_s0, void **, -4) = var_a1;
            var_a1 = var_s0;
            var_s0 = temp_v0;
        } while (var_s0 != NULL);
    }
    if (var_a1 != NULL) {
        do {
            temp_a1 = var_a1 - 8;
            temp_s0 = M2C_FIELD(temp_a1, void **, 4);
            M2C_FIELD(arg1, M2C_UNK (**)(s32, void *), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), temp_a1);
            var_a1 = temp_s0;
        } while (var_a1 != NULL);
    }
    return 0;
}
